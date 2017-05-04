#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// GvrDaydreamApi
struct GvrDaydreamApi_t4123913920;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t2973420583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrDaydreamApi
struct  GvrDaydreamApi_t4123913920  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaObject GvrDaydreamApi::m_daydreamApiObject
	AndroidJavaObject_t4251328308 * ___m_daydreamApiObject_5;
	// UnityEngine.AndroidJavaClass GvrDaydreamApi::m_daydreamApiClass
	AndroidJavaClass_t2973420583 * ___m_daydreamApiClass_6;

public:
	inline static int32_t get_offset_of_m_daydreamApiObject_5() { return static_cast<int32_t>(offsetof(GvrDaydreamApi_t4123913920, ___m_daydreamApiObject_5)); }
	inline AndroidJavaObject_t4251328308 * get_m_daydreamApiObject_5() const { return ___m_daydreamApiObject_5; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_m_daydreamApiObject_5() { return &___m_daydreamApiObject_5; }
	inline void set_m_daydreamApiObject_5(AndroidJavaObject_t4251328308 * value)
	{
		___m_daydreamApiObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_daydreamApiObject_5, value);
	}

	inline static int32_t get_offset_of_m_daydreamApiClass_6() { return static_cast<int32_t>(offsetof(GvrDaydreamApi_t4123913920, ___m_daydreamApiClass_6)); }
	inline AndroidJavaClass_t2973420583 * get_m_daydreamApiClass_6() const { return ___m_daydreamApiClass_6; }
	inline AndroidJavaClass_t2973420583 ** get_address_of_m_daydreamApiClass_6() { return &___m_daydreamApiClass_6; }
	inline void set_m_daydreamApiClass_6(AndroidJavaClass_t2973420583 * value)
	{
		___m_daydreamApiClass_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_daydreamApiClass_6, value);
	}
};

struct GvrDaydreamApi_t4123913920_StaticFields
{
public:
	// GvrDaydreamApi GvrDaydreamApi::m_instance
	GvrDaydreamApi_t4123913920 * ___m_instance_4;

public:
	inline static int32_t get_offset_of_m_instance_4() { return static_cast<int32_t>(offsetof(GvrDaydreamApi_t4123913920_StaticFields, ___m_instance_4)); }
	inline GvrDaydreamApi_t4123913920 * get_m_instance_4() const { return ___m_instance_4; }
	inline GvrDaydreamApi_t4123913920 ** get_address_of_m_instance_4() { return &___m_instance_4; }
	inline void set_m_instance_4(GvrDaydreamApi_t4123913920 * value)
	{
		___m_instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
