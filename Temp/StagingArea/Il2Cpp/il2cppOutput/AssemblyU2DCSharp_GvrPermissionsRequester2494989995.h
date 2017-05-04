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
// System.String
struct String_t;
// GvrPermissionsRequester
struct GvrPermissionsRequester_t2494989995;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPermissionsRequester
struct  GvrPermissionsRequester_t2494989995  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaObject GvrPermissionsRequester::permissionsFragment
	AndroidJavaObject_t4251328308 * ___permissionsFragment_0;

public:
	inline static int32_t get_offset_of_permissionsFragment_0() { return static_cast<int32_t>(offsetof(GvrPermissionsRequester_t2494989995, ___permissionsFragment_0)); }
	inline AndroidJavaObject_t4251328308 * get_permissionsFragment_0() const { return ___permissionsFragment_0; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_permissionsFragment_0() { return &___permissionsFragment_0; }
	inline void set_permissionsFragment_0(AndroidJavaObject_t4251328308 * value)
	{
		___permissionsFragment_0 = value;
		Il2CppCodeGenWriteBarrier(&___permissionsFragment_0, value);
	}
};

struct GvrPermissionsRequester_t2494989995_StaticFields
{
public:
	// GvrPermissionsRequester GvrPermissionsRequester::theInstance
	GvrPermissionsRequester_t2494989995 * ___theInstance_5;

public:
	inline static int32_t get_offset_of_theInstance_5() { return static_cast<int32_t>(offsetof(GvrPermissionsRequester_t2494989995_StaticFields, ___theInstance_5)); }
	inline GvrPermissionsRequester_t2494989995 * get_theInstance_5() const { return ___theInstance_5; }
	inline GvrPermissionsRequester_t2494989995 ** get_address_of_theInstance_5() { return &___theInstance_5; }
	inline void set_theInstance_5(GvrPermissionsRequester_t2494989995 * value)
	{
		___theInstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___theInstance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
