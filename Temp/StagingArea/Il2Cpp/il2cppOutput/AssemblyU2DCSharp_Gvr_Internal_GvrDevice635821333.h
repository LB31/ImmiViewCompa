#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Gvr_Internal_BaseAndroidDevice1263753648.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Single[]
struct SingleU5BU5D_t577127397;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.GvrDevice
struct  GvrDevice_t635821333  : public BaseAndroidDevice_t1263753648
{
public:
	// System.Single[] Gvr.Internal.GvrDevice::headData
	SingleU5BU5D_t577127397* ___headData_24;
	// System.Single[] Gvr.Internal.GvrDevice::viewData
	SingleU5BU5D_t577127397* ___viewData_25;
	// System.Single[] Gvr.Internal.GvrDevice::profileData
	SingleU5BU5D_t577127397* ___profileData_26;
	// UnityEngine.Matrix4x4 Gvr.Internal.GvrDevice::headView
	Matrix4x4_t2933234003  ___headView_27;
	// UnityEngine.Matrix4x4 Gvr.Internal.GvrDevice::leftEyeView
	Matrix4x4_t2933234003  ___leftEyeView_28;
	// UnityEngine.Matrix4x4 Gvr.Internal.GvrDevice::rightEyeView
	Matrix4x4_t2933234003  ___rightEyeView_29;
	// System.Boolean Gvr.Internal.GvrDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_30;
	// System.Boolean Gvr.Internal.GvrDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_31;

public:
	inline static int32_t get_offset_of_headData_24() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___headData_24)); }
	inline SingleU5BU5D_t577127397* get_headData_24() const { return ___headData_24; }
	inline SingleU5BU5D_t577127397** get_address_of_headData_24() { return &___headData_24; }
	inline void set_headData_24(SingleU5BU5D_t577127397* value)
	{
		___headData_24 = value;
		Il2CppCodeGenWriteBarrier(&___headData_24, value);
	}

	inline static int32_t get_offset_of_viewData_25() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___viewData_25)); }
	inline SingleU5BU5D_t577127397* get_viewData_25() const { return ___viewData_25; }
	inline SingleU5BU5D_t577127397** get_address_of_viewData_25() { return &___viewData_25; }
	inline void set_viewData_25(SingleU5BU5D_t577127397* value)
	{
		___viewData_25 = value;
		Il2CppCodeGenWriteBarrier(&___viewData_25, value);
	}

	inline static int32_t get_offset_of_profileData_26() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___profileData_26)); }
	inline SingleU5BU5D_t577127397* get_profileData_26() const { return ___profileData_26; }
	inline SingleU5BU5D_t577127397** get_address_of_profileData_26() { return &___profileData_26; }
	inline void set_profileData_26(SingleU5BU5D_t577127397* value)
	{
		___profileData_26 = value;
		Il2CppCodeGenWriteBarrier(&___profileData_26, value);
	}

	inline static int32_t get_offset_of_headView_27() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___headView_27)); }
	inline Matrix4x4_t2933234003  get_headView_27() const { return ___headView_27; }
	inline Matrix4x4_t2933234003 * get_address_of_headView_27() { return &___headView_27; }
	inline void set_headView_27(Matrix4x4_t2933234003  value)
	{
		___headView_27 = value;
	}

	inline static int32_t get_offset_of_leftEyeView_28() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___leftEyeView_28)); }
	inline Matrix4x4_t2933234003  get_leftEyeView_28() const { return ___leftEyeView_28; }
	inline Matrix4x4_t2933234003 * get_address_of_leftEyeView_28() { return &___leftEyeView_28; }
	inline void set_leftEyeView_28(Matrix4x4_t2933234003  value)
	{
		___leftEyeView_28 = value;
	}

	inline static int32_t get_offset_of_rightEyeView_29() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___rightEyeView_29)); }
	inline Matrix4x4_t2933234003  get_rightEyeView_29() const { return ___rightEyeView_29; }
	inline Matrix4x4_t2933234003 * get_address_of_rightEyeView_29() { return &___rightEyeView_29; }
	inline void set_rightEyeView_29(Matrix4x4_t2933234003  value)
	{
		___rightEyeView_29 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeProjections_30() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___debugDisableNativeProjections_30)); }
	inline bool get_debugDisableNativeProjections_30() const { return ___debugDisableNativeProjections_30; }
	inline bool* get_address_of_debugDisableNativeProjections_30() { return &___debugDisableNativeProjections_30; }
	inline void set_debugDisableNativeProjections_30(bool value)
	{
		___debugDisableNativeProjections_30 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeUILayer_31() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___debugDisableNativeUILayer_31)); }
	inline bool get_debugDisableNativeUILayer_31() const { return ___debugDisableNativeUILayer_31; }
	inline bool* get_address_of_debugDisableNativeUILayer_31() { return &___debugDisableNativeUILayer_31; }
	inline void set_debugDisableNativeUILayer_31(bool value)
	{
		___debugDisableNativeUILayer_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
