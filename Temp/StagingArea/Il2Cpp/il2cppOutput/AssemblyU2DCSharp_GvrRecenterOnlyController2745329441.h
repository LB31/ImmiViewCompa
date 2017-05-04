#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrRecenterOnlyController
struct  GvrRecenterOnlyController_t2745329441  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Quaternion GvrRecenterOnlyController::recenteringOffset
	Quaternion_t4030073918  ___recenteringOffset_2;
	// UnityEngine.GameObject GvrRecenterOnlyController::pointer
	GameObject_t1756533147 * ___pointer_3;
	// UnityEngine.Camera GvrRecenterOnlyController::cam
	Camera_t189460977 * ___cam_4;

public:
	inline static int32_t get_offset_of_recenteringOffset_2() { return static_cast<int32_t>(offsetof(GvrRecenterOnlyController_t2745329441, ___recenteringOffset_2)); }
	inline Quaternion_t4030073918  get_recenteringOffset_2() const { return ___recenteringOffset_2; }
	inline Quaternion_t4030073918 * get_address_of_recenteringOffset_2() { return &___recenteringOffset_2; }
	inline void set_recenteringOffset_2(Quaternion_t4030073918  value)
	{
		___recenteringOffset_2 = value;
	}

	inline static int32_t get_offset_of_pointer_3() { return static_cast<int32_t>(offsetof(GvrRecenterOnlyController_t2745329441, ___pointer_3)); }
	inline GameObject_t1756533147 * get_pointer_3() const { return ___pointer_3; }
	inline GameObject_t1756533147 ** get_address_of_pointer_3() { return &___pointer_3; }
	inline void set_pointer_3(GameObject_t1756533147 * value)
	{
		___pointer_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_3, value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(GvrRecenterOnlyController_t2745329441, ___cam_4)); }
	inline Camera_t189460977 * get_cam_4() const { return ___cam_4; }
	inline Camera_t189460977 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t189460977 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
