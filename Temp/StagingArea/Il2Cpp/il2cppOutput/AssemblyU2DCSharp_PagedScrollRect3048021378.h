#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// PagedScrollRect/ActivePageChangedDelegate
struct ActivePageChangedDelegate_t75508741;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// IPageProvider
struct IPageProvider_t3964980009;
// BaseScrollEffect[]
struct BaseScrollEffectU5BU5D_t4214983084;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>
struct Dictionary_2_t2357791817;
// System.Collections.Generic.Dictionary`2<UnityEngine.RectTransform,System.Int32>
struct Dictionary_2_t1997725141;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t2719087314;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PagedScrollRect
struct  PagedScrollRect_t3048021378  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PagedScrollRect::ScrollSensitivity
	float ___ScrollSensitivity_2;
	// System.Single PagedScrollRect::SnapSpeed
	float ___SnapSpeed_3;
	// System.Int32 PagedScrollRect::StartPage
	int32_t ___StartPage_4;
	// System.Boolean PagedScrollRect::loop
	bool ___loop_5;
	// System.Boolean PagedScrollRect::onlyScrollWhenPointing
	bool ___onlyScrollWhenPointing_6;
	// System.Int32 PagedScrollRect::numExtraPagesShown
	int32_t ___numExtraPagesShown_7;
	// System.Boolean PagedScrollRect::showNextPagesAtRest
	bool ___showNextPagesAtRest_8;
	// System.Boolean PagedScrollRect::shouldTilesAlwaysBeInteractable
	bool ___shouldTilesAlwaysBeInteractable_9;
	// System.Boolean PagedScrollRect::scrollingEnabled
	bool ___scrollingEnabled_10;
	// PagedScrollRect/ActivePageChangedDelegate PagedScrollRect::OnActivePageChanged
	ActivePageChangedDelegate_t75508741 * ___OnActivePageChanged_11;
	// UnityEngine.Events.UnityEvent PagedScrollRect::OnSwipeLeft
	UnityEvent_t408735097 * ___OnSwipeLeft_12;
	// UnityEngine.Events.UnityEvent PagedScrollRect::OnSwipeRight
	UnityEvent_t408735097 * ___OnSwipeRight_13;
	// UnityEngine.Events.UnityEvent PagedScrollRect::OnSnapClosest
	UnityEvent_t408735097 * ___OnSnapClosest_14;
	// IPageProvider PagedScrollRect::pageProvider
	Il2CppObject * ___pageProvider_15;
	// BaseScrollEffect[] PagedScrollRect::scrollEffects
	BaseScrollEffectU5BU5D_t4214983084* ___scrollEffects_16;
	// System.Boolean PagedScrollRect::isTrackingTouches
	bool ___isTrackingTouches_17;
	// UnityEngine.Vector2 PagedScrollRect::initialTouchPos
	Vector2_t2243707579  ___initialTouchPos_18;
	// UnityEngine.Vector2 PagedScrollRect::previousTouchPos
	Vector2_t2243707579  ___previousTouchPos_19;
	// System.Single PagedScrollRect::previousTouchTimestamp
	float ___previousTouchTimestamp_20;
	// UnityEngine.Vector2 PagedScrollRect::overallVelocity
	Vector2_t2243707579  ___overallVelocity_21;
	// System.Boolean PagedScrollRect::isScrolling
	bool ___isScrolling_22;
	// System.Boolean PagedScrollRect::isPointerHovering
	bool ___isPointerHovering_23;
	// System.Single PagedScrollRect::scrollOffset
	float ___scrollOffset_24;
	// System.Single PagedScrollRect::targetScrollOffset
	float ___targetScrollOffset_25;
	// System.Boolean PagedScrollRect::isScrollOffsetOverridden
	bool ___isScrollOffsetOverridden_26;
	// UnityEngine.RectTransform PagedScrollRect::activePage
	RectTransform_t3349966182 * ___activePage_27;
	// UnityEngine.Coroutine PagedScrollRect::activeSnapCoroutine
	Coroutine_t2299508840 * ___activeSnapCoroutine_28;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform> PagedScrollRect::indexToVisiblePage
	Dictionary_2_t2357791817 * ___indexToVisiblePage_29;
	// System.Collections.Generic.Dictionary`2<UnityEngine.RectTransform,System.Int32> PagedScrollRect::visiblePageToIndex
	Dictionary_2_t1997725141 * ___visiblePageToIndex_30;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> PagedScrollRect::visiblePages
	List_1_t2719087314 * ___visiblePages_31;

