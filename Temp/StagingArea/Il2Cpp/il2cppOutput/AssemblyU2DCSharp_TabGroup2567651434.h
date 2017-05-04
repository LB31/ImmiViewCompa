#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Tab
struct Tab_t4262919697;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1030026315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TabGroup
struct  TabGroup_t2567651434  : public MonoBehaviour_t1158329972
{
public:
	// Tab TabGroup::startingTab
	Tab_t4262919697 * ___startingTab_2;
	// UnityEngine.Transform TabGroup::tabPageParent
	Transform_t3275118058 * ___tabPageParent_3;
	// UnityEngine.UI.ToggleGroup TabGroup::toggleGroup
	ToggleGroup_t1030026315 * ___toggleGroup_4;

public:
	inline static int32_t get_offset_of_startingTab_2() { return static_cast<int32_t>(offsetof(TabGroup_t2567651434, ___startingTab_2)); }
	inline Tab_t4262919697 * get_startingTab_2() const { return ___startingTab_2; }
	inline Tab_t4262919697 ** get_address_of_startingTab_2() { return &___startingTab_2; }
	inline void set_startingTab_2(Tab_t4262919697 * value)
	{
		___startingTab_2 = value;
		Il2CppCodeGenWriteBarrier(&___startingTab_2, value);
	}

	inline static int32_t get_offset_of_tabPageParent_3() { return static_cast<int32_t>(offsetof(TabGroup_t2567651434, ___tabPageParent_3)); }
	inline Transform_t3275118058 * get_tabPageParent_3() const { return ___tabPageParent_3; }
	inline Transform_t3275118058 ** get_address_of_tabPageParent_3() { return &___tabPageParent_3; }
	inline void set_tabPageParent_3(Transform_t3275118058 * value)
	{
		___tabPageParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___tabPageParent_3, value);
	}

	inline static int32_t get_offset_of_toggleGroup_4() { return static_cast<int32_t>(offsetof(TabGroup_t2567651434, ___toggleGroup_4)); }
	inline ToggleGroup_t1030026315 * get_toggleGroup_4() const { return ___toggleGroup_4; }
	inline ToggleGroup_t1030026315 ** get_address_of_toggleGroup_4() { return &___toggleGroup_4; }
	inline void set_toggleGroup_4(ToggleGroup_t1030026315 * value)
	{
		___toggleGroup_4 = value;
		Il2CppCodeGenWriteBarrier(&___toggleGroup_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
