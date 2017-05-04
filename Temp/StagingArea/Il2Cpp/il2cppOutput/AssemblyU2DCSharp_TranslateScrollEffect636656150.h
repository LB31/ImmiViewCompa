#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseScrollEffect2855282033.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TranslateScrollEffect
struct  TranslateScrollEffect_t636656150  : public BaseScrollEffect_t2855282033
{
public:
	// UnityEngine.Vector3 TranslateScrollEffect::Weights
	Vector3_t2243707580  ___Weights_2;
	// System.Boolean TranslateScrollEffect::mirrorX
	bool ___mirrorX_3;
	// System.Boolean TranslateScrollEffect::mirrorY
	bool ___mirrorY_4;
	// System.Boolean TranslateScrollEffect::mirrorZ
	bool ___mirrorZ_5;

public:
	inline static int32_t get_offset_of_Weights_2() { return static_cast<int32_t>(offsetof(TranslateScrollEffect_t636656150, ___Weights_2)); }
	inline Vector3_t2243707580  get_Weights_2() const { return ___Weights_2; }
	inline Vector3_t2243707580 * get_address_of_Weights_2() { return &___Weights_2; }
	inline void set_Weights_2(Vector3_t2243707580  value)
	{
		___Weights_2 = value;
	}

	inline static int32_t get_offset_of_mirrorX_3() { return static_cast<int32_t>(offsetof(TranslateScrollEffect_t636656150, ___mirrorX_3)); }
	inline bool get_mirrorX_3() const { return ___mirrorX_3; }
	inline bool* get_address_of_mirrorX_3() { return &___mirrorX_3; }
	inline void set_mirrorX_3(bool value)
	{
		___mirrorX_3 = value;
	}

	inline static int32_t get_offset_of_mirrorY_4() { return static_cast<int32_t>(offsetof(TranslateScrollEffect_t636656150, ___mirrorY_4)); }
	inline bool get_mirrorY_4() const { return ___mirrorY_4; }
	inline bool* get_address_of_mirrorY_4() { return &___mirrorY_4; }
	inline void set_mirrorY_4(bool value)
	{
		___mirrorY_4 = value;
	}

	inline static int32_t get_offset_of_mirrorZ_5() { return static_cast<int32_t>(offsetof(TranslateScrollEffect_t636656150, ___mirrorZ_5)); }
	inline bool get_mirrorZ_5() const { return ___mirrorZ_5; }
	inline bool* get_address_of_mirrorZ_5() { return &___mirrorZ_5; }
	inline void set_mirrorZ_5(bool value)
	{
		___mirrorZ_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
