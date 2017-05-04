#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice4004462063.h"

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.BaseAndroidDevice
struct  BaseAndroidDevice_t1263753648  : public BaseVRDevice_t4004462063
{
public:
	// UnityEngine.AndroidJavaObject Gvr.Internal.BaseAndroidDevice::androidActivity
	AndroidJavaObject_t4251328308 * ___androidActivity_19;

public:
	inline static int32_t get_offset_of_androidActivity_19() { return static_cast<int32_t>(offsetof(BaseAndroidDevice_t1263753648, ___androidActivity_19)); }
	inline AndroidJavaObject_t4251328308 * get_androidActivity_19() const { return ___androidActivity_19; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_androidActivity_19() { return &___androidActivity_19; }
	inline void set_androidActivity_19(AndroidJavaObject_t4251328308 * value)
	{
		___androidActivity_19 = value;
		Il2CppCodeGenWriteBarrier(&___androidActivity_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
