#include "../pch.h"
#include "../include/Menu.hpp"

namespace DX11_Base {

    ImVec4 rgb2imvec4(float r, float g, float b) {
        r = r / 255;
        g = g / 255;
        b = b / 255;
        return ImVec4(r, g, b, 1.f);
    }
   
	namespace Styles {
        void InitStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);

            //  Base ImGui Styling , Aplying a custyom style is left up to you.
            ImGui::StyleColorsClassic();

            /// EXAMPLE COLOR 
            //colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);

            //	COLORS
            if (g_Menu->dbg_RAINBOW_THEME) {
                //  RGB MODE STLYE PROPERTIES
                colors[ImGuiCol_Separator] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_TitleBg] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgActive] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0, 0, 0, 1.0f);
            }
            else {
                style.Alpha = 1.0f;
                style.DisabledAlpha = 0.6000000238418579f;
                style.WindowPadding = ImVec2(8.0f, 8.0f);
                style.WindowRounding = 4.0f;
                style.WindowBorderSize = 0.0f;
                style.WindowMinSize = ImVec2(32.0f, 32.0f);
                style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
                style.WindowMenuButtonPosition = ImGuiDir_Left;
                style.ChildRounding = 0.0f;
                style.ChildBorderSize = 1.0f;
                style.PopupRounding = 4.0f;
                style.PopupBorderSize = 1.0f;
                style.FramePadding = ImVec2(4.0f, 3.0f);
                style.FrameRounding = 2.5f;
                style.FrameBorderSize = 0.0f;
                style.ItemSpacing = ImVec2(8.0f, 4.0f);
                style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
                style.CellPadding = ImVec2(4.0f, 2.0f);
                style.IndentSpacing = 21.0f;
                style.ColumnsMinSpacing = 6.0f;
                style.ScrollbarSize = 11.0f;
                style.ScrollbarRounding = 2.5f;
                style.GrabMinSize = 10.0f;
                style.GrabRounding = 2.0f;
                style.TabRounding = 3.5f;
                style.TabBorderSize = 0.0f;
                style.TabMinWidthForCloseButton = 0.0f;
                style.ColorButtonPosition = ImGuiDir_Right;
                style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
                style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

                style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
                style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.5921568870544434f, 0.5921568870544434f, 0.5921568870544434f, 1.0f);
                style.Colors[ImGuiCol_WindowBg] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_ChildBg] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_PopupBg] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_Border] = ImVec4(0.3058823645114899f, 0.3058823645114899f, 0.3058823645114899f, 1.0f);
                style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.3058823645114899f, 0.3058823645114899f, 0.3058823645114899f, 1.0f);
                style.Colors[ImGuiCol_FrameBg] = ImVec4(0.2000000029802322f, 0.2000000029802322f, 0.2156862765550613f, 1.0f);
                style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_TitleBg] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.2000000029802322f, 0.2000000029802322f, 0.2156862765550613f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.2000000029802322f, 0.2000000029802322f, 0.2156862765550613f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.321568638086319f, 0.321568638086319f, 0.3333333432674408f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.3529411852359772f, 0.3529411852359772f, 0.3725490272045135f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.3529411852359772f, 0.3529411852359772f, 0.3725490272045135f, 1.0f);
                style.Colors[ImGuiCol_CheckMark] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_Button] = ImVec4(0.2000000029802322f, 0.2000000029802322f, 0.2156862765550613f, 1.0f);
                style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_Header] = ImVec4(0.2000000029802322f, 0.2000000029802322f, 0.2156862765550613f, 1.0f);
                style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_Separator] = ImVec4(0.3058823645114899f, 0.3058823645114899f, 0.3058823645114899f, 1.0f);
                style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.3058823645114899f, 0.3058823645114899f, 0.3058823645114899f, 1.0f);
                style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.3058823645114899f, 0.3058823645114899f, 0.3058823645114899f, 1.0f);
                style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.2000000029802322f, 0.2000000029802322f, 0.2156862765550613f, 1.0f);
                style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.321568638086319f, 0.321568638086319f, 0.3333333432674408f, 1.0f);
                style.Colors[ImGuiCol_Tab] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TabHovered] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_TabActive] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_PlotLines] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.1137254908680916f, 0.5921568870544434f, 0.9254902005195618f, 1.0f);
                style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882352977991104f, 0.1882352977991104f, 0.2000000029802322f, 1.0f);
                style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.3098039329051971f, 0.3098039329051971f, 0.3490196168422699f, 1.0f);
                style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.2274509817361832f, 0.2274509817361832f, 0.2470588237047195f, 1.0f);
                style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.05999999865889549f);
                style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.0f, 0.4666666686534882f, 0.7843137383460999f, 1.0f);
                style.Colors[ImGuiCol_DragDropTarget] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.699999988079071f);
                style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.2000000029802322f);
                style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.1450980454683304f, 0.1450980454683304f, 0.1490196138620377f, 1.0f);
            }
        }
	}
    
   
	namespace Tabs {
        ImColor TextColor = rgb2imvec4(192, 192, 192);
        void TABAimbot() {
            
            float winWidth = ImGui::GetContentRegionAvail().x;
            float winHeight = ImGui::GetContentRegionAvail().y;
            
            ImGui::TextColored(TextColor, "Global");
            ImGui::Checkbox((char*)"Aimbot Enabled", &g_Menu->AimbotEnabled);
            ImGui::Separator();
            ImGui::TextColored(TextColor, "Settings");
            ImGui::Checkbox((char*)"Show FOV", &g_Menu->AimbotShowFOV);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Barrel FOV", &g_Menu->AimbotFOVRaycasting);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Ignore FOV", &g_Menu->AimbotIgnoreFOV);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Target Team", &g_Menu->AimbotTargetTeam);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Visible Only", &g_Menu->AimbotVisibleOnly);
            ImGui::TextColored(TextColor, "FOV");
            ImGui::PushItemWidth(winWidth);
            ImGui::SliderFloat((char*)"##FOV", &g_Menu->AimbotFOV, 0.f, 1000.f, (char*)"%.0f");
            ImGui::PopItemWidth();
            ImGui::Hotkey((char*)"Aimbot Key", g_Menu->AimbotKey, NULL, ImVec2(325, 20));
            ImGui::SameLine();
            ImGui::ColorEdit3("FOV Color", g_Menu->AimbotFOVColor, ImGuiColorEditFlags_NoInputs);


        };
        void TABESP() {
            ImGui::TextColored(TextColor, "Global");
            ImGui::Checkbox((char*)"ESP Enabled", &g_Menu->ESPEnabled);
            ImGui::Separator();
            ImGui::TextColored(TextColor, "Players");
            ImGui::Checkbox((char*)"Head Dot", &g_Menu->ESPHeadDot);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Nametags", &g_Menu->ESPNametag);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Snaplines", &g_Menu->ESPSnapline);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Skeleton", &g_Menu->ESPSkeleton);
            ImGui::TextColored(TextColor, "Settings");
            ImGui::Checkbox((char*)"Ignore Team", &g_Menu->ESPIgnoreTeam);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Visible Only", &g_Menu->ESPVisibleOnly);
            ImGui::SameLine();
            ImGui::ColorEdit3("Color", g_Menu->ESPColor, ImGuiColorEditFlags_NoInputs);
            ImGui::SameLine();
            ImGui::ColorEdit3("Visible Color", g_Menu->ESPVisibleColor, ImGuiColorEditFlags_NoInputs);
        };
       
        void TABWeapon() {
            float winWidth = ImGui::GetContentRegionAvail().x;
            float winHeight = ImGui::GetContentRegionAvail().y;
            ImGui::TextColored(TextColor, "Mods");
            ImGui::Checkbox((char*)"Infinite Ammo", &g_Menu->InfiniteAmmo);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Full Auto", &g_Menu->FullAuto);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"No Recoil", &g_Menu->NoRecoil);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Insane Fire Rate", &g_Menu->FireRate);
            ImGui::PushItemWidth(330);
            ImGui::SliderInt((char*)"Shots Per Burst", &g_Menu->ShotsPerBurst, 3, 32, (char*)"%1.0");
            ImGui::PopItemWidth();
            ImGui::Separator();
            ImGui::TextColored(TextColor, "Nuker");
            ImGui::Hotkey((char*)"Nuker Key", g_Menu->NukerKey, NULL, ImVec2(300, 18));
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Target Team", &g_Menu->NukerTargetTeam);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Visible Only", &g_Menu->NukerVisibleOnly);
            
        };
        void TABMisc()
        {
            float winWidth = ImGui::GetContentRegionAvail().x;
            ImGui::Checkbox((char*)"Fly", &g_Menu->Fly);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Noclip", &g_Menu->Noclip);
            ImGui::SameLine();
            ImGui::Checkbox((char*)"Desync", &g_Menu->Desync);
            ImGui::SliderFloat((char*)"FOV", &g_Menu->CameraFOV, 70.f, 160.f, (char*)"%.0f");
            ImGui::SliderFloat((char*)"Speed", &g_Menu->Speed, 1.f, 5.f, (char*)"%.0f");
            if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetWindowContentRegionWidth() - 3, 20))) {
#if DEBUG
                g_Console->printdbg("\n\n[+] UNHOOK INITIALIZED [+]\n\n", g_Console->color.red);
#endif
                g_KillSwitch = TRUE;
            }
        }
	}

	void Menu::Draw()
	{
		if (g_GameVariables->m_ShowMenu)
			MainMenu();

		if (g_GameVariables->m_ShowHud)
			HUD(&g_GameVariables->m_ShowHud);

		if (g_GameVariables->m_ShowDemo)
			ImGui::ShowDemoWindow();
	}

	void Menu::MainMenu()
	{
        if (!g_GameVariables->m_ShowDemo)
            Styles::InitStyle();

        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(g_Menu->dbg_RAINBOW));
        }
        if (!ImGui::Begin(g_Menu->MenuName, &g_GameVariables->m_ShowMenu, 96))
        {
            ImGui::End();
            return;
        }
        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
        }

        if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
        {
            if (ImGui::BeginTabItem("Aimbot"))
            {
                Tabs::TABAimbot();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("ESP"))
            {
                Tabs::TABESP();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Weapon"))
            {
                Tabs::TABWeapon();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Miscellaneous"))
            {
                Tabs::TABMisc();
                ImGui::EndTabItem();
            }

           
            ImGui::EndTabBar();
        }
        ImGui::End();
	}

	void Menu::HUD(bool* p_open)
	{

	}

	void Menu::Loops()
	{

	}
}