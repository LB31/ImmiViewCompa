#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIFadeTransition
struct  UIFadeTransition_t1996000123  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UIFadeTransition::transitioning
	bool ___transitioning_2;
	// System.Action UIFadeTransition::runningInterruptCallback
	Action_t3226471752 * ___runningInterruptCallback_3;
	// System.Single UIFadeTransition::durationSeconds
	float ___durationSeconds_4;
	// System.Single UIFadeTransition::transitionInDelaySeconds
	float ___transitionInDelaySeconds_5;
	// System.Single UIFadeTransition::transitionOutDelaySeconds
	float ___transitionOutDelaySeconds_6;

public:
	inline static int32_t get_offset_of_transitioning_2() { return static_cast<int32_t>(offsetof(UIFadeTransition_t1996000123, ___transitioning_2)); }
	inline bool get_transitioning_2() const { return ___transitioning_2; }
	inline bool* get_address_of_transitioning_2() { return &___transitioning_2; }
	inline void set_transitioning_2(bool value)
	{
		___transitioning_2 = value;
	}

	inline static int32_t get_offset_of_runningInterruptCallback_3() { return static_cast<int32_t>(offsetof(UIFadeTransition_t1996000123, ___runningInterruptCallback_3)); }
	inline Action_t3226471752 * get_runningInterruptCallback_3() const { return ___runningInterruptCallback_3; }
	inline Action_t3226471752 ** get_address_of_runningInterruptCallback_3() { return &___runningInterruptCallback_3; }
	inline void set_runningInterruptCallback_3(Action_t3226471752 * value)
	{
		___runningInterruptCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___runningInterruptCallback_3, value);
	}

	inline static int32_t get_offset_of_durationSeconds_4() { return static_cast<int32_t>(offsetof(UIFadeTransition_t1996000123, ___durationSeconds_4)); }
	inline float get_durationSeconds_4() const { return ___durationSeconds_4; }
	inline float* get_address_of_durationSeconds_4() { return &___durationSeconds_4; }
	inline void set_durationSeconds_4(float value)
	{
		___durationSeconds_4 = value;
	}

	inline static int32_t get_offset_of_transitionInDelaySeconds_5() { return static_cast<int32_t>(offsetof(UIFadeTransition_t1996000123, ___transitionInDelaySeconds_5)); }
	inline float get_transitionInDelaySeconds_5() const { return ___transitionInDelaySeconds_5; }
	inline float* get_address_of_transitionInDelaySeconds_5() { return &___transitionInDelaySeconds_5; }
	inline void set_transitionInDelaySeconds_5(float value)
	{
		___transitionInDelaySeconds_5 = value;
	}

	inline static int32_t get_offset_of_transitionOutDelaySeconds_6() { return static_cast<int32_t>(offsetof(UIFadeTransition_t1996000123, ___transitionOutDelaySeconds_6)); }
	inline float get_transitionOutDelaySeconds_6() const { return ___transitionOutDelaySeconds_6; }
	inline float* get_address_of_transitionOutDelaySeconds_6() { return &___transitionOutDelaySeconds_6; }
	inline void set_transitionOutDelaySeconds_6(float value)
	{
		___transitionOutDelaySeconds_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
