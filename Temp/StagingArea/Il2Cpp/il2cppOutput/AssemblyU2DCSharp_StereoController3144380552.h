#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// GvrEye[]
struct GvrEyeU5BU5D_t3620642503;
// GvrHead
struct GvrHead_t3923315805;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Func`2<GvrEye,GvrHead>
struct Func_2_t4065379060;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StereoController
struct  StereoController_t3144380552  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean StereoController::keepStereoUpdated
	bool ___keepStereoUpdated_2;
	// System.Single StereoController::stereoMultiplier
	float ___stereoMultiplier_3;
	// System.Single StereoController::matchMonoFOV
	float ___matchMonoFOV_4;
	// System.Single StereoController::matchByZoom
	float ___matchByZoom_5;
	// UnityEngine.Transform StereoController::centerOfInterest
	Transform_t3275118058 * ___centerOfInterest_6;
	// System.Single StereoController::radiusOfInterest
	float ___radiusOfInterest_7;
	// System.Boolean StereoController::checkStereoComfort
	bool ___checkStereoComfort_8;
	// System.Single StereoController::stereoAdjustSmoothing
	float ___stereoAdjustSmoothing_9;
	// System.Single StereoController::screenParallax
	float ___screenParallax_10;
	// System.Single StereoController::stereoPaddingX
	float ___stereoPaddingX_11;
	// System.Single StereoController::stereoPaddingY
	float ___stereoPaddingY_12;
	// System.Boolean StereoController::renderedStereo
	bool ___renderedStereo_13;
	// GvrEye[] StereoController::eyes
	GvrEyeU5BU5D_t3620642503* ___eyes_14;
	// GvrHead StereoController::head
	GvrHead_t3923315805 * ___head_15;
	// UnityEngine.Camera StereoController::<cam>k__BackingField
	Camera_t189460977 * ___U3CcamU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_keepStereoUpdated_2() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___keepStereoUpdated_2)); }
	inline bool get_keepStereoUpdated_2() const { return ___keepStereoUpdated_2; }
	inline bool* get_address_of_keepStereoUpdated_2() { return &___keepStereoUpdated_2; }
	inline void set_keepStereoUpdated_2(bool value)
	{
		___keepStereoUpdated_2 = value;
	}

	inline static int32_t get_offset_of_stereoMultiplier_3() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___stereoMultiplier_3)); }
	inline float get_stereoMultiplier_3() const { return ___stereoMultiplier_3; }
	inline float* get_address_of_stereoMultiplier_3() { return &___stereoMultiplier_3; }
	inline void set_stereoMultiplier_3(float value)
	{
		___stereoMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_matchMonoFOV_4() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___matchMonoFOV_4)); }
	inline float get_matchMonoFOV_4() const { return ___matchMonoFOV_4; }
	inline float* get_address_of_matchMonoFOV_4() { return &___matchMonoFOV_4; }
	inline void set_matchMonoFOV_4(float value)
	{
		___matchMonoFOV_4 = value;
	}

	inline static int32_t get_offset_of_matchByZoom_5() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___matchByZoom_5)); }
	inline float get_matchByZoom_5() const { return ___matchByZoom_5; }
	inline float* get_address_of_matchByZoom_5() { return &___matchByZoom_5; }
	inline void set_matchByZoom_5(float value)
	{
		___matchByZoom_5 = value;
	}

	inline static int32_t get_offset_of_centerOfInterest_6() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___centerOfInterest_6)); }
	inline Transform_t3275118058 * get_centerOfInterest_6() const { return ___centerOfInterest_6; }
	inline Transform_t3275118058 ** get_address_of_centerOfInterest_6() { return &___centerOfInterest_6; }
	inline void set_centerOfInterest_6(Transform_t3275118058 * value)
	{
		___centerOfInterest_6 = value;
		Il2CppCodeGenWriteBarrier(&___centerOfInterest_6, value);
	}

	inline static int32_t get_offset_of_radiusOfInterest_7() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___radiusOfInterest_7)); }
	inline float get_radiusOfInterest_7() const { return ___radiusOfInterest_7; }
	inline float* get_address_of_radiusOfInterest_7() { return &___radiusOfInterest_7; }
	inline void set_radiusOfInterest_7(float value)
	{
		___radiusOfInterest_7 = value;
	}

	inline static int32_t get_offset_of_checkStereoComfort_8() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___checkStereoComfort_8)); }
	inline bool get_checkStereoComfort_8() const { return ___checkStereoComfort_8; }
	inline bool* get_address_of_checkStereoComfort_8() { return &___checkStereoComfort_8; }
	inline void set_checkStereoComfort_8(bool value)
	{
		___checkStereoComfort_8 = value;
	}

	inline static int32_t get_offset_of_stereoAdjustSmoothing_9() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___stereoAdjustSmoothing_9)); }
	inline float get_stereoAdjustSmoothing_9() const { return ___stereoAdjustSmoothing_9; }
	inline float* get_address_of_stereoAdjustSmoothing_9() { return &___stereoAdjustSmoothing_9; }
	inline void set_stereoAdjustSmoothing_9(float value)
	{
		___stereoAdjustSmoothing_9 = value;
	}

	inline static int32_t get_offset_of_screenParallax_10() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___screenParallax_10)); }
	inline float get_screenParallax_10() const { return ___screenParallax_10; }
	inline float* get_address_of_screenParallax_10() { return &___screenParallax_10; }
	inline void set_screenParallax_10(float value)
	{
		___screenParallax_10 = value;
	}

	inline static int32_t get_offset_of_stereoPaddingX_11() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___stereoPaddingX_11)); }
	inline float get_stereoPaddingX_11() const { return ___stereoPaddingX_11; }
	inline float* get_address_of_stereoPaddingX_11() { return &___stereoPaddingX_11; }
	inline void set_stereoPaddingX_11(float value)
	{
		___stereoPaddingX_11 = value;
	}

	inline static int32_t get_offset_of_stereoPaddingY_12() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___stereoPaddingY_12)); }
	inline float get_stereoPaddingY_12() const { return ___stereoPaddingY_12; }
	inline float* get_address_of_stereoPaddingY_12() { return &___stereoPaddingY_12; }
	inline void set_stereoPaddingY_12(float value)
	{
		___stereoPaddingY_12 = value;
	}

	inline static int32_t get_offset_of_renderedStereo_13() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___renderedStereo_13)); }
	inline bool get_renderedStereo_13() const { return ___renderedStereo_13; }
	inline bool* get_address_of_renderedStereo_13() { return &___renderedStereo_13; }
	inline void set_renderedStereo_13(bool value)
	{
		___renderedStereo_13 = value;
	}

	inline static int32_t get_offset_of_eyes_14() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___eyes_14)); }
	inline GvrEyeU5BU5D_t3620642503* get_eyes_14() const { return ___eyes_14; }
	inline GvrEyeU5BU5D_t3620642503** get_address_of_eyes_14() { return &___eyes_14; }
	inline void set_eyes_14(GvrEyeU5BU5D_t3620642503* value)
	{
		___eyes_14 = value;
		Il2CppCodeGenWriteBarrier(&___eyes_14, value);
	}

	inline static int32_t get_offset_of_head_15() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___head_15)); }
	inline GvrHead_t3923315805 * get_head_15() const { return ___head_15; }
	inline GvrHead_t3923315805 ** get_address_of_head_15() { return &___head_15; }
	inline void set_head_15(GvrHead_t3923315805 * value)
	{
		___head_15 = value;
		Il2CppCodeGenWriteBarrier(&___head_15, value);
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(StereoController_t3144380552, ___U3CcamU3Ek__BackingField_16)); }
	inline Camera_t189460977 * get_U3CcamU3Ek__BackingField_16() const { return ___U3CcamU3Ek__BackingField_16; }
	inline Camera_t189460977 ** get_address_of_U3CcamU3Ek__BackingField_16() { return &___U3CcamU3Ek__BackingField_16; }
	inline void set_U3CcamU3Ek__BackingField_16(Camera_t189460977 * value)
	{
		___U3CcamU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_16, value);
	}
};

struct StereoController_t3144380552_StaticFields
{
public:
	// System.Func`2<GvrEye,GvrHead> StereoController::<>f__am$cache0
	Func_2_t4065379060 * ___U3CU3Ef__amU24cache0_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_17() { return static_cast<int32_t>(offsetof(StereoController_t3144380552_StaticFields, ___U3CU3Ef__amU24cache0_17)); }
	inline Func_2_t4065379060 * get_U3CU3Ef__amU24cache0_17() const { return ___U3CU3Ef__amU24cache0_17; }
	inline Func_2_t4065379060 ** get_address_of_U3CU3Ef__amU24cache0_17() { return &___U3CU3Ef__amU24cache0_17; }
	inline void set_U3CU3Ef__amU24cache0_17(Func_2_t4065379060 * value)
	{
		___U3CU3Ef__amU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
