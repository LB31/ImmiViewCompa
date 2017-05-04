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
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_GvrTooltip_Location3759394206.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrTooltip
struct  GvrTooltip_t801170144  : public MonoBehaviour_t1158329972
{
public:
	// GvrTooltip/Location GvrTooltip::location
	int32_t ___location_9;
	// UnityEngine.UI.Text GvrTooltip::text
	Text_t356221433 * ___text_10;
	// System.Boolean GvrTooltip::alwaysVisible
	bool ___alwaysVisible_11;
	// System.Boolean GvrTooltip::isOnLeft
	bool ___isOnLeft_12;
	// UnityEngine.RectTransform GvrTooltip::rectTransform
	RectTransform_t3349966182 * ___rectTransform_13;
	// UnityEngine.CanvasGroup GvrTooltip::canvasGroup
	CanvasGroup_t3296560743 * ___canvasGroup_14;

public:
	inline static int32_t get_offset_of_location_9() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144, ___location_9)); }
	inline int32_t get_location_9() const { return ___location_9; }
	inline int32_t* get_address_of_location_9() { return &___location_9; }
	inline void set_location_9(int32_t value)
	{
		___location_9 = value;
	}

	inline static int32_t get_offset_of_text_10() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144, ___text_10)); }
	inline Text_t356221433 * get_text_10() const { return ___text_10; }
	inline Text_t356221433 ** get_address_of_text_10() { return &___text_10; }
	inline void set_text_10(Text_t356221433 * value)
	{
		___text_10 = value;
		Il2CppCodeGenWriteBarrier(&___text_10, value);
	}

	inline static int32_t get_offset_of_alwaysVisible_11() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144, ___alwaysVisible_11)); }
	inline bool get_alwaysVisible_11() const { return ___alwaysVisible_11; }
	inline bool* get_address_of_alwaysVisible_11() { return &___alwaysVisible_11; }
	inline void set_alwaysVisible_11(bool value)
	{
		___alwaysVisible_11 = value;
	}

	inline static int32_t get_offset_of_isOnLeft_12() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144, ___isOnLeft_12)); }
	inline bool get_isOnLeft_12() const { return ___isOnLeft_12; }
	inline bool* get_address_of_isOnLeft_12() { return &___isOnLeft_12; }
	inline void set_isOnLeft_12(bool value)
	{
		___isOnLeft_12 = value;
	}

	inline static int32_t get_offset_of_rectTransform_13() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144, ___rectTransform_13)); }
	inline RectTransform_t3349966182 * get_rectTransform_13() const { return ___rectTransform_13; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_13() { return &___rectTransform_13; }
	inline void set_rectTransform_13(RectTransform_t3349966182 * value)
	{
		___rectTransform_13 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_13, value);
	}

	inline static int32_t get_offset_of_canvasGroup_14() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144, ___canvasGroup_14)); }
	inline CanvasGroup_t3296560743 * get_canvasGroup_14() const { return ___canvasGroup_14; }
	inline CanvasGroup_t3296560743 ** get_address_of_canvasGroup_14() { return &___canvasGroup_14; }
	inline void set_canvasGroup_14(CanvasGroup_t3296560743 * value)
	{
		___canvasGroup_14 = value;
		Il2CppCodeGenWriteBarrier(&___canvasGroup_14, value);
	}
};

struct GvrTooltip_t801170144_StaticFields
{
public:
	// UnityEngine.Quaternion GvrTooltip::RIGHT_SIDE_ROTATION
	Quaternion_t4030073918  ___RIGHT_SIDE_ROTATION_2;
	// UnityEngine.Quaternion GvrTooltip::LEFT_SIDE_ROTATION
	Quaternion_t4030073918  ___LEFT_SIDE_ROTATION_3;
	// UnityEngine.Vector2 GvrTooltip::SQUARE_CENTER
	Vector2_t2243707579  ___SQUARE_CENTER_4;
	// UnityEngine.Vector2 GvrTooltip::PIVOT
	Vector2_t2243707579  ___PIVOT_5;

public:
	inline static int32_t get_offset_of_RIGHT_SIDE_ROTATION_2() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144_StaticFields, ___RIGHT_SIDE_ROTATION_2)); }
	inline Quaternion_t4030073918  get_RIGHT_SIDE_ROTATION_2() const { return ___RIGHT_SIDE_ROTATION_2; }
	inline Quaternion_t4030073918 * get_address_of_RIGHT_SIDE_ROTATION_2() { return &___RIGHT_SIDE_ROTATION_2; }
	inline void set_RIGHT_SIDE_ROTATION_2(Quaternion_t4030073918  value)
	{
		___RIGHT_SIDE_ROTATION_2 = value;
	}

	inline static int32_t get_offset_of_LEFT_SIDE_ROTATION_3() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144_StaticFields, ___LEFT_SIDE_ROTATION_3)); }
	inline Quaternion_t4030073918  get_LEFT_SIDE_ROTATION_3() const { return ___LEFT_SIDE_ROTATION_3; }
	inline Quaternion_t4030073918 * get_address_of_LEFT_SIDE_ROTATION_3() { return &___LEFT_SIDE_ROTATION_3; }
	inline void set_LEFT_SIDE_ROTATION_3(Quaternion_t4030073918  value)
	{
		___LEFT_SIDE_ROTATION_3 = value;
	}

	inline static int32_t get_offset_of_SQUARE_CENTER_4() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144_StaticFields, ___SQUARE_CENTER_4)); }
	inline Vector2_t2243707579  get_SQUARE_CENTER_4() const { return ___SQUARE_CENTER_4; }
	inline Vector2_t2243707579 * get_address_of_SQUARE_CENTER_4() { return &___SQUARE_CENTER_4; }
	inline void set_SQUARE_CENTER_4(Vector2_t2243707579  value)
	{
		___SQUARE_CENTER_4 = value;
	}

	inline static int32_t get_offset_of_PIVOT_5() { return static_cast<int32_t>(offsetof(GvrTooltip_t801170144_StaticFields, ___PIVOT_5)); }
	inline Vector2_t2243707579  get_PIVOT_5() const { return ___PIVOT_5; }
	inline Vector2_t2243707579 * get_address_of_PIVOT_5() { return &___PIVOT_5; }
	inline void set_PIVOT_5(Vector2_t2243707579  value)
	{
		___PIVOT_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
