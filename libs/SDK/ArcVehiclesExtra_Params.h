﻿#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.25.4_v0.12.0.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ArcVehiclesExtra.ArcVehicleSpawner.SpawnVehicleTimerEnd
	 */
	struct AArcVehicleSpawner_SpawnVehicleTimerEnd_Params
	{	};

	/**
	 * Function ArcVehiclesExtra.ArcVehicleSpawner.OnVehicleDestroyed
	 */
	struct AArcVehicleSpawner_OnVehicleDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
