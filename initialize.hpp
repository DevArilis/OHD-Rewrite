#pragma once
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"
#include "./includes.h"

using namespace DX11_Base;

#define KeyPressed( k ) ( GetAsyncKeyState(k) & 0x8000 )
#define Nullcheck(x) if (x == NULL || x == nullptr || !x) {return;}
#define NullcheckC(x) if (x == NULL || x == nullptr || !x) {continue;}
#define M_PI 3.14159265358979323846
int PostRenderIndex = 97;

/*
CG::FVector sdkhelper::get_bone_position(CG::AMordhauPlayerState * player, int boneid) {
    CG::FVector head_pos{ 0,0,0 };

    auto pawn = (CG::AMordhauCharacter*)player->PawnPrivate;
    if (!pawn) return head_pos;

    auto mesh = pawn->Mesh;
    if (!mesh) return head_pos;

    return mesh->GetSocketLocation(mesh->GetBoneIndex("head"));
}*/

FVector BoneToLocation(AHDPlayerCharacter * Player, int BoneId) {
    FVector NULLReturn = { 0, 0, 0 };

    if (!Player) return NULLReturn;

    USkeletalMeshComponent* Mesh = Player->Mesh;
    if (!Mesh) return NULLReturn;

    FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
    return BoneLocation;
}

FVector2D BoneToScreenLocation(APlayerController * Controller, AHDPlayerCharacter * Player, int BoneId) {
    FVector2D NULLReturn = { 0,0 };
    
    if (!Controller) return NULLReturn;
    if (!Player) return NULLReturn;

    USkeletalMeshComponent* Mesh = Player->Mesh;
    if (!Mesh) return NULLReturn;

    FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
    FVector2D BoneScreenLocation;
    if (Controller->ProjectWorldLocationToScreen(BoneLocation, &BoneScreenLocation, false)) {
        return BoneScreenLocation;
    } 
    else return NULLReturn;
}


FVector inline VectorSubtract(FVector Vector1, FVector Vector2)
{
    FVector Vec;
    Vec.X = Vector1.X - Vector2.X;
    Vec.Y = Vector1.Y - Vector2.Y;
    Vec.Z = Vector1.Z - Vector2.Z;
    return Vec;
}

FVector inline VectorAdd(FVector Vector1, FVector Vector2)
{
    FVector Vec;
    Vec.X = Vector1.X + Vector2.X;
    Vec.Y = Vector1.Y + Vector2.Y;
    Vec.Z = Vector1.Z + Vector2.Z;
    return Vec;
}

