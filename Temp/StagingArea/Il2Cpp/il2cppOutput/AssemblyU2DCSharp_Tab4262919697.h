#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tab
struct  Tab_t4262919697  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Tab::pagePrefab
	GameObject_t1756533147 * ___pagePrefab_2;
	// System.Boolean Tab::cachePage
	bool ___cachePage_3;
	// UnityEngine.UI.Toggle Tab::toggle
	Toggle_t3976754468 * ___toggle_4;
	// UnityEngine.GameObject Tab::<Page>k__BackingField
	GameObject_t1756533147 * ___U3CPageU3Ek__BackingField_5;
	// System.Boolean Tab::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_pagePrefab_2() { return static_cast<int32_t>(offsetof(Tab_t4262919697, ___pagePrefab_2)); }
	inline GameObject_t1756533147 * get_pagePrefab_2() const { return ___pagePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_pagePrefab_2() { return &___pagePrefab_2; }
	inline void set_pagePrefab_2(GameObject_t1756533147 * value)
	{
		___pagePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___pagePrefab_2, value);
	}

	inline static int32_t get_offset_of_cachePage_3() { return static_cast<int32_t>(offsetof(Tab_t4262919697, ___cachePage_3)); }
	inline bool get_cachePage_3() const { return ___cachePage_3; }
	inline bool* get_address_of_cachePage_3() { return &___cachePage_3; }
	inline void set_cachePage_3(bool value)
	{
		___cachePage_3 = value;
	}

	inline static int32_t get_offset_of_toggle_4() { return static_cast<int32_t>(offsetof(Tab_t4262919697, ___toggle_4)); }
	inline Toggle_t3976754468 * get_toggle_4() const { return ___toggle_4; }
	inline Toggle_t3976754468 ** get_address_of_toggle_4() { return &___toggle_4; }
	inline void set_toggle_4(Toggle_t3976754468 * value)
	{
		___toggle_4 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_4, value);
	}

	inline static int32_t get_offset_of_U3CPageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Tab_t4262919697, ___U3CPageU3Ek__BackingField_5)); }
	inline GameObject_t1756533147 * get_U3CPageU3Ek__BackingField_5() const { return ___U3CPageU3Ek__BackingField_5; }
	inline GameObject_t1756533147 ** get_address_of_U3CPageU3Ek__BackingField_5() { return &___U3CPageU3Ek__BackingField_5; }
	inline void set_U3CPageU3Ek__BackingField_5(GameObject_t1756533147 * value)
	{
		___U3CPageU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPageU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CIsOpenU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Tab_t4262919697, ___U3CIsOpenU3Ek__BackingField_6)); }
	inline bool get_U3CIsOpenU3Ek__BackingField_6() const { return ___U3CIsOpenU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsOpenU3Ek__BackingField_6() { return &___U3CIsOpenU3Ek__BackingField_6; }
	inline void set_U3CIsOpenU3Ek__BackingField_6(bool value)
	{
		___U3CIsOpenU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
