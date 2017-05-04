#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseScrollEffect/UpdateData
struct  UpdateData_t3671771611 
{
public:
	// UnityEngine.RectTransform BaseScrollEffect/UpdateData::page
	RectTransform_t3349966182 * ___page_0;
	// System.Int32 BaseScrollEffect/UpdateData::pageIndex
	int32_t ___pageIndex_1;
	// System.Int32 BaseScrollEffect/UpdateData::pageCount
	int32_t ___pageCount_2;
	// System.Single BaseScrollEffect/UpdateData::pageOffset
	float ___pageOffset_3;
	// System.Single BaseScrollEffect/UpdateData::scrollOffset
	float ___scrollOffset_4;
	// System.Single BaseScrollEffect/UpdateData::spacing
	float ___spacing_5;
	// System.Boolean BaseScrollEffect/UpdateData::looping
	bool ___looping_6;
	// System.Boolean BaseScrollEffect/UpdateData::isInteractable
	bool ___isInteractable_7;
	// System.Single BaseScrollEffect/UpdateData::moveDistance
	float ___moveDistance_8;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___page_0)); }
	inline RectTransform_t3349966182 * get_page_0() const { return ___page_0; }
	inline RectTransform_t3349966182 ** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(RectTransform_t3349966182 * value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier(&___page_0, value);
	}

	inline static int32_t get_offset_of_pageIndex_1() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___pageIndex_1)); }
	inline int32_t get_pageIndex_1() const { return ___pageIndex_1; }
	inline int32_t* get_address_of_pageIndex_1() { return &___pageIndex_1; }
	inline void set_pageIndex_1(int32_t value)
	{
		___pageIndex_1 = value;
	}

	inline static int32_t get_offset_of_pageCount_2() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___pageCount_2)); }
	inline int32_t get_pageCount_2() const { return ___pageCount_2; }
	inline int32_t* get_address_of_pageCount_2() { return &___pageCount_2; }
	inline void set_pageCount_2(int32_t value)
	{
		___pageCount_2 = value;
	}

	inline static int32_t get_offset_of_pageOffset_3() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___pageOffset_3)); }
	inline float get_pageOffset_3() const { return ___pageOffset_3; }
	inline float* get_address_of_pageOffset_3() { return &___pageOffset_3; }
	inline void set_pageOffset_3(float value)
	{
		___pageOffset_3 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_4() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___scrollOffset_4)); }
	inline float get_scrollOffset_4() const { return ___scrollOffset_4; }
	inline float* get_address_of_scrollOffset_4() { return &___scrollOffset_4; }
	inline void set_scrollOffset_4(float value)
	{
		___scrollOffset_4 = value;
	}

	inline static int32_t get_offset_of_spacing_5() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___spacing_5)); }
	inline float get_spacing_5() const { return ___spacing_5; }
	inline float* get_address_of_spacing_5() { return &___spacing_5; }
	inline void set_spacing_5(float value)
	{
		___spacing_5 = value;
	}

	inline static int32_t get_offset_of_looping_6() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___looping_6)); }
	inline bool get_looping_6() const { return ___looping_6; }
	inline bool* get_address_of_looping_6() { return &___looping_6; }
	inline void set_looping_6(bool value)
	{
		___looping_6 = value;
	}

	inline static int32_t get_offset_of_isInteractable_7() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___isInteractable_7)); }
	inline bool get_isInteractable_7() const { return ___isInteractable_7; }
	inline bool* get_address_of_isInteractable_7() { return &___isInteractable_7; }
	inline void set_isInteractable_7(bool value)
	{
		___isInteractable_7 = value;
	}

	inline static int32_t get_offset_of_moveDistance_8() { return static_cast<int32_t>(offsetof(UpdateData_t3671771611, ___moveDistance_8)); }
	inline float get_moveDistance_8() const { return ___moveDistance_8; }
	inline float* get_address_of_moveDistance_8() { return &___moveDistance_8; }
	inline void set_moveDistance_8(float value)
	{
		___moveDistance_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of BaseScrollEffect/UpdateData
struct UpdateData_t3671771611_marshaled_pinvoke
{
	RectTransform_t3349966182 * ___page_0;
	int32_t ___pageIndex_1;
	int32_t ___pageCount_2;
	float ___pageOffset_3;
	float ___scrollOffset_4;
	float ___spacing_5;
	int32_t ___looping_6;
	int32_t ___isInteractable_7;
	float ___moveDistance_8;
};
// Native definition for COM marshalling of BaseScrollEffect/UpdateData
struct UpdateData_t3671771611_marshaled_com
{
	RectTransform_t3349966182 * ___page_0;
	int32_t ___pageIndex_1;
	int32_t ___pageCount_2;
	float ___pageOffset_3;
	float ___scrollOffset_4;
	float ___spacing_5;
	int32_t ___looping_6;
	int32_t ___isInteractable_7;
	float ___moveDistance_8;
};
