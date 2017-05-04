#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<GvrPermissionsRequester/PermissionStatus>
struct List_1_t261692295;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PermissionsFlowManager
struct  PermissionsFlowManager_t2318422631  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PermissionsFlowManager::statusText
	Text_t356221433 * ___statusText_3;

public:
	inline static int32_t get_offset_of_statusText_3() { return static_cast<int32_t>(offsetof(PermissionsFlowManager_t2318422631, ___statusText_3)); }
	inline Text_t356221433 * get_statusText_3() const { return ___statusText_3; }
	inline Text_t356221433 ** get_address_of_statusText_3() { return &___statusText_3; }
	inline void set_statusText_3(Text_t356221433 * value)
	{
		___statusText_3 = value;
		Il2CppCodeGenWriteBarrier(&___statusText_3, value);
	}
};

struct PermissionsFlowManager_t2318422631_StaticFields
{
public:
	// System.String[] PermissionsFlowManager::permissionNames
	StringU5BU5D_t1642385972* ___permissionNames_2;
	// System.Collections.Generic.List`1<GvrPermissionsRequester/PermissionStatus> PermissionsFlowManager::permissionList
	List_1_t261692295 * ___permissionList_4;

public:
	inline static int32_t get_offset_of_permissionNames_2() { return static_cast<int32_t>(offsetof(PermissionsFlowManager_t2318422631_StaticFields, ___permissionNames_2)); }
	inline StringU5BU5D_t1642385972* get_permissionNames_2() const { return ___permissionNames_2; }
	inline StringU5BU5D_t1642385972** get_address_of_permissionNames_2() { return &___permissionNames_2; }
	inline void set_permissionNames_2(StringU5BU5D_t1642385972* value)
	{
		___permissionNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___permissionNames_2, value);
	}

	inline static int32_t get_offset_of_permissionList_4() { return static_cast<int32_t>(offsetof(PermissionsFlowManager_t2318422631_StaticFields, ___permissionList_4)); }
	inline List_1_t261692295 * get_permissionList_4() const { return ___permissionList_4; }
	inline List_1_t261692295 ** get_address_of_permissionList_4() { return &___permissionList_4; }
	inline void set_permissionList_4(List_1_t261692295 * value)
	{
		___permissionList_4 = value;
		Il2CppCodeGenWriteBarrier(&___permissionList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
