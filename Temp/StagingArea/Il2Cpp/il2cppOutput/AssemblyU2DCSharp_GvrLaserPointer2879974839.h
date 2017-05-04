#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// GvrLaserPointerImpl
struct GvrLaserPointerImpl_t2141976067;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrLaserPointer
struct  GvrLaserPointer_t2879974839  : public MonoBehaviour_t1158329972
{
public:
	// GvrLaserPointerImpl GvrLaserPointer::laserPointerImpl
	GvrLaserPointerImpl_t2141976067 * ___laserPointerImpl_2;
	// UnityEngine.Color GvrLaserPointer::laserColor
	Color_t2020392075  ___laserColor_3;
	// System.Single GvrLaserPointer::maxLaserDistance
	float ___maxLaserDistance_4;
	// System.Single GvrLaserPointer::maxReticleDistance
	float ___maxReticleDistance_5;
	// UnityEngine.GameObject GvrLaserPointer::reticle
	GameObject_t1756533147 * ___reticle_6;
	// System.Int32 GvrLaserPointer::reticleSortingOrder
	int32_t ___reticleSortingOrder_7;

public:
	inline static int32_t get_offset_of_laserPointerImpl_2() { return static_cast<int32_t>(offsetof(GvrLaserPointer_t2879974839, ___laserPointerImpl_2)); }
	inline GvrLaserPointerImpl_t2141976067 * get_laserPointerImpl_2() const { return ___laserPointerImpl_2; }
	inline GvrLaserPointerImpl_t2141976067 ** get_address_of_laserPointerImpl_2() { return &___laserPointerImpl_2; }
	inline void set_laserPointerImpl_2(GvrLaserPointerImpl_t2141976067 * value)
	{
		___laserPointerImpl_2 = value;
		Il2CppCodeGenWriteBarrier(&___laserPointerImpl_2, value);
	}

	inline static int32_t get_offset_of_laserColor_3() { return static_cast<int32_t>(offsetof(GvrLaserPointer_t2879974839, ___laserColor_3)); }
	inline Color_t2020392075  get_laserColor_3() const { return ___laserColor_3; }
	inline Color_t2020392075 * get_address_of_laserColor_3() { return &___laserColor_3; }
	inline void set_laserColor_3(Color_t2020392075  value)
	{
		___laserColor_3 = value;
	}

	inline static int32_t get_offset_of_maxLaserDistance_4() { return static_cast<int32_t>(offsetof(GvrLaserPointer_t2879974839, ___maxLaserDistance_4)); }
	inline float get_maxLaserDistance_4() const { return ___maxLaserDistance_4; }
	inline float* get_address_of_maxLaserDistance_4() { return &___maxLaserDistance_4; }
	inline void set_maxLaserDistance_4(float value)
	{
		___maxLaserDistance_4 = value;
	}

	inline static int32_t get_offset_of_maxReticleDistance_5() { return static_cast<int32_t>(offsetof(GvrLaserPointer_t2879974839, ___maxReticleDistance_5)); }
	inline float get_maxReticleDistance_5() const { return ___maxReticleDistance_5; }
	inline float* get_address_of_maxReticleDistance_5() { return &___maxReticleDistance_5; }
	inline void set_maxReticleDistance_5(float value)
	{
		___maxReticleDistance_5 = value;
	}

	inline static int32_t get_offset_of_reticle_6() { return static_cast<int32_t>(offsetof(GvrLaserPointer_t2879974839, ___reticle_6)); }
	inline GameObject_t1756533147 * get_reticle_6() const { return ___reticle_6; }
	inline GameObject_t1756533147 ** get_address_of_reticle_6() { return &___reticle_6; }
	inline void set_reticle_6(GameObject_t1756533147 * value)
	{
		___reticle_6 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_6, value);
	}

	inline static int32_t get_offset_of_reticleSortingOrder_7() { return static_cast<int32_t>(offsetof(GvrLaserPointer_t2879974839, ___reticleSortingOrder_7)); }
	inline int32_t get_reticleSortingOrder_7() const { return ___reticleSortingOrder_7; }
	inline int32_t* get_address_of_reticleSortingOrder_7() { return &___reticleSortingOrder_7; }
	inline void set_reticleSortingOrder_7(int32_t value)
	{
		___reticleSortingOrder_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
