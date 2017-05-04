#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrSettings_ViewerPlatformType3688424944.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Predicate`1<System.String>
struct Predicate_1_t472190348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoInputManager
struct  DemoInputManager_t2776755480  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean DemoInputManager::isDaydream
	bool ___isDaydream_16;
	// UnityEngine.GameObject DemoInputManager::controllerMain
	GameObject_t1756533147 * ___controllerMain_19;
	// UnityEngine.GameObject DemoInputManager::controllerPointer
	GameObject_t1756533147 * ___controllerPointer_21;
	// UnityEngine.GameObject DemoInputManager::reticlePointer
	GameObject_t1756533147 * ___reticlePointer_23;
	// UnityEngine.GameObject DemoInputManager::messageCanvas
	GameObject_t1756533147 * ___messageCanvas_25;
	// UnityEngine.UI.Text DemoInputManager::messageText
	Text_t356221433 * ___messageText_26;
	// GvrSettings/ViewerPlatformType DemoInputManager::viewerPlatform
	int32_t ___viewerPlatform_27;

public:
	inline static int32_t get_offset_of_isDaydream_16() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___isDaydream_16)); }
	inline bool get_isDaydream_16() const { return ___isDaydream_16; }
	inline bool* get_address_of_isDaydream_16() { return &___isDaydream_16; }
	inline void set_isDaydream_16(bool value)
	{
		___isDaydream_16 = value;
	}

	inline static int32_t get_offset_of_controllerMain_19() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___controllerMain_19)); }
	inline GameObject_t1756533147 * get_controllerMain_19() const { return ___controllerMain_19; }
	inline GameObject_t1756533147 ** get_address_of_controllerMain_19() { return &___controllerMain_19; }
	inline void set_controllerMain_19(GameObject_t1756533147 * value)
	{
		___controllerMain_19 = value;
		Il2CppCodeGenWriteBarrier(&___controllerMain_19, value);
	}

	inline static int32_t get_offset_of_controllerPointer_21() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___controllerPointer_21)); }
	inline GameObject_t1756533147 * get_controllerPointer_21() const { return ___controllerPointer_21; }
	inline GameObject_t1756533147 ** get_address_of_controllerPointer_21() { return &___controllerPointer_21; }
	inline void set_controllerPointer_21(GameObject_t1756533147 * value)
	{
		___controllerPointer_21 = value;
		Il2CppCodeGenWriteBarrier(&___controllerPointer_21, value);
	}

	inline static int32_t get_offset_of_reticlePointer_23() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___reticlePointer_23)); }
	inline GameObject_t1756533147 * get_reticlePointer_23() const { return ___reticlePointer_23; }
	inline GameObject_t1756533147 ** get_address_of_reticlePointer_23() { return &___reticlePointer_23; }
	inline void set_reticlePointer_23(GameObject_t1756533147 * value)
	{
		___reticlePointer_23 = value;
		Il2CppCodeGenWriteBarrier(&___reticlePointer_23, value);
	}

	inline static int32_t get_offset_of_messageCanvas_25() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___messageCanvas_25)); }
	inline GameObject_t1756533147 * get_messageCanvas_25() const { return ___messageCanvas_25; }
	inline GameObject_t1756533147 ** get_address_of_messageCanvas_25() { return &___messageCanvas_25; }
	inline void set_messageCanvas_25(GameObject_t1756533147 * value)
	{
		___messageCanvas_25 = value;
		Il2CppCodeGenWriteBarrier(&___messageCanvas_25, value);
	}

	inline static int32_t get_offset_of_messageText_26() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___messageText_26)); }
	inline Text_t356221433 * get_messageText_26() const { return ___messageText_26; }
	inline Text_t356221433 ** get_address_of_messageText_26() { return &___messageText_26; }
	inline void set_messageText_26(Text_t356221433 * value)
	{
		___messageText_26 = value;
		Il2CppCodeGenWriteBarrier(&___messageText_26, value);
	}

	inline static int32_t get_offset_of_viewerPlatform_27() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480, ___viewerPlatform_27)); }
	inline int32_t get_viewerPlatform_27() const { return ___viewerPlatform_27; }
	inline int32_t* get_address_of_viewerPlatform_27() { return &___viewerPlatform_27; }
	inline void set_viewerPlatform_27(int32_t value)
	{
		___viewerPlatform_27 = value;
	}
};