void SetRotation(UCanvas* Canvas, AHDPlayerCharacter* Target, FVector AimLocation, bool is_visible)
{
    UWorld** p_uworld = reinterpret_cast<UWorld**>(UWorld::GWorld);
    Nullcheck(p_uworld);
    Nullcheck(*p_uworld);
    UGameInstance* OwningGameInstance = (*p_uworld)->OwningGameInstance;
    Nullcheck(OwningGameInstance);
    auto GameState = (*p_uworld)->GameState;
    Nullcheck(GameState);
    UWorld* gworld = UWorld::GWorld[0];
    Nullcheck(gworld);
    ULocalPlayer* localplayer = gworld->OwningGameInstance->LocalPlayers[0];
    Nullcheck(localplayer);
    auto Camera = localplayer->PlayerController->PlayerCameraManager;
    FRotator AimRotation;
    //	FRotator AimRotation_Temp;
    FVector  MyLocation = FVector();
    FRotator MyRotation = FRotator();
    FVector Velocity = FVector();
    FVector Difference = FVector();

    if (!Target || !localplayer->PlayerController || !Camera) return;

    // Get player location and rotator
    MyLocation = Camera->GetCameraLocation();
    MyRotation = Camera->GetCameraRotation();

    // Check angles
    //float ViewAngle = GetViewAngle(Canvas, Target->Location, MyLocation, MyRotation);
    //if (!CheckAngle(ViewAngle, gUE.gPlayerController->FOVAngle / 5.0f)) return;

    // Check visibility
    if (g_Menu->AimbotVisibleOnly && !is_visible) { return; }

    // Accuracy adjustments
    float fDistance;
    auto gMath = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
    Difference = VectorSubtract(AimLocation, MyLocation);
    fDistance = gMath->STATIC_VSize(Difference);
    float TimeScale = 0.0193f;
    Nullcheck(localplayer);
    Nullcheck(localplayer->PlayerController);
    Nullcheck(localplayer->PlayerController->Pawn);
    Nullcheck(localplayer->PlayerController->Pawn->PlayerState);
    short Ping = localplayer->PlayerController->Pawn->PlayerState->Ping * 4;
    float ScaleValue = (float)(Ping)+(float)(fDistance * TimeScale); // most bullets here are just projectiles, so do a bit of velocity tweaking
    if (ScaleValue < 1.0f) ScaleValue = 1.0;
    float fVelocity;
    Velocity = Target->GetVelocity();
    fVelocity = gMath->STATIC_VSize(Velocity);
    if (fVelocity > 130.0f)
    {
        Velocity.X *= ScaleValue / fVelocity; Velocity.Y *= ScaleValue / fVelocity; Velocity.Z *= ScaleValue / fVelocity;
        AimLocation = VectorAdd(AimLocation, Velocity);
    }

    AimRotation = gMath->STATIC_FindLookAtRotation(MyLocation, AimLocation);

    //gUE.gPlayerController->PlayerCameraManager->ViewTarget.POV.Rotation = AimRotation;
    localplayer->PlayerController->ClientSetRotation(AimRotation, false);
}

void DrawLine(UCanvas * canvas, FVector2D Position1, FVector2D Position2, float Thickness, CG::FLinearColor Color) {
    canvas->K2_DrawLine(Position1, Position2, Thickness, Color);
}

inline UFont* get_font()
{
    static UFont* font;
    if (!font)
        font = UObject::FindObject<UFont>("Font RobotoDistanceField.RobotoDistanceField");

    return font;
}

