#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TiledPage_TileOrderBy1277447191.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Transform>>
struct List_1_t2013360322;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiledPage
struct  TiledPage_t4183784445  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] TiledPage::tiles
	TransformU5BU5D_t3764228911* ___tiles_2;
	// UnityEngine.RectTransform TiledPage::layoutTransform
	RectTransform_t3349966182 * ___layoutTransform_3;
	// System.Single TiledPage::staggerAnimationIntensity
	float ___staggerAnimationIntensity_4;
	// TiledPage/TileOrderBy TiledPage::tileOrderBy
	int32_t ___tileOrderBy_5;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Transform>> TiledPage::tilesByDistanceFromLeft
	List_1_t2013360322 * ___tilesByDistanceFromLeft_6;

public:
	inline static int32_t get_offset_of_tiles_2() { return static_cast<int32_t>(offsetof(TiledPage_t4183784445, ___tiles_2)); }
	inline TransformU5BU5D_t3764228911* get_tiles_2() const { return ___tiles_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_tiles_2() { return &___tiles_2; }
	inline void set_tiles_2(TransformU5BU5D_t3764228911* value)
	{
		___tiles_2 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_2, value);
	}

	inline static int32_t get_offset_of_layoutTransform_3() { return static_cast<int32_t>(offsetof(TiledPage_t4183784445, ___layoutTransform_3)); }
	inline RectTransform_t3349966182 * get_layoutTransform_3() const { return ___layoutTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_layoutTransform_3() { return &___layoutTransform_3; }
	inline void set_layoutTransform_3(RectTransform_t3349966182 * value)
	{
		___layoutTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___layoutTransform_3, value);
	}

	inline static int32_t get_offset_of_staggerAnimationIntensity_4() { return static_cast<int32_t>(offsetof(TiledPage_t4183784445, ___staggerAnimationIntensity_4)); }
	inline float get_staggerAnimationIntensity_4() const { return ___staggerAnimationIntensity_4; }
	inline float* get_address_of_staggerAnimationIntensity_4() { return &___staggerAnimationIntensity_4; }
	inline void set_staggerAnimationIntensity_4(float value)
	{
		___staggerAnimationIntensity_4 = value;
	}

	inline static int32_t get_offset_of_tileOrderBy_5() { return static_cast<int32_t>(offsetof(TiledPage_t4183784445, ___tileOrderBy_5)); }
	inline int32_t get_tileOrderBy_5() const { return ___tileOrderBy_5; }
	inline int32_t* get_address_of_tileOrderBy_5() { return &___tileOrderBy_5; }
	inline void set_tileOrderBy_5(int32_t value)
	{
		___tileOrderBy_5 = value;
	}

	inline static int32_t get_offset_of_tilesByDistanceFromLeft_6() { return static_cast<int32_t>(offsetof(TiledPage_t4183784445, ___tilesByDistanceFromLeft_6)); }
	inline List_1_t2013360322 * get_tilesByDistanceFromLeft_6() const { return ___tilesByDistanceFromLeft_6; }
	inline List_1_t2013360322 ** get_address_of_tilesByDistanceFromLeft_6() { return &___tilesByDistanceFromLeft_6; }
	inline void set_tilesByDistanceFromLeft_6(List_1_t2013360322 * value)
	{
		___tilesByDistanceFromLeft_6 = value;
		Il2CppCodeGenWriteBarrier(&___tilesByDistanceFromLeft_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
