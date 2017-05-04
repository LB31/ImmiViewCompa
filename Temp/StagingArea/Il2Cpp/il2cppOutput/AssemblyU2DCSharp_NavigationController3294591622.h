#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NavigationController
struct  NavigationController_t3294591622  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 NavigationController::lastPosition
	Vector3_t2243707580  ___lastPosition_2;
	// System.Int32 NavigationController::run
	int32_t ___run_3;

public:
	inline static int32_t get_offset_of_lastPosition_2() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___lastPosition_2)); }
	inline Vector3_t2243707580  get_lastPosition_2() const { return ___lastPosition_2; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_2() { return &___lastPosition_2; }
	inline void set_lastPosition_2(Vector3_t2243707580  value)
	{
		___lastPosition_2 = value;
	}

	inline static int32_t get_offset_of_run_3() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___run_3)); }
	inline int32_t get_run_3() const { return ___run_3; }
	inline int32_t* get_address_of_run_3() { return &___run_3; }
	inline void set_run_3(int32_t value)
	{
		___run_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
