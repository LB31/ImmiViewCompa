#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GvrConnectionState1596129842.h"
#include "AssemblyU2DCSharp_GvrControllerApiStatus66586029.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GvrControllerBatteryLevel1673126176.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.ControllerState
struct  ControllerState_t1971591097  : public Il2CppObject
{
public:
	// GvrConnectionState Gvr.Internal.ControllerState::connectionState
	int32_t ___connectionState_0;
	// GvrControllerApiStatus Gvr.Internal.ControllerState::apiStatus
	int32_t ___apiStatus_1;
	// UnityEngine.Quaternion Gvr.Internal.ControllerState::orientation
	Quaternion_t4030073918  ___orientation_2;
	// UnityEngine.Vector3 Gvr.Internal.ControllerState::gyro
	Vector3_t2243707580  ___gyro_3;
	// UnityEngine.Vector3 Gvr.Internal.ControllerState::accel
	Vector3_t2243707580  ___accel_4;
	// System.Boolean Gvr.Internal.ControllerState::isTouching
	bool ___isTouching_5;
	// UnityEngine.Vector2 Gvr.Internal.ControllerState::touchPos
	Vector2_t2243707579  ___touchPos_6;
	// System.Boolean Gvr.Internal.ControllerState::touchDown
	bool ___touchDown_7;
	// System.Boolean Gvr.Internal.ControllerState::touchUp
	bool ___touchUp_8;
	// System.Boolean Gvr.Internal.ControllerState::recentering
	bool ___recentering_9;
	// System.Boolean Gvr.Internal.ControllerState::recentered
	bool ___recentered_10;
	// System.Boolean Gvr.Internal.ControllerState::clickButtonState
	bool ___clickButtonState_11;
	// System.Boolean Gvr.Internal.ControllerState::clickButtonDown
	bool ___clickButtonDown_12;
	// System.Boolean Gvr.Internal.ControllerState::clickButtonUp
	bool ___clickButtonUp_13;
	// System.Boolean Gvr.Internal.ControllerState::appButtonState
	bool ___appButtonState_14;
	// System.Boolean Gvr.Internal.ControllerState::appButtonDown
	bool ___appButtonDown_15;
	// System.Boolean Gvr.Internal.ControllerState::appButtonUp
	bool ___appButtonUp_16;
	// System.Boolean Gvr.Internal.ControllerState::homeButtonDown
	bool ___homeButtonDown_17;
	// System.Boolean Gvr.Internal.ControllerState::homeButtonState
	bool ___homeButtonState_18;
	// System.String Gvr.Internal.ControllerState::errorDetails
	String_t* ___errorDetails_19;
	// System.IntPtr Gvr.Internal.ControllerState::gvrPtr
	IntPtr_t ___gvrPtr_20;
	// System.Boolean Gvr.Internal.ControllerState::isCharging
	bool ___isCharging_21;
	// GvrControllerBatteryLevel Gvr.Internal.ControllerState::batteryLevel
	int32_t ___batteryLevel_22;

public:
	inline static int32_t get_offset_of_connectionState_0() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___connectionState_0)); }
	inline int32_t get_connectionState_0() const { return ___connectionState_0; }
	inline int32_t* get_address_of_connectionState_0() { return &___connectionState_0; }
	inline void set_connectionState_0(int32_t value)
	{
		___connectionState_0 = value;
	}

	inline static int32_t get_offset_of_apiStatus_1() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___apiStatus_1)); }
	inline int32_t get_apiStatus_1() const { return ___apiStatus_1; }
	inline int32_t* get_address_of_apiStatus_1() { return &___apiStatus_1; }
	inline void set_apiStatus_1(int32_t value)
	{
		___apiStatus_1 = value;
	}

	inline static int32_t get_offset_of_orientation_2() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___orientation_2)); }
	inline Quaternion_t4030073918  get_orientation_2() const { return ___orientation_2; }
	inline Quaternion_t4030073918 * get_address_of_orientation_2() { return &___orientation_2; }
	inline void set_orientation_2(Quaternion_t4030073918  value)
	{
		___orientation_2 = value;
	}

	inline static int32_t get_offset_of_gyro_3() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___gyro_3)); }
	inline Vector3_t2243707580  get_gyro_3() const { return ___gyro_3; }
	inline Vector3_t2243707580 * get_address_of_gyro_3() { return &___gyro_3; }
	inline void set_gyro_3(Vector3_t2243707580  value)
	{
		___gyro_3 = value;
	}

	inline static int32_t get_offset_of_accel_4() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___accel_4)); }
	inline Vector3_t2243707580  get_accel_4() const { return ___accel_4; }
	inline Vector3_t2243707580 * get_address_of_accel_4() { return &___accel_4; }
	inline void set_accel_4(Vector3_t2243707580  value)
	{
		___accel_4 = value;
	}

	inline static int32_t get_offset_of_isTouching_5() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___isTouching_5)); }
	inline bool get_isTouching_5() const { return ___isTouching_5; }
	inline bool* get_address_of_isTouching_5() { return &___isTouching_5; }
	inline void set_isTouching_5(bool value)
	{
		___isTouching_5 = value;
	}

	inline static int32_t get_offset_of_touchPos_6() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___touchPos_6)); }
	inline Vector2_t2243707579  get_touchPos_6() const { return ___touchPos_6; }
	inline Vector2_t2243707579 * get_address_of_touchPos_6() { return &___touchPos_6; }
	inline void set_touchPos_6(Vector2_t2243707579  value)
	{
		___touchPos_6 = value;
	}

	inline static int32_t get_offset_of_touchDown_7() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___touchDown_7)); }
	inline bool get_touchDown_7() const { return ___touchDown_7; }
	inline bool* get_address_of_touchDown_7() { return &___touchDown_7; }
	inline void set_touchDown_7(bool value)
	{
		___touchDown_7 = value;
	}

	inline static int32_t get_offset_of_touchUp_8() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___touchUp_8)); }
	inline bool get_touchUp_8() const { return ___touchUp_8; }
	inline bool* get_address_of_touchUp_8() { return &___touchUp_8; }
	inline void set_touchUp_8(bool value)
	{
		___touchUp_8 = value;
	}

	inline static int32_t get_offset_of_recentering_9() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___recentering_9)); }
	inline bool get_recentering_9() const { return ___recentering_9; }
	inline bool* get_address_of_recentering_9() { return &___recentering_9; }
	inline void set_recentering_9(bool value)
	{
		___recentering_9 = value;
	}

	inline static int32_t get_offset_of_recentered_10() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___recentered_10)); }
	inline bool get_recentered_10() const { return ___recentered_10; }
	inline bool* get_address_of_recentered_10() { return &___recentered_10; }
	inline void set_recentered_10(bool value)
	{
		___recentered_10 = value;
	}

	inline static int32_t get_offset_of_clickButtonState_11() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___clickButtonState_11)); }
	inline bool get_clickButtonState_11() const { return ___clickButtonState_11; }
	inline bool* get_address_of_clickButtonState_11() { return &___clickButtonState_11; }
	inline void set_clickButtonState_11(bool value)
	{
		___clickButtonState_11 = value;
	}

	inline static int32_t get_offset_of_clickButtonDown_12() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___clickButtonDown_12)); }
	inline bool get_clickButtonDown_12() const { return ___clickButtonDown_12; }
	inline bool* get_address_of_clickButtonDown_12() { return &___clickButtonDown_12; }
	inline void set_clickButtonDown_12(bool value)
	{
		___clickButtonDown_12 = value;
	}

	inline static int32_t get_offset_of_clickButtonUp_13() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___clickButtonUp_13)); }
	inline bool get_clickButtonUp_13() const { return ___clickButtonUp_13; }
	inline bool* get_address_of_clickButtonUp_13() { return &___clickButtonUp_13; }
	inline void set_clickButtonUp_13(bool value)
	{
		___clickButtonUp_13 = value;
	}

	inline static int32_t get_offset_of_appButtonState_14() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___appButtonState_14)); }
	inline bool get_appButtonState_14() const { return ___appButtonState_14; }
	inline bool* get_address_of_appButtonState_14() { return &___appButtonState_14; }
	inline void set_appButtonState_14(bool value)
	{
		___appButtonState_14 = value;
	}

	inline static int32_t get_offset_of_appButtonDown_15() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___appButtonDown_15)); }
	inline bool get_appButtonDown_15() const { return ___appButtonDown_15; }
	inline bool* get_address_of_appButtonDown_15() { return &___appButtonDown_15; }
	inline void set_appButtonDown_15(bool value)
	{
		___appButtonDown_15 = value;
	}

	inline static int32_t get_offset_of_appButtonUp_16() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___appButtonUp_16)); }
	inline bool get_appButtonUp_16() const { return ___appButtonUp_16; }
	inline bool* get_address_of_appButtonUp_16() { return &___appButtonUp_16; }
	inline void set_appButtonUp_16(bool value)
	{
		___appButtonUp_16 = value;
	}

	inline static int32_t get_offset_of_homeButtonDown_17() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___homeButtonDown_17)); }
	inline bool get_homeButtonDown_17() const { return ___homeButtonDown_17; }
	inline bool* get_address_of_homeButtonDown_17() { return &___homeButtonDown_17; }
	inline void set_homeButtonDown_17(bool value)
	{
		___homeButtonDown_17 = value;
	}

	inline static int32_t get_offset_of_homeButtonState_18() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___homeButtonState_18)); }
	inline bool get_homeButtonState_18() const { return ___homeButtonState_18; }
	inline bool* get_address_of_homeButtonState_18() { return &___homeButtonState_18; }
	inline void set_homeButtonState_18(bool value)
	{
		___homeButtonState_18 = value;
	}

	inline static int32_t get_offset_of_errorDetails_19() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___errorDetails_19)); }
	inline String_t* get_errorDetails_19() const { return ___errorDetails_19; }
	inline String_t** get_address_of_errorDetails_19() { return &___errorDetails_19; }
	inline void set_errorDetails_19(String_t* value)
	{
		___errorDetails_19 = value;
		Il2CppCodeGenWriteBarrier(&___errorDetails_19, value);
	}

	inline static int32_t get_offset_of_gvrPtr_20() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___gvrPtr_20)); }
	inline IntPtr_t get_gvrPtr_20() const { return ___gvrPtr_20; }
	inline IntPtr_t* get_address_of_gvrPtr_20() { return &___gvrPtr_20; }
	inline void set_gvrPtr_20(IntPtr_t value)
	{
		___gvrPtr_20 = value;
	}

	inline static int32_t get_offset_of_isCharging_21() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___isCharging_21)); }
	inline bool get_isCharging_21() const { return ___isCharging_21; }
	inline bool* get_address_of_isCharging_21() { return &___isCharging_21; }
	inline void set_isCharging_21(bool value)
	{
		___isCharging_21 = value;
	}

	inline static int32_t get_offset_of_batteryLevel_22() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___batteryLevel_22)); }
	inline int32_t get_batteryLevel_22() const { return ___batteryLevel_22; }
	inline int32_t* get_address_of_batteryLevel_22() { return &___batteryLevel_22; }
	inline void set_batteryLevel_22(int32_t value)
	{
		___batteryLevel_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
