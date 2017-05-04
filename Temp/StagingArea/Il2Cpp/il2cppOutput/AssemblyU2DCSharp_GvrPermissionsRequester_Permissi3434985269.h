#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_AndroidJavaProxy4274989947.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Action`1<GvrPermissionsRequester/PermissionStatus[]>
struct Action_1_t3516226032;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPermissionsRequester/PermissionsCallback
struct  PermissionsCallback_t3434985269  : public AndroidJavaProxy_t4274989947
{
public:
	// System.String[] GvrPermissionsRequester/PermissionsCallback::permissionNames
	StringU5BU5D_t1642385972* ___permissionNames_1;
	// System.Action`1<GvrPermissionsRequester/PermissionStatus[]> GvrPermissionsRequester/PermissionsCallback::callback
	Action_1_t3516226032 * ___callback_2;

public:
	inline static int32_t get_offset_of_permissionNames_1() { return static_cast<int32_t>(offsetof(PermissionsCallback_t3434985269, ___permissionNames_1)); }
	inline StringU5BU5D_t1642385972* get_permissionNames_1() const { return ___permissionNames_1; }
	inline StringU5BU5D_t1642385972** get_address_of_permissionNames_1() { return &___permissionNames_1; }
	inline void set_permissionNames_1(StringU5BU5D_t1642385972* value)
	{
		___permissionNames_1 = value;
		Il2CppCodeGenWriteBarrier(&___permissionNames_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(PermissionsCallback_t3434985269, ___callback_2)); }
	inline Action_1_t3516226032 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t3516226032 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t3516226032 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
