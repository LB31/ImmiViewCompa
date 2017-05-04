#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GVR.Input.ButtonEvent
struct ButtonEvent_t3014361476;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GVR.Input.AppButtonInput
struct  AppButtonInput_t1324551885  : public MonoBehaviour_t1158329972
{
public:
	// GVR.Input.ButtonEvent GVR.Input.AppButtonInput::OnAppUp
	ButtonEvent_t3014361476 * ___OnAppUp_2;
	// GVR.Input.ButtonEvent GVR.Input.AppButtonInput::OnAppDown
	ButtonEvent_t3014361476 * ___OnAppDown_3;

public:
	inline static int32_t get_offset_of_OnAppUp_2() { return static_cast<int32_t>(offsetof(AppButtonInput_t1324551885, ___OnAppUp_2)); }
	inline ButtonEvent_t3014361476 * get_OnAppUp_2() const { return ___OnAppUp_2; }
	inline ButtonEvent_t3014361476 ** get_address_of_OnAppUp_2() { return &___OnAppUp_2; }
	inline void set_OnAppUp_2(ButtonEvent_t3014361476 * value)
	{
		___OnAppUp_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppUp_2, value);
	}

	inline static int32_t get_offset_of_OnAppDown_3() { return static_cast<int32_t>(offsetof(AppButtonInput_t1324551885, ___OnAppDown_3)); }
	inline ButtonEvent_t3014361476 * get_OnAppDown_3() const { return ___OnAppDown_3; }
	inline ButtonEvent_t3014361476 ** get_address_of_OnAppDown_3() { return &___OnAppDown_3; }
	inline void set_OnAppDown_3(ButtonEvent_t3014361476 * value)
	{
		___OnAppDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppDown_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
