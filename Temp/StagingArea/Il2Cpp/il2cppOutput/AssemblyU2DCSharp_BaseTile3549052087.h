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
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// TiledPage
struct TiledPage_t4183784445;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseTile
struct  BaseTile_t3549052087  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform BaseTile::originalParent
	Transform_t3275118058 * ___originalParent_2;
	// UnityEngine.Quaternion BaseTile::originalRotation
	Quaternion_t4030073918  ___originalRotation_3;
	// UnityEngine.Vector3 BaseTile::originalPosition
	Vector3_t2243707580  ___originalPosition_4;
	// UnityEngine.Vector3 BaseTile::originalScale
	Vector3_t2243707580  ___originalScale_5;
	// TiledPage BaseTile::page
	TiledPage_t4183784445 * ___page_6;
	// System.Boolean BaseTile::isInteractable
	bool ___isInteractable_7;
	// System.Boolean BaseTile::isHovering
	bool ___isHovering_8;
	// System.Nullable`1<System.Single> BaseTile::metersToCanvasScale
	Nullable_1_t339576247  ___metersToCanvasScale_9;

public:
	inline static int32_t get_offset_of_originalParent_2() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___originalParent_2)); }
	inline Transform_t3275118058 * get_originalParent_2() const { return ___originalParent_2; }
	inline Transform_t3275118058 ** get_address_of_originalParent_2() { return &___originalParent_2; }
	inline void set_originalParent_2(Transform_t3275118058 * value)
	{
		___originalParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___originalParent_2, value);
	}

	inline static int32_t get_offset_of_originalRotation_3() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___originalRotation_3)); }
	inline Quaternion_t4030073918  get_originalRotation_3() const { return ___originalRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_originalRotation_3() { return &___originalRotation_3; }
	inline void set_originalRotation_3(Quaternion_t4030073918  value)
	{
		___originalRotation_3 = value;
	}

	inline static int32_t get_offset_of_originalPosition_4() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___originalPosition_4)); }
	inline Vector3_t2243707580  get_originalPosition_4() const { return ___originalPosition_4; }
	inline Vector3_t2243707580 * get_address_of_originalPosition_4() { return &___originalPosition_4; }
	inline void set_originalPosition_4(Vector3_t2243707580  value)
	{
		___originalPosition_4 = value;
	}

	inline static int32_t get_offset_of_originalScale_5() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___originalScale_5)); }
	inline Vector3_t2243707580  get_originalScale_5() const { return ___originalScale_5; }
	inline Vector3_t2243707580 * get_address_of_originalScale_5() { return &___originalScale_5; }
	inline void set_originalScale_5(Vector3_t2243707580  value)
	{
		___originalScale_5 = value;
	}

	inline static int32_t get_offset_of_page_6() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___page_6)); }
	inline TiledPage_t4183784445 * get_page_6() const { return ___page_6; }
	inline TiledPage_t4183784445 ** get_address_of_page_6() { return &___page_6; }
	inline void set_page_6(TiledPage_t4183784445 * value)
	{
		___page_6 = value;
		Il2CppCodeGenWriteBarrier(&___page_6, value);
	}

	inline static int32_t get_offset_of_isInteractable_7() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___isInteractable_7)); }
	inline bool get_isInteractable_7() const { return ___isInteractable_7; }
	inline bool* get_address_of_isInteractable_7() { return &___isInteractable_7; }
	inline void set_isInteractable_7(bool value)
	{
		___isInteractable_7 = value;
	}

	inline static int32_t get_offset_of_isHovering_8() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___isHovering_8)); }
	inline bool get_isHovering_8() const { return ___isHovering_8; }
	inline bool* get_address_of_isHovering_8() { return &___isHovering_8; }
	inline void set_isHovering_8(bool value)
	{
		___isHovering_8 = value;
	}

	inline static int32_t get_offset_of_metersToCanvasScale_9() { return static_cast<int32_t>(offsetof(BaseTile_t3549052087, ___metersToCanvasScale_9)); }
	inline Nullable_1_t339576247  get_metersToCanvasScale_9() const { return ___metersToCanvasScale_9; }
	inline Nullable_1_t339576247 * get_address_of_metersToCanvasScale_9() { return &___metersToCanvasScale_9; }
	inline void set_metersToCanvasScale_9(Nullable_1_t339576247  value)
	{
		___metersToCanvasScale_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
