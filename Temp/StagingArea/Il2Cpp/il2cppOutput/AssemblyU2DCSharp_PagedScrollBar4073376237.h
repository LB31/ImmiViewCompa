#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Scrollbar3248359358.h"

// System.String
struct String_t;
// PagedScrollRect
struct PagedScrollRect_t3048021378;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PagedScrollBar
struct  PagedScrollBar_t4073376237  : public Scrollbar_t3248359358
{
public:
	// PagedScrollRect PagedScrollBar::pagedScrollRect
	PagedScrollRect_t3048021378 * ___pagedScrollRect_28;
	// System.Boolean PagedScrollBar::isDragging
	bool ___isDragging_29;

public:
	inline static int32_t get_offset_of_pagedScrollRect_28() { return static_cast<int32_t>(offsetof(PagedScrollBar_t4073376237, ___pagedScrollRect_28)); }
	inline PagedScrollRect_t3048021378 * get_pagedScrollRect_28() const { return ___pagedScrollRect_28; }
	inline PagedScrollRect_t3048021378 ** get_address_of_pagedScrollRect_28() { return &___pagedScrollRect_28; }
	inline void set_pagedScrollRect_28(PagedScrollRect_t3048021378 * value)
	{
		___pagedScrollRect_28 = value;
		Il2CppCodeGenWriteBarrier(&___pagedScrollRect_28, value);
	}

	inline static int32_t get_offset_of_isDragging_29() { return static_cast<int32_t>(offsetof(PagedScrollBar_t4073376237, ___isDragging_29)); }
	inline bool get_isDragging_29() const { return ___isDragging_29; }
	inline bool* get_address_of_isDragging_29() { return &___isDragging_29; }
	inline void set_isDragging_29(bool value)
	{
		___isDragging_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