struct DemoInputManager_t2776755480_StaticFields
{
public:
	// System.String DemoInputManager::CARDBOARD_DEVICE_NAME
	String_t* ___CARDBOARD_DEVICE_NAME_17;
	// System.String DemoInputManager::DAYDREAM_DEVICE_NAME
	String_t* ___DAYDREAM_DEVICE_NAME_18;
	// System.String DemoInputManager::CONTROLLER_MAIN_PROP_NAME
	String_t* ___CONTROLLER_MAIN_PROP_NAME_20;
	// System.String DemoInputManager::CONTROLLER_POINTER_PROP_NAME
	String_t* ___CONTROLLER_POINTER_PROP_NAME_22;
	// System.String DemoInputManager::RETICLE_POINTER_PROP_NAME
	String_t* ___RETICLE_POINTER_PROP_NAME_24;
	// System.Predicate`1<System.String> DemoInputManager::<>f__am$cache0
	Predicate_1_t472190348 * ___U3CU3Ef__amU24cache0_28;
	// System.Predicate`1<System.String> DemoInputManager::<>f__am$cache1
	Predicate_1_t472190348 * ___U3CU3Ef__amU24cache1_29;

public:
	inline static int32_t get_offset_of_CARDBOARD_DEVICE_NAME_17() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___CARDBOARD_DEVICE_NAME_17)); }
	inline String_t* get_CARDBOARD_DEVICE_NAME_17() const { return ___CARDBOARD_DEVICE_NAME_17; }
	inline String_t** get_address_of_CARDBOARD_DEVICE_NAME_17() { return &___CARDBOARD_DEVICE_NAME_17; }
	inline void set_CARDBOARD_DEVICE_NAME_17(String_t* value)
	{
		___CARDBOARD_DEVICE_NAME_17 = value;
		Il2CppCodeGenWriteBarrier(&___CARDBOARD_DEVICE_NAME_17, value);
	}

	inline static int32_t get_offset_of_DAYDREAM_DEVICE_NAME_18() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___DAYDREAM_DEVICE_NAME_18)); }
	inline String_t* get_DAYDREAM_DEVICE_NAME_18() const { return ___DAYDREAM_DEVICE_NAME_18; }
	inline String_t** get_address_of_DAYDREAM_DEVICE_NAME_18() { return &___DAYDREAM_DEVICE_NAME_18; }
	inline void set_DAYDREAM_DEVICE_NAME_18(String_t* value)
	{
		___DAYDREAM_DEVICE_NAME_18 = value;
		Il2CppCodeGenWriteBarrier(&___DAYDREAM_DEVICE_NAME_18, value);
	}

	inline static int32_t get_offset_of_CONTROLLER_MAIN_PROP_NAME_20() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___CONTROLLER_MAIN_PROP_NAME_20)); }
	inline String_t* get_CONTROLLER_MAIN_PROP_NAME_20() const { return ___CONTROLLER_MAIN_PROP_NAME_20; }
	inline String_t** get_address_of_CONTROLLER_MAIN_PROP_NAME_20() { return &___CONTROLLER_MAIN_PROP_NAME_20; }
	inline void set_CONTROLLER_MAIN_PROP_NAME_20(String_t* value)
	{
		___CONTROLLER_MAIN_PROP_NAME_20 = value;
		Il2CppCodeGenWriteBarrier(&___CONTROLLER_MAIN_PROP_NAME_20, value);
	}

	inline static int32_t get_offset_of_CONTROLLER_POINTER_PROP_NAME_22() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___CONTROLLER_POINTER_PROP_NAME_22)); }
	inline String_t* get_CONTROLLER_POINTER_PROP_NAME_22() const { return ___CONTROLLER_POINTER_PROP_NAME_22; }
	inline String_t** get_address_of_CONTROLLER_POINTER_PROP_NAME_22() { return &___CONTROLLER_POINTER_PROP_NAME_22; }
	inline void set_CONTROLLER_POINTER_PROP_NAME_22(String_t* value)
	{
		___CONTROLLER_POINTER_PROP_NAME_22 = value;
		Il2CppCodeGenWriteBarrier(&___CONTROLLER_POINTER_PROP_NAME_22, value);
	}

	inline static int32_t get_offset_of_RETICLE_POINTER_PROP_NAME_24() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___RETICLE_POINTER_PROP_NAME_24)); }
	inline String_t* get_RETICLE_POINTER_PROP_NAME_24() const { return ___RETICLE_POINTER_PROP_NAME_24; }
	inline String_t** get_address_of_RETICLE_POINTER_PROP_NAME_24() { return &___RETICLE_POINTER_PROP_NAME_24; }
	inline void set_RETICLE_POINTER_PROP_NAME_24(String_t* value)
	{
		___RETICLE_POINTER_PROP_NAME_24 = value;
		Il2CppCodeGenWriteBarrier(&___RETICLE_POINTER_PROP_NAME_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_28() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___U3CU3Ef__amU24cache0_28)); }
	inline Predicate_1_t472190348 * get_U3CU3Ef__amU24cache0_28() const { return ___U3CU3Ef__amU24cache0_28; }
	inline Predicate_1_t472190348 ** get_address_of_U3CU3Ef__amU24cache0_28() { return &___U3CU3Ef__amU24cache0_28; }
	inline void set_U3CU3Ef__amU24cache0_28(Predicate_1_t472190348 * value)
	{
		___U3CU3Ef__amU24cache0_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_29() { return static_cast<int32_t>(offsetof(DemoInputManager_t2776755480_StaticFields, ___U3CU3Ef__amU24cache1_29)); }
	inline Predicate_1_t472190348 * get_U3CU3Ef__amU24cache1_29() const { return ___U3CU3Ef__amU24cache1_29; }
	inline Predicate_1_t472190348 ** get_address_of_U3CU3Ef__amU24cache1_29() { return &___U3CU3Ef__amU24cache1_29; }
	inline void set_U3CU3Ef__amU24cache1_29(Predicate_1_t472190348 * value)
	{
		___U3CU3Ef__amU24cache1_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
