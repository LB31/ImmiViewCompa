#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnection1823409010.h"

// GvrController
struct GvrController_t1602869021;
// Gvr.Internal.IControllerProvider
struct IControllerProvider_t665503844;
// Gvr.Internal.ControllerState
struct ControllerState_t1971591097;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1785723201;
// GvrController/OnControllerUpdateEvent
struct OnControllerUpdateEvent_t1438436294;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrController
struct  GvrController_t1602869021  : public MonoBehaviour_t1158329972
{
public:
	// Gvr.Internal.ControllerState GvrController::controllerState
	ControllerState_t1971591097 * ___controllerState_4;
	// System.Collections.IEnumerator GvrController::controllerUpdate
	Il2CppObject * ___controllerUpdate_5;
	// UnityEngine.WaitForEndOfFrame GvrController::waitForEndOfFrame
	WaitForEndOfFrame_t1785723201 * ___waitForEndOfFrame_6;
	// GvrController/OnControllerUpdateEvent GvrController::OnControllerUpdate
	OnControllerUpdateEvent_t1438436294 * ___OnControllerUpdate_7;
	// GvrController/EmulatorConnectionMode GvrController::emulatorConnectionMode
	int32_t ___emulatorConnectionMode_8;

public:
	inline static int32_t get_offset_of_controllerState_4() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___controllerState_4)); }
	inline ControllerState_t1971591097 * get_controllerState_4() const { return ___controllerState_4; }
	inline ControllerState_t1971591097 ** get_address_of_controllerState_4() { return &___controllerState_4; }
	inline void set_controllerState_4(ControllerState_t1971591097 * value)
	{
		___controllerState_4 = value;
		Il2CppCodeGenWriteBarrier(&___controllerState_4, value);
	}

	inline static int32_t get_offset_of_controllerUpdate_5() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___controllerUpdate_5)); }
	inline Il2CppObject * get_controllerUpdate_5() const { return ___controllerUpdate_5; }
	inline Il2CppObject ** get_address_of_controllerUpdate_5() { return &___controllerUpdate_5; }
	inline void set_controllerUpdate_5(Il2CppObject * value)
	{
		___controllerUpdate_5 = value;
		Il2CppCodeGenWriteBarrier(&___controllerUpdate_5, value);
	}

	inline static int32_t get_offset_of_waitForEndOfFrame_6() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___waitForEndOfFrame_6)); }
	inline WaitForEndOfFrame_t1785723201 * get_waitForEndOfFrame_6() const { return ___waitForEndOfFrame_6; }
	inline WaitForEndOfFrame_t1785723201 ** get_address_of_waitForEndOfFrame_6() { return &___waitForEndOfFrame_6; }
	inline void set_waitForEndOfFrame_6(WaitForEndOfFrame_t1785723201 * value)
	{
		___waitForEndOfFrame_6 = value;
		Il2CppCodeGenWriteBarrier(&___waitForEndOfFrame_6, value);
	}

	inline static int32_t get_offset_of_OnControllerUpdate_7() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___OnControllerUpdate_7)); }
	inline OnControllerUpdateEvent_t1438436294 * get_OnControllerUpdate_7() const { return ___OnControllerUpdate_7; }
	inline OnControllerUpdateEvent_t1438436294 ** get_address_of_OnControllerUpdate_7() { return &___OnControllerUpdate_7; }
	inline void set_OnControllerUpdate_7(OnControllerUpdateEvent_t1438436294 * value)
	{
		___OnControllerUpdate_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnControllerUpdate_7, value);
	}

	inline static int32_t get_offset_of_emulatorConnectionMode_8() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___emulatorConnectionMode_8)); }
	inline int32_t get_emulatorConnectionMode_8() const { return ___emulatorConnectionMode_8; }
	inline int32_t* get_address_of_emulatorConnectionMode_8() { return &___emulatorConnectionMode_8; }
	inline void set_emulatorConnectionMode_8(int32_t value)
	{
		___emulatorConnectionMode_8 = value;
	}
};

struct GvrController_t1602869021_StaticFields
{
public:
	// GvrController GvrController::instance
	GvrController_t1602869021 * ___instance_2;
	// Gvr.Internal.IControllerProvider GvrController::controllerProvider
	Il2CppObject * ___controllerProvider_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GvrController_t1602869021_StaticFields, ___instance_2)); }
	inline GvrController_t1602869021 * get_instance_2() const { return ___instance_2; }
	inline GvrController_t1602869021 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GvrController_t1602869021 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_controllerProvider_3() { return static_cast<int32_t>(offsetof(GvrController_t1602869021_StaticFields, ___controllerProvider_3)); }
	inline Il2CppObject * get_controllerProvider_3() const { return ___controllerProvider_3; }
	inline Il2CppObject ** get_address_of_controllerProvider_3() { return &___controllerProvider_3; }
	inline void set_controllerProvider_3(Il2CppObject * value)
	{
		___controllerProvider_3 = value;
		Il2CppCodeGenWriteBarrier(&___controllerProvider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
