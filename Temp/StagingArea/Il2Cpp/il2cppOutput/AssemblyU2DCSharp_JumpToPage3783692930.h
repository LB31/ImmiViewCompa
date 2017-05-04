#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// PagedScrollRect
struct PagedScrollRect_t3048021378;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JumpToPage
struct  JumpToPage_t3783692930  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform JumpToPage::page
	RectTransform_t3349966182 * ___page_2;
	// UnityEngine.RectTransform JumpToPage::hoverTransform
	RectTransform_t3349966182 * ___hoverTransform_3;
	// System.Single JumpToPage::hoverPositionZMeters
	float ___hoverPositionZMeters_4;
	// System.Single JumpToPage::interpolationSpeed
	float ___interpolationSpeed_5;
	// UnityEngine.UI.Graphic JumpToPage::graphic
	Graphic_t2426225576 * ___graphic_6;
	// System.Single JumpToPage::desiredPositionZ
	float ___desiredPositionZ_7;
	// PagedScrollRect JumpToPage::cachedPagedScrollRect
	PagedScrollRect_t3048021378 * ___cachedPagedScrollRect_8;

public:
	inline static int32_t get_offset_of_page_2() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___page_2)); }
	inline RectTransform_t3349966182 * get_page_2() const { return ___page_2; }
	inline RectTransform_t3349966182 ** get_address_of_page_2() { return &___page_2; }
	inline void set_page_2(RectTransform_t3349966182 * value)
	{
		___page_2 = value;
		Il2CppCodeGenWriteBarrier(&___page_2, value);
	}

	inline static int32_t get_offset_of_hoverTransform_3() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___hoverTransform_3)); }
	inline RectTransform_t3349966182 * get_hoverTransform_3() const { return ___hoverTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_hoverTransform_3() { return &___hoverTransform_3; }
	inline void set_hoverTransform_3(RectTransform_t3349966182 * value)
	{
		___hoverTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___hoverTransform_3, value);
	}

	inline static int32_t get_offset_of_hoverPositionZMeters_4() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___hoverPositionZMeters_4)); }
	inline float get_hoverPositionZMeters_4() const { return ___hoverPositionZMeters_4; }
	inline float* get_address_of_hoverPositionZMeters_4() { return &___hoverPositionZMeters_4; }
	inline void set_hoverPositionZMeters_4(float value)
	{
		___hoverPositionZMeters_4 = value;
	}

	inline static int32_t get_offset_of_interpolationSpeed_5() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___interpolationSpeed_5)); }
	inline float get_interpolationSpeed_5() const { return ___interpolationSpeed_5; }
	inline float* get_address_of_interpolationSpeed_5() { return &___interpolationSpeed_5; }
	inline void set_interpolationSpeed_5(float value)
	{
		___interpolationSpeed_5 = value;
	}

	inline static int32_t get_offset_of_graphic_6() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___graphic_6)); }
	inline Graphic_t2426225576 * get_graphic_6() const { return ___graphic_6; }
	inline Graphic_t2426225576 ** get_address_of_graphic_6() { return &___graphic_6; }
	inline void set_graphic_6(Graphic_t2426225576 * value)
	{
		___graphic_6 = value;
		Il2CppCodeGenWriteBarrier(&___graphic_6, value);
	}

	inline static int32_t get_offset_of_desiredPositionZ_7() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___desiredPositionZ_7)); }
	inline float get_desiredPositionZ_7() const { return ___desiredPositionZ_7; }
	inline float* get_address_of_desiredPositionZ_7() { return &___desiredPositionZ_7; }
	inline void set_desiredPositionZ_7(float value)
	{
		___desiredPositionZ_7 = value;
	}

	inline static int32_t get_offset_of_cachedPagedScrollRect_8() { return static_cast<int32_t>(offsetof(JumpToPage_t3783692930, ___cachedPagedScrollRect_8)); }
	inline PagedScrollRect_t3048021378 * get_cachedPagedScrollRect_8() const { return ___cachedPagedScrollRect_8; }
	inline PagedScrollRect_t3048021378 ** get_address_of_cachedPagedScrollRect_8() { return &___cachedPagedScrollRect_8; }
	inline void set_cachedPagedScrollRect_8(PagedScrollRect_t3048021378 * value)
	{
		___cachedPagedScrollRect_8 = value;
		Il2CppCodeGenWriteBarrier(&___cachedPagedScrollRect_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
