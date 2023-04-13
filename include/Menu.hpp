#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"

namespace DX11_Base {
	class Menu
	{
	public:
		ImColor dbg_RAINBOW{};				//	RAINBOW THEME COLORS
		bool dbg_RAINBOW_THEME = FALSE;		//	RAINBOW THEME BOOLEAN
		float sOpacity = 0.80;				//	Opacity for SunShade Window
		bool dbg_ALERTS = TRUE;

		//	INITIALIZE CLASS
		Menu()  noexcept = default;
		~Menu() noexcept = default;
		Menu(Menu const&) = delete;
		Menu(Menu&&) = delete;
		Menu& operator=(Menu const&) = delete;
		Menu& operator=(Menu&&) = delete;

		//	FORWARD DECLARE FUNCTIONS
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

		char* MenuName = (char*)("OHD Internal V6 - By ArilisDev");

		// Aimbot Config
		bool AimbotEnabled = false;
		float AimbotFOV = 120;
		int AimbotKey = 6;
		bool AimbotIgnoreFOV = false;
		bool AimbotVisibleOnly = false;
		bool AimbotTargetTeam = false;
		bool AimbotShowFOV = false;
		bool AimbotFOVRaycasting = false;
		float AimbotFOVColor[3] = { 0.75f, 0.75f, 0.75f };

		// ESP Config
		bool ESPEnabled = false;
		bool ESPNametag = false;
		bool ESPSnapline = false;
		bool ESPVisibleOnly = false;
		bool ESPIgnoreTeam = false;
		bool ESPHeadDot = false;
		bool ESPSkeleton = false;
		float ESPColor[3] = { 1.f, 1.f, 1.f };
		float ESPVisibleColor[3] = { 0.98f, .90f, .01f };
		
		// Player Config
		bool Desync = false;
		bool ResetFly = false;
		bool Noclip = false;
		float CameraFOV = 90;
		bool Fly = false;
		

	private:
		bool m_StyleInit{};
	};
	inline std::unique_ptr<Menu> g_Menu;
}
