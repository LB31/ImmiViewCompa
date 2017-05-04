#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.String
struct String_t;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// MutablePose3D
struct MutablePose3D_t1015643808;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.AndroidNativeControllerProvider
struct  AndroidNativeControllerProvider_t1389606029  : public Il2CppObject
{
public:
	// System.IntPtr Gvr.Internal.AndroidNativeControllerProvider::api
	IntPtr_t ___api_26;
	// UnityEngine.AndroidJavaObject Gvr.Internal.AndroidNativeControllerProvider::androidContext
	AndroidJavaObject_t4251328308 * ___androidContext_27;
	// UnityEngine.AndroidJavaObject Gvr.Internal.AndroidNativeControllerProvider::classLoader
	AndroidJavaObject_t4251328308 * ___classLoader_28;
	// System.Boolean Gvr.Internal.AndroidNativeControllerProvider::error
	bool ___error_29;
	// System.String Gvr.Internal.AndroidNativeControllerProvider::errorDetails
	String_t* ___errorDetails_30;
	// System.IntPtr Gvr.Internal.AndroidNativeControllerProvider::statePtr
	IntPtr_t ___statePtr_31;
	// MutablePose3D Gvr.Internal.AndroidNativeControllerProvider::pose3d
	MutablePose3D_t1015643808 * ___pose3d_32;

public:
	inline static int32_t get_offset_of_api_26() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___api_26)); }
	inline IntPtr_t get_api_26() const { return ___api_26; }
	inline IntPtr_t* get_address_of_api_26() { return &___api_26; }
	inline void set_api_26(IntPtr_t value)
	{
		___api_26 = value;
	}

	inline static int32_t get_offset_of_androidContext_27() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___androidContext_27)); }
	inline AndroidJavaObject_t4251328308 * get_androidContext_27() const { return ___androidContext_27; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_androidContext_27() { return &___androidContext_27; }
	inline void set_androidContext_27(AndroidJavaObject_t4251328308 * value)
	{
		___androidContext_27 = value;
		Il2CppCodeGenWriteBarrier(&___androidContext_27, value);
	}

	inline static int32_t get_offset_of_classLoader_28() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___classLoader_28)); }
	inline AndroidJavaObject_t4251328308 * get_classLoader_28() const { return ___classLoader_28; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_classLoader_28() { return &___classLoader_28; }
	inline void set_classLoader_28(AndroidJavaObject_t4251328308 * value)
	{
		___classLoader_28 = value;
		Il2CppCodeGenWriteBarrier(&___classLoader_28, value);
	}

	inline static int32_t get_offset_of_error_29() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___error_29)); }
	inline bool get_error_29() const { return ___error_29; }
	inline bool* get_address_of_error_29() { return &___error_29; }
	inline void set_error_29(bool value)
	{
		___error_29 = value;
	}

	inline static int32_t get_offset_of_errorDetails_30() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___errorDetails_30)); }
	inline String_t* get_errorDetails_30() const { return ___errorDetails_30; }
	inline String_t** get_address_of_errorDetails_30() { return &___errorDetails_30; }
	inline void set_errorDetails_30(String_t* value)
	{
		___errorDetails_30 = value;
		Il2CppCodeGenWriteBarrier(&___errorDetails_30, value);
	}

	inline static int32_t get_offset_of_statePtr_31() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___statePtr_31)); }
	inline IntPtr_t get_statePtr_31() const { return ___statePtr_31; }
	inline IntPtr_t* get_address_of_statePtr_31() { return &___statePtr_31; }
	inline void set_statePtr_31(IntPtr_t value)
	{
		___statePtr_31 = value;
	}

	inline static int32_t get_offset_of_pose3d_32() { return static_cast<int32_t>(offsetof(AndroidNativeControllerProvider_t1389606029, ___pose3d_32)); }
	inline MutablePose3D_t1015643808 * get_pose3d_32() const { return ___pose3d_32; }
	inline MutablePose3D_t1015643808 ** get_address_of_pose3d_32() { return &___pose3d_32; }
	inline void set_pose3d_32(MutablePose3D_t1015643808 * value)
	{
		___pose3d_32 = value;
		Il2CppCodeGenWriteBarrier(&___pose3d_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
