#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrSettings/<SetSustainedPerformanceMode>c__AnonStorey0
struct  U3CSetSustainedPerformanceModeU3Ec__AnonStorey0_t3642494509  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaObject GvrSettings/<SetSustainedPerformanceMode>c__AnonStorey0::androidWindow
	AndroidJavaObject_t4251328308 * ___androidWindow_0;
	// System.Boolean GvrSettings/<SetSustainedPerformanceMode>c__AnonStorey0::enabled
	bool ___enabled_1;

public:
	inline static int32_t get_offset_of_androidWindow_0() { return static_cast<int32_t>(offsetof(U3CSetSustainedPerformanceModeU3Ec__AnonStorey0_t3642494509, ___androidWindow_0)); }
	inline AndroidJavaObject_t4251328308 * get_androidWindow_0() const { return ___androidWindow_0; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_androidWindow_0() { return &___androidWindow_0; }
	inline void set_androidWindow_0(AndroidJavaObject_t4251328308 * value)
	{
		___androidWindow_0 = value;
		Il2CppCodeGenWriteBarrier(&___androidWindow_0, value);
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(U3CSetSustainedPerformanceModeU3Ec__AnonStorey0_t3642494509, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