float distanceTo(FVector main, FVector other)
{
    float dx = main.X - other.X;
    float dy = main.Y - other.Y;
    float dz = main.Z - other.Z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

FLinearColor rgb2rgbfl(float r, float g, float b) {
    r = r / 255;
    g = g / 255;
    b = b / 255;
    return FLinearColor(r, g, b, 1.f);
}


void GetDesktopResolution(float& horizontal, float& vertical)
{
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

inline int MenuKey = 45;

void DrawCircle(UCanvas* canvas, FVector2D pos, int radius, int numSides, FLinearColor Color)
{
    float PI = 3.1415927f;

    float Step = PI * 2.0 / numSides;
    int Count = 0;
    FVector2D V[128];
    for (float a = 0; a < PI * 2.0; a += Step) {
        float X1 = radius * cos(a) + pos.X;
        float Y1 = radius * sin(a) + pos.Y;
        float X2 = radius * cos(a + Step) + pos.X;
        float Y2 = radius * sin(a + Step) + pos.Y;
        V[Count].X = X1;
        V[Count].Y = Y1;
        V[Count + 1].X = X2;
        V[Count + 1].Y = Y2;
        //Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ X2, Y2 }, 1.0f, Color); // Points from Centre to ends of circle
        canvas->K2_DrawLine(FVector2D{ V[Count].X, V[Count].Y }, FVector2D{ X2, Y2 }, 1.0f, Color);// Circle Around
    }
}

void ClientBGThread()
{
    while (g_Running) {
        g_Menu->Loops();
        std::this_thread::sleep_for(0ms);
        std::this_thread::yield();
    }
}

inline float horizontal = 0;
inline float vertical = 0;

int random(int min, int max) //range : [min, max]
{
    static bool first = true;
    if (first)
    {
        srand(time(NULL)); //seeding for the first time only!
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}

void NullcheckWeapon(AHDPlayerCharacter* character, AHDBaseWeapon* weapon) {
    Nullcheck(character);
    Nullcheck(weapon);
    // useless but makes me thing i save time.
}

void Nuke() {
    UWorld** p_uworld = reinterpret_cast<UWorld**>(UWorld::GWorld);
    Nullcheck(p_uworld);
    Nullcheck(*p_uworld);
    UGameInstance* OwningGameInstance = (*p_uworld)->OwningGameInstance;
    Nullcheck(OwningGameInstance);
    auto GameState = (*p_uworld)->GameState;
    Nullcheck(GameState);
    UWorld* gworld = UWorld::GWorld[0];
    Nullcheck(gworld);
    ULocalPlayer* localplayer = gworld->OwningGameInstance->LocalPlayers[0];
    Nullcheck(localplayer);

    auto pArray = GameState->PlayerArray;
    if (pArray.Count() > 1) {
        for (USHORT i = 0; i < pArray.Count(); i++) {
            auto& ent = pArray[i];
            if (ent != localplayer->PlayerController->PlayerState) {
                if (ent->PawnPrivate == nullptr) continue;
                auto PlayerCharacter = static_cast<AHDPlayerCharacter*>(ent->PawnPrivate);
                NullcheckC(PlayerCharacter);
                if (PlayerCharacter->Health <= 0) continue;
                AHDPlayerCharacter* SelfPlayerCharacter = static_cast<AHDPlayerCharacter*>(localplayer->PlayerController->AcknowledgedPawn);
                NullcheckC(SelfPlayerCharacter);

                if (!PlayerCharacter->PlayerState) continue;

                if (PlayerCharacter->PlayerState == SelfPlayerCharacter->PlayerState) continue;

                if (!PlayerCharacter->RootComponent) continue;

                if (g_Menu->NukerTargetTeam && PlayerCharacter->TeamState != SelfPlayerCharacter->TeamState) continue;
                if (!g_Menu->AimbotTargetTeam && PlayerCharacter->TeamState == SelfPlayerCharacter->TeamState) continue;

                bool EntityVisible = localplayer->PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);
                if (g_Menu->NukerVisibleOnly && !EntityVisible) continue;

                auto Location = PlayerCharacter->ReplicatedMovement.Location;
                auto BaseWeapon = reinterpret_cast<AHDBaseWeapon*>(SelfPlayerCharacter->EquippedItem);
                NullcheckC(BaseWeapon);
                BaseWeapon->ServerFireProjectile(Location, {});
            }
        }
    }
}


typedef void(__thiscall* post_render_type)(UGameViewportClient*, UCanvas*);
post_render_type original_post_render = nullptr;
void Hook(UGameViewportClient* vp_client, UCanvas* canvas)
{

    try
    {
        GetDesktopResolution(horizontal, vertical);
        auto winCenter = FVector2D{ static_cast<float>(horizontal * 0.5), static_cast<float>(vertical * 0.5) };
        auto winTopCenter = FVector2D{ static_cast<float>(horizontal * 0.5), 0 };
        canvas->K2_DrawText(get_font(), FString(L"[OHD Internal V6]\nDefault Menu Key: INSERT\nBy ArilisDev - discord.gg/8T28TdwR5d"), FVector2D(10, 15), FVector2D(0.5f, 0.5f), rgb2rgbfl(252, 232, 3), 1.0f, CG::FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, CG::FLinearColor(0, 0, 0, 1));
        UWorld** _UWorld = reinterpret_cast<UWorld**>(UWorld::GWorld);
        Nullcheck(_UWorld);
        Nullcheck(*_UWorld);
        UGameInstance* OwningGameInstance = (*_UWorld)->OwningGameInstance;
        Nullcheck(OwningGameInstance);
        auto GameState = (*_UWorld)->GameState;
        Nullcheck(GameState);
        auto PersistentLevel = (*_UWorld)->PersistentLevel;
        Nullcheck(PersistentLevel);
        UWorld* _GWorld = UWorld::GWorld[0];
        Nullcheck(_GWorld);
        ULocalPlayer* LocalPlayer = _GWorld->OwningGameInstance->LocalPlayers[0];
        Nullcheck(LocalPlayer);
        auto PlayerController = LocalPlayer->PlayerController;
        Nullcheck(PlayerController);
        ADFBaseCharacter* SelfBaseCharacter = static_cast<ADFBaseCharacter*>(PlayerController->AcknowledgedPawn);
        Nullcheck(SelfBaseCharacter);
        AHDPlayerCharacter* SelfPlayerCharacter = static_cast<AHDPlayerCharacter*>(PlayerController->AcknowledgedPawn);
        Nullcheck(SelfPlayerCharacter);
        const auto GameplayStats = (UGameplayStatics*)UGameplayStatics::StaticClass();
        Nullcheck(GameplayStats);

        if (canvas && g_Menu->AimbotShowFOV) {
            if (g_Menu->AimbotFOVRaycasting) {
                if (SelfBaseCharacter->GetEquippedItem()->IsA(ADFBaseGun::StaticClass())) {
                    auto Weapon = (ADFBaseGun*)(SelfBaseCharacter->EquippedItem);
                    FVector BarrelLocation = Weapon->GetMuzzleLocation(true);
                    FVector2D BarrelEnd;
                    if (PlayerController->ProjectWorldLocationToScreen(BarrelLocation, &BarrelEnd, true)) {
                        DrawCircle(canvas, BarrelEnd, g_Menu->AimbotFOV, 99, FLinearColor{ g_Menu->AimbotFOVColor[0], g_Menu->AimbotFOVColor[1], g_Menu->AimbotFOVColor[2], 1.f });
                    }
                }
            }
            else {
                DrawCircle(canvas, winCenter, g_Menu->AimbotFOV, 99, FLinearColor{ g_Menu->AimbotFOVColor[0], g_Menu->AimbotFOVColor[1], g_Menu->AimbotFOVColor[2], 1.f });
            }
        }

        TArray<AActor*> PlayerCharacters{};
        GameplayStats->STATIC_GetAllActorsOfClass((*_UWorld), AHDPlayerCharacter::StaticClass(), &PlayerCharacters);
        // ESP
        for (int i = 0; i < PlayerCharacters.Count(); i++) {
            auto Object = PlayerCharacters[i];
            AHDPlayerCharacter* PlayerCharacter = (AHDPlayerCharacter*)(Object);
            NullcheckC(PlayerCharacter);
            
            FLinearColor Color = FLinearColor{ g_Menu->ESPColor[0], g_Menu->ESPColor[1], g_Menu->ESPColor[2], 1.f };
            FLinearColor VisibleColor = FLinearColor{ g_Menu->ESPVisibleColor[0], g_Menu->ESPVisibleColor[1], g_Menu->ESPVisibleColor[2], 1.f };

            if (g_Menu->ESPEnabled) {
                if (!PlayerCharacter->PlayerState) continue;

                if (PlayerCharacter->PlayerState == SelfPlayerCharacter->PlayerState) continue;

                if (!PlayerCharacter->RootComponent) continue;

                if (g_Menu->ESPIgnoreTeam && PlayerCharacter->TeamState == SelfPlayerCharacter->TeamState) continue;

                bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);
                if (g_Menu->ESPVisibleOnly && !EntityVisible) continue;

                FVector2D ScreenLocation;
                PlayerController->ProjectWorldLocationToScreen(PlayerCharacter->RootComponent->RelativeLocation, &ScreenLocation, false);
                if (ScreenLocation.X <= 0 || ScreenLocation.Y <= 0)  continue; 

                int Distance = (int)distanceTo(SelfPlayerCharacter->RootComponent->RelativeLocation, PlayerCharacter->RootComponent->RelativeLocation) / 100;
                
                FVector2D HeadLocation = BoneToScreenLocation(PlayerController, PlayerCharacter, 48);
                if (HeadLocation.X == 0 && HeadLocation.Y == 0) continue;

                FVector2D LeftFootLocation = BoneToScreenLocation(PlayerController, PlayerCharacter, 52);
                if (LeftFootLocation.X == 0 && LeftFootLocation.Y == 0) continue;

                // Snaplines
                if (g_Menu->ESPSnapline) {
                    canvas->K2_DrawLine(winTopCenter, HeadLocation, 1.f, EntityVisible ? VisibleColor : Color);
                }

                // Nametags
                if (g_Menu->ESPNametag) {
                    FString PlayerName = FString((PlayerCharacter->PlayerState->GetPlayerName().wc_str() + std::wstring(L" [") + std::to_wstring(Distance) + L"m]").c_str());
                    canvas->K2_DrawText(get_font(), PlayerName, FVector2D{ LeftFootLocation.X, LeftFootLocation.Y + 5}, FVector2D(0.35f, 0.35f), EntityVisible ? VisibleColor : Color, 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                }

                // Head Dot // 48 Head
                if (g_Menu->ESPHeadDot) {
                    DrawCircle(canvas, HeadLocation, 3, 99, EntityVisible ? VisibleColor : Color);
                }

                // Skeleton
                if (g_Menu->ESPSkeleton) {
                    std::vector<int> LeftArmtoRightArm = { 7, 6, 2, 27, 28 };
                    std::vector<int> HeadtoLeftFoot = { 5, 2, 1, 49, 50, 52 };
                    std::vector<int> PelvistoRightFoot = { 1, 55, 56, 58 };
                    std::vector<std::vector<int>> SkeletonVec{ LeftArmtoRightArm, HeadtoLeftFoot, PelvistoRightFoot };

                    for (std::vector<int>& BodyPart : SkeletonVec) {
                        FVector2D PrevScreenPosition;

                        for (size_t i = 0; i < BodyPart.size(); i++) {
                            int BoneId = BodyPart.at(i);

                            FVector2D BoneScreenPosition = BoneToScreenLocation(PlayerController, PlayerCharacter, static_cast<int>(BoneId));

                            if (i != 0) canvas->K2_DrawLine(PrevScreenPosition, BoneScreenPosition, 1.f, EntityVisible ? VisibleColor : Color);
                            PrevScreenPosition = BoneScreenPosition;
                        }
                    }
                }
            }
        }

        // Aimbot
        for (int i = 0; i < PlayerCharacters.Count(); i++) {
            auto Object = PlayerCharacters[i];
            AHDPlayerCharacter* PlayerCharacter = (AHDPlayerCharacter*)(Object);
            NullcheckC(PlayerCharacter);

            if (g_Menu->AimbotEnabled) {
                if (!PlayerCharacter->PlayerState) continue;

                if (PlayerCharacter->PlayerState == SelfPlayerCharacter->PlayerState) continue;

                if (!PlayerCharacter->RootComponent) continue;

                if (!g_Menu->AimbotTargetTeam && PlayerCharacter->TeamState == SelfPlayerCharacter->TeamState) continue;

                bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);
                if (g_Menu->AimbotVisibleOnly && !EntityVisible) continue;

                FVector2D ScreenLocation;
                PlayerController->ProjectWorldLocationToScreen(PlayerCharacter->RootComponent->RelativeLocation, &ScreenLocation, false);
                if (ScreenLocation.X <= 0 || ScreenLocation.Y <= 0)  continue;

                FVector HeadLocation = BoneToLocation(PlayerCharacter, 48);
                FVector2D HeadScreenLocation = BoneToScreenLocation(PlayerController, PlayerCharacter, 48);
                if (HeadLocation.X == 0 && HeadLocation.Y == 0) continue;
                if (HeadScreenLocation.X == 0 && HeadScreenLocation.Y == 0) continue;

                if (g_Menu->AimbotFOVRaycasting) {
                    if (SelfBaseCharacter->GetEquippedItem()->IsA(ADFBaseGun::StaticClass())) {
                        auto Weapon = (ADFBaseGun*)(SelfBaseCharacter->EquippedItem);
                        FVector BarrelLocation = Weapon->GetMuzzleLocation(true);
                        FVector2D BarrelEnd;
                        if (PlayerController->ProjectWorldLocationToScreen(BarrelLocation, &BarrelEnd, true)) {
                            if ((HeadScreenLocation.X - BarrelEnd.X) * (HeadScreenLocation.X - BarrelEnd.X) + (HeadScreenLocation.Y - BarrelEnd.Y) * (HeadScreenLocation.Y - BarrelEnd.Y) <= g_Menu->AimbotFOV * g_Menu->AimbotFOV - 5) {
                                if (KeyPressed(g_Menu->AimbotKey)) {
                                    SetRotation(canvas, PlayerCharacter, HeadLocation, EntityVisible);
                                }
                            }
                        }
                    }
                }
                else if (g_Menu->AimbotIgnoreFOV) {
                    if (g_Menu->AimbotFOVRaycasting) g_Menu->AimbotFOVRaycasting = false;
                    if (KeyPressed(g_Menu->AimbotKey)) {
                        SetRotation(canvas, PlayerCharacter, HeadLocation, EntityVisible);
                    }
                }
                else {
                    if ((HeadScreenLocation.X - winCenter.X) * (HeadScreenLocation.X - winCenter.X) + (HeadScreenLocation.Y - winCenter.Y) * (HeadScreenLocation.Y - winCenter.Y) <= g_Menu->AimbotFOV * g_Menu->AimbotFOV - 5) {
                        if (KeyPressed(g_Menu->AimbotKey)) {
                            SetRotation(canvas, PlayerCharacter, HeadLocation, EntityVisible);
                        }
                    }
                }
            }
        }

        Nullcheck(SelfPlayerCharacter->EquippedItem);
        auto Weapon = (AHDBaseWeapon*)(SelfPlayerCharacter->EquippedItem);

        // Weapon
        if (g_Menu->FullAuto) {
            NullcheckWeapon(SelfPlayerCharacter, Weapon);
            auto Mode = EFireMode::Auto;
            if (Weapon->SelectedFireMode != Mode) {
                Weapon->SelectedFireMode = Mode;
            }
        }

        if (g_Menu->InfiniteAmmo) {
            NullcheckWeapon(SelfPlayerCharacter, Weapon);
            Weapon->bUsesAmmo = false;
            g_Menu->infAmmoCheck = true;
        }
        else {
            if (g_Menu->infAmmoCheck && !g_Menu->InfiniteAmmo) {
                NullcheckWeapon(SelfPlayerCharacter, Weapon);
                Weapon->bUsesAmmo = true;
                g_Menu->infAmmoCheck = true;
            }
        }

        if (g_Menu->NoRecoil) {
            NullcheckWeapon(SelfPlayerCharacter, Weapon);
            if (Weapon->bNoRecoil != g_Menu->NoRecoil) {
                Weapon->bNoRecoil = true;
            }
        }

        if (g_Menu->FireRate) {
            NullcheckWeapon(SelfPlayerCharacter, Weapon);
            if (Weapon->FireRate != 0.0001f) {
                Weapon->FireRate = 0.0001f;
            }
        }

        if (g_Menu->ShotsPerBurst > 3.0f) {
            NullcheckWeapon(SelfPlayerCharacter, Weapon);
            Weapon->ShotsPerBurst = g_Menu->ShotsPerBurst;
        }

        if (KeyPressed(g_Menu->NukerKey)) {
            Nuke();
        }

        if (g_Menu->AutoNuke) {
            Nuke();
        }

        if (g_Menu->Fly && g_Menu->Desync) {
            g_Menu->Desync = false;
        }

        if (g_Menu->Fly)
        {
            SelfPlayerCharacter->SetReplicateMovement(false);
            SelfPlayerCharacter->CharacterMovement->MovementMode = EMovementMode::MOVE_Flying; // set to fly mode so we don't fall down
            g_Menu->ResetFly = true;
        }
        else if (g_Menu->ResetFly)
        {
            SelfPlayerCharacter->CharacterMovement->MovementMode = EMovementMode::MOVE_Falling;
            SelfPlayerCharacter->SetReplicateMovement(true);
            g_Menu->ResetFly = false;
        }

        if (g_Menu->Noclip) {
            SelfPlayerCharacter->bActorEnableCollision = false;
        }
        else {
            SelfPlayerCharacter->bActorEnableCollision = true;
        }

        bool check = false;
        if (g_Menu->Desync && !g_Menu->Fly) {
            SelfPlayerCharacter->SetReplicateMovement(false);
            check = true;
        }
        else if (check) {
            SelfPlayerCharacter->SetReplicateMovement(true);
        }
        
        Nullcheck(PlayerController->PlayerCameraManager);
        PlayerController->PlayerCameraManager->DefaultFOV = g_Menu->CameraFOV;
        
        SelfPlayerCharacter->CustomTimeDilation = g_Menu->Speed;
    }
    catch (std::exception& e)
    {
        return original_post_render(vp_client, canvas);
    }
    return original_post_render(vp_client, canvas);
}



void InitializeCheeze() {
    InitSdk();
    UWorld** _UWorld = reinterpret_cast<UWorld**>(UWorld::GWorld);
    Nullcheck(_UWorld);

    UGameInstance* OwningGameInstance = (*_UWorld)->OwningGameInstance;
    Nullcheck(OwningGameInstance);

    UWorld* _GWorld = UWorld::GWorld[0];
    Nullcheck(_GWorld);

    ULocalPlayer* LocalPlayer = _GWorld->OwningGameInstance->LocalPlayers[0];
    Nullcheck(LocalPlayer);

    auto GameViewportClient = LocalPlayer->ViewportClient;
    void** GameViewportClient_VTable = *reinterpret_cast<void***>(GameViewportClient);

    DWORD OldProtection;

    VirtualProtect(&GameViewportClient_VTable[PostRenderIndex], 8, PAGE_EXECUTE_READWRITE, &OldProtection);
    original_post_render = decltype(original_post_render)(GameViewportClient_VTable[PostRenderIndex]);
    GameViewportClient_VTable[PostRenderIndex] = Hook;
    VirtualProtect(&GameViewportClient_VTable[PostRenderIndex], 8, OldProtection, &OldProtection);

    return;
}

DWORD WINAPI MainThread_Initialize()
{
    g_Console = std::make_unique<Console>();

#if DEBUG
    g_Console->InitializeConsole("OHD - Debug Console");
#endif

    ///  ESTABLISH GAME DATA   
    g_GameData = std::make_unique<GameData>();
    g_GameVariables = std::make_unique<GameVariables>();

    ///  CREATE WINDOW AND ESTABLISH HOOKS
    g_D3D11Window = std::make_unique<D3D11Window>();
    g_Hooking = std::make_unique<Hooking>();
    g_Menu = std::make_unique<Menu>();
    g_Hooking->Hook();
    InitializeCheeze();

#if DEBUG
    g_Console->printdbg("Main::Initialized\n", g_Console->color.white);
#endif

    std::thread WCMUpdate(ClientBGThread);	//	Initialize Loops Thread
    ///  RENDER LOOP
    g_Running = TRUE;
    while (g_Running)
    {
        if (GetAsyncKeyState(VK_INSERT) & 1) g_GameVariables->m_ShowMenu = !g_GameVariables->m_ShowMenu;
    }

    ///  EXIT
    WCMUpdate.join();						//	Exit Loops Thread
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}