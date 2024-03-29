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
	 * Function ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C.VehicleFullBody
	 */
	struct UABPI_VehicleAnimLayer_C_VehicleFullBody_Params
	{
	public:
		struct FPoseLink                                           FullBody;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           VehicleFullBody;                                         // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C.VehicleLowerBody
	 */
	struct UABPI_VehicleAnimLayer_C_VehicleLowerBody_Params
	{
	public:
		struct FPoseLink                                           LowerBody;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           VehicleLowerBody;                                        // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