public:
	inline static int32_t get_offset_of_ScrollSensitivity_2() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___ScrollSensitivity_2)); }
	inline float get_ScrollSensitivity_2() const { return ___ScrollSensitivity_2; }
	inline float* get_address_of_ScrollSensitivity_2() { return &___ScrollSensitivity_2; }
	inline void set_ScrollSensitivity_2(float value)
	{
		___ScrollSensitivity_2 = value;
	}

	inline static int32_t get_offset_of_SnapSpeed_3() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___SnapSpeed_3)); }
	inline float get_SnapSpeed_3() const { return ___SnapSpeed_3; }
	inline float* get_address_of_SnapSpeed_3() { return &___SnapSpeed_3; }
	inline void set_SnapSpeed_3(float value)
	{
		___SnapSpeed_3 = value;
	}

	inline static int32_t get_offset_of_StartPage_4() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___StartPage_4)); }
	inline int32_t get_StartPage_4() const { return ___StartPage_4; }
	inline int32_t* get_address_of_StartPage_4() { return &___StartPage_4; }
	inline void set_StartPage_4(int32_t value)
	{
		___StartPage_4 = value;
	}

	inline static int32_t get_offset_of_loop_5() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___loop_5)); }
	inline bool get_loop_5() const { return ___loop_5; }
	inline bool* get_address_of_loop_5() { return &___loop_5; }
	inline void set_loop_5(bool value)
	{
		___loop_5 = value;
	}

	inline static int32_t get_offset_of_onlyScrollWhenPointing_6() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___onlyScrollWhenPointing_6)); }
	inline bool get_onlyScrollWhenPointing_6() const { return ___onlyScrollWhenPointing_6; }
	inline bool* get_address_of_onlyScrollWhenPointing_6() { return &___onlyScrollWhenPointing_6; }
	inline void set_onlyScrollWhenPointing_6(bool value)
	{
		___onlyScrollWhenPointing_6 = value;
	}

	inline static int32_t get_offset_of_numExtraPagesShown_7() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___numExtraPagesShown_7)); }
	inline int32_t get_numExtraPagesShown_7() const { return ___numExtraPagesShown_7; }
	inline int32_t* get_address_of_numExtraPagesShown_7() { return &___numExtraPagesShown_7; }
	inline void set_numExtraPagesShown_7(int32_t value)
	{
		___numExtraPagesShown_7 = value;
	}

	inline static int32_t get_offset_of_showNextPagesAtRest_8() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___showNextPagesAtRest_8)); }
	inline bool get_showNextPagesAtRest_8() const { return ___showNextPagesAtRest_8; }
	inline bool* get_address_of_showNextPagesAtRest_8() { return &___showNextPagesAtRest_8; }
	inline void set_showNextPagesAtRest_8(bool value)
	{
		___showNextPagesAtRest_8 = value;
	}

	inline static int32_t get_offset_of_shouldTilesAlwaysBeInteractable_9() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___shouldTilesAlwaysBeInteractable_9)); }
	inline bool get_shouldTilesAlwaysBeInteractable_9() const { return ___shouldTilesAlwaysBeInteractable_9; }
	inline bool* get_address_of_shouldTilesAlwaysBeInteractable_9() { return &___shouldTilesAlwaysBeInteractable_9; }
	inline void set_shouldTilesAlwaysBeInteractable_9(bool value)
	{
		___shouldTilesAlwaysBeInteractable_9 = value;
	}

	inline static int32_t get_offset_of_scrollingEnabled_10() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___scrollingEnabled_10)); }
	inline bool get_scrollingEnabled_10() const { return ___scrollingEnabled_10; }
	inline bool* get_address_of_scrollingEnabled_10() { return &___scrollingEnabled_10; }
	inline void set_scrollingEnabled_10(bool value)
	{
		___scrollingEnabled_10 = value;
	}

	inline static int32_t get_offset_of_OnActivePageChanged_11() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___OnActivePageChanged_11)); }
	inline ActivePageChangedDelegate_t75508741 * get_OnActivePageChanged_11() const { return ___OnActivePageChanged_11; }
	inline ActivePageChangedDelegate_t75508741 ** get_address_of_OnActivePageChanged_11() { return &___OnActivePageChanged_11; }
	inline void set_OnActivePageChanged_11(ActivePageChangedDelegate_t75508741 * value)
	{
		___OnActivePageChanged_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnActivePageChanged_11, value);
	}

	inline static int32_t get_offset_of_OnSwipeLeft_12() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___OnSwipeLeft_12)); }
	inline UnityEvent_t408735097 * get_OnSwipeLeft_12() const { return ___OnSwipeLeft_12; }
	inline UnityEvent_t408735097 ** get_address_of_OnSwipeLeft_12() { return &___OnSwipeLeft_12; }
	inline void set_OnSwipeLeft_12(UnityEvent_t408735097 * value)
	{
		___OnSwipeLeft_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnSwipeLeft_12, value);
	}

	inline static int32_t get_offset_of_OnSwipeRight_13() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___OnSwipeRight_13)); }
	inline UnityEvent_t408735097 * get_OnSwipeRight_13() const { return ___OnSwipeRight_13; }
	inline UnityEvent_t408735097 ** get_address_of_OnSwipeRight_13() { return &___OnSwipeRight_13; }
	inline void set_OnSwipeRight_13(UnityEvent_t408735097 * value)
	{
		___OnSwipeRight_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnSwipeRight_13, value);
	}

	inline static int32_t get_offset_of_OnSnapClosest_14() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___OnSnapClosest_14)); }
	inline UnityEvent_t408735097 * get_OnSnapClosest_14() const { return ___OnSnapClosest_14; }
	inline UnityEvent_t408735097 ** get_address_of_OnSnapClosest_14() { return &___OnSnapClosest_14; }
	inline void set_OnSnapClosest_14(UnityEvent_t408735097 * value)
	{
		___OnSnapClosest_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnSnapClosest_14, value);
	}

	inline static int32_t get_offset_of_pageProvider_15() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___pageProvider_15)); }
	inline Il2CppObject * get_pageProvider_15() const { return ___pageProvider_15; }
	inline Il2CppObject ** get_address_of_pageProvider_15() { return &___pageProvider_15; }
	inline void set_pageProvider_15(Il2CppObject * value)
	{
		___pageProvider_15 = value;
		Il2CppCodeGenWriteBarrier(&___pageProvider_15, value);
	}

	inline static int32_t get_offset_of_scrollEffects_16() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___scrollEffects_16)); }
	inline BaseScrollEffectU5BU5D_t4214983084* get_scrollEffects_16() const { return ___scrollEffects_16; }
	inline BaseScrollEffectU5BU5D_t4214983084** get_address_of_scrollEffects_16() { return &___scrollEffects_16; }
	inline void set_scrollEffects_16(BaseScrollEffectU5BU5D_t4214983084* value)
	{
		___scrollEffects_16 = value;
		Il2CppCodeGenWriteBarrier(&___scrollEffects_16, value);
	}

	inline static int32_t get_offset_of_isTrackingTouches_17() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___isTrackingTouches_17)); }
	inline bool get_isTrackingTouches_17() const { return ___isTrackingTouches_17; }
	inline bool* get_address_of_isTrackingTouches_17() { return &___isTrackingTouches_17; }
	inline void set_isTrackingTouches_17(bool value)
	{
		___isTrackingTouches_17 = value;
	}

	inline static int32_t get_offset_of_initialTouchPos_18() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___initialTouchPos_18)); }
	inline Vector2_t2243707579  get_initialTouchPos_18() const { return ___initialTouchPos_18; }
	inline Vector2_t2243707579 * get_address_of_initialTouchPos_18() { return &___initialTouchPos_18; }
	inline void set_initialTouchPos_18(Vector2_t2243707579  value)
	{
		___initialTouchPos_18 = value;
	}

	inline static int32_t get_offset_of_previousTouchPos_19() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___previousTouchPos_19)); }
	inline Vector2_t2243707579  get_previousTouchPos_19() const { return ___previousTouchPos_19; }
	inline Vector2_t2243707579 * get_address_of_previousTouchPos_19() { return &___previousTouchPos_19; }
	inline void set_previousTouchPos_19(Vector2_t2243707579  value)
	{
		___previousTouchPos_19 = value;
	}

	inline static int32_t get_offset_of_previousTouchTimestamp_20() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___previousTouchTimestamp_20)); }
	inline float get_previousTouchTimestamp_20() const { return ___previousTouchTimestamp_20; }
	inline float* get_address_of_previousTouchTimestamp_20() { return &___previousTouchTimestamp_20; }
	inline void set_previousTouchTimestamp_20(float value)
	{
		___previousTouchTimestamp_20 = value;
	}

	inline static int32_t get_offset_of_overallVelocity_21() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___overallVelocity_21)); }
	inline Vector2_t2243707579  get_overallVelocity_21() const { return ___overallVelocity_21; }
	inline Vector2_t2243707579 * get_address_of_overallVelocity_21() { return &___overallVelocity_21; }
	inline void set_overallVelocity_21(Vector2_t2243707579  value)
	{
		___overallVelocity_21 = value;
	}

	inline static int32_t get_offset_of_isScrolling_22() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___isScrolling_22)); }
	inline bool get_isScrolling_22() const { return ___isScrolling_22; }
	inline bool* get_address_of_isScrolling_22() { return &___isScrolling_22; }
	inline void set_isScrolling_22(bool value)
	{
		___isScrolling_22 = value;
	}

	inline static int32_t get_offset_of_isPointerHovering_23() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___isPointerHovering_23)); }
	inline bool get_isPointerHovering_23() const { return ___isPointerHovering_23; }
	inline bool* get_address_of_isPointerHovering_23() { return &___isPointerHovering_23; }
	inline void set_isPointerHovering_23(bool value)
	{
		___isPointerHovering_23 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_24() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___scrollOffset_24)); }
	inline float get_scrollOffset_24() const { return ___scrollOffset_24; }
	inline float* get_address_of_scrollOffset_24() { return &___scrollOffset_24; }
	inline void set_scrollOffset_24(float value)
	{
		___scrollOffset_24 = value;
	}

	inline static int32_t get_offset_of_targetScrollOffset_25() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___targetScrollOffset_25)); }
	inline float get_targetScrollOffset_25() const { return ___targetScrollOffset_25; }
	inline float* get_address_of_targetScrollOffset_25() { return &___targetScrollOffset_25; }
	inline void set_targetScrollOffset_25(float value)
	{
		___targetScrollOffset_25 = value;
	}

	inline static int32_t get_offset_of_isScrollOffsetOverridden_26() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___isScrollOffsetOverridden_26)); }
	inline bool get_isScrollOffsetOverridden_26() const { return ___isScrollOffsetOverridden_26; }
	inline bool* get_address_of_isScrollOffsetOverridden_26() { return &___isScrollOffsetOverridden_26; }
	inline void set_isScrollOffsetOverridden_26(bool value)
	{
		___isScrollOffsetOverridden_26 = value;
	}

	inline static int32_t get_offset_of_activePage_27() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___activePage_27)); }
	inline RectTransform_t3349966182 * get_activePage_27() const { return ___activePage_27; }
	inline RectTransform_t3349966182 ** get_address_of_activePage_27() { return &___activePage_27; }
	inline void set_activePage_27(RectTransform_t3349966182 * value)
	{
		___activePage_27 = value;
		Il2CppCodeGenWriteBarrier(&___activePage_27, value);
	}

	inline static int32_t get_offset_of_activeSnapCoroutine_28() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___activeSnapCoroutine_28)); }
	inline Coroutine_t2299508840 * get_activeSnapCoroutine_28() const { return ___activeSnapCoroutine_28; }
	inline Coroutine_t2299508840 ** get_address_of_activeSnapCoroutine_28() { return &___activeSnapCoroutine_28; }
	inline void set_activeSnapCoroutine_28(Coroutine_t2299508840 * value)
	{
		___activeSnapCoroutine_28 = value;
		Il2CppCodeGenWriteBarrier(&___activeSnapCoroutine_28, value);
	}

	inline static int32_t get_offset_of_indexToVisiblePage_29() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___indexToVisiblePage_29)); }
	inline Dictionary_2_t2357791817 * get_indexToVisiblePage_29() const { return ___indexToVisiblePage_29; }
	inline Dictionary_2_t2357791817 ** get_address_of_indexToVisiblePage_29() { return &___indexToVisiblePage_29; }
	inline void set_indexToVisiblePage_29(Dictionary_2_t2357791817 * value)
	{
		___indexToVisiblePage_29 = value;
		Il2CppCodeGenWriteBarrier(&___indexToVisiblePage_29, value);
	}

	inline static int32_t get_offset_of_visiblePageToIndex_30() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___visiblePageToIndex_30)); }
	inline Dictionary_2_t1997725141 * get_visiblePageToIndex_30() const { return ___visiblePageToIndex_30; }
	inline Dictionary_2_t1997725141 ** get_address_of_visiblePageToIndex_30() { return &___visiblePageToIndex_30; }
	inline void set_visiblePageToIndex_30(Dictionary_2_t1997725141 * value)
	{
		___visiblePageToIndex_30 = value;
		Il2CppCodeGenWriteBarrier(&___visiblePageToIndex_30, value);
	}

	inline static int32_t get_offset_of_visiblePages_31() { return static_cast<int32_t>(offsetof(PagedScrollRect_t3048021378, ___visiblePages_31)); }
	inline List_1_t2719087314 * get_visiblePages_31() const { return ___visiblePages_31; }
	inline List_1_t2719087314 ** get_address_of_visiblePages_31() { return &___visiblePages_31; }
	inline void set_visiblePages_31(List_1_t2719087314 * value)
	{
		___visiblePages_31 = value;
		Il2CppCodeGenWriteBarrier(&___visiblePages_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
