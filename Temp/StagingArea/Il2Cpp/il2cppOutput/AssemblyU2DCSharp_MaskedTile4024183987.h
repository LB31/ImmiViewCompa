#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseTile3549052087.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaskedTile
struct  MaskedTile_t4024183987  : public BaseTile_t3549052087
{
public:
	// UnityEngine.UI.Image MaskedTile::maskedImage
	Image_t2042527209 * ___maskedImage_12;
	// UnityEngine.GameObject MaskedTile::maskedImageObject
	GameObject_t1756533147 * ___maskedImageObject_13;
	// UnityEngine.Vector3 MaskedTile::originalMaskedPosition
	Vector3_t2243707580  ___originalMaskedPosition_14;
	// UnityEngine.Vector3 MaskedTile::maskedScrollOffset
	Vector3_t2243707580  ___maskedScrollOffset_15;
	// UnityEngine.Vector2 MaskedTile::originalImageSize
	Vector2_t2243707579  ___originalImageSize_16;
	// UnityEngine.Vector2 MaskedTile::enlargedImageSize
	Vector2_t2243707579  ___enlargedImageSize_17;
	// System.Single MaskedTile::desiredPositionZ
	float ___desiredPositionZ_18;
	// System.Single MaskedTile::movementWeight
	float ___movementWeight_19;
	// System.Single MaskedTile::scaleWeight
	float ___scaleWeight_20;
	// System.Single MaskedTile::hoverPositionZMeters
	float ___hoverPositionZMeters_21;
	// System.Single MaskedTile::interpolationSpeed
	float ___interpolationSpeed_22;

public:
	inline static int32_t get_offset_of_maskedImage_12() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___maskedImage_12)); }
	inline Image_t2042527209 * get_maskedImage_12() const { return ___maskedImage_12; }
	inline Image_t2042527209 ** get_address_of_maskedImage_12() { return &___maskedImage_12; }
	inline void set_maskedImage_12(Image_t2042527209 * value)
	{
		___maskedImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___maskedImage_12, value);
	}

	inline static int32_t get_offset_of_maskedImageObject_13() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___maskedImageObject_13)); }
	inline GameObject_t1756533147 * get_maskedImageObject_13() const { return ___maskedImageObject_13; }
	inline GameObject_t1756533147 ** get_address_of_maskedImageObject_13() { return &___maskedImageObject_13; }
	inline void set_maskedImageObject_13(GameObject_t1756533147 * value)
	{
		___maskedImageObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___maskedImageObject_13, value);
	}

	inline static int32_t get_offset_of_originalMaskedPosition_14() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___originalMaskedPosition_14)); }
	inline Vector3_t2243707580  get_originalMaskedPosition_14() const { return ___originalMaskedPosition_14; }
	inline Vector3_t2243707580 * get_address_of_originalMaskedPosition_14() { return &___originalMaskedPosition_14; }
	inline void set_originalMaskedPosition_14(Vector3_t2243707580  value)
	{
		___originalMaskedPosition_14 = value;
	}

	inline static int32_t get_offset_of_maskedScrollOffset_15() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___maskedScrollOffset_15)); }
	inline Vector3_t2243707580  get_maskedScrollOffset_15() const { return ___maskedScrollOffset_15; }
	inline Vector3_t2243707580 * get_address_of_maskedScrollOffset_15() { return &___maskedScrollOffset_15; }
	inline void set_maskedScrollOffset_15(Vector3_t2243707580  value)
	{
		___maskedScrollOffset_15 = value;
	}

	inline static int32_t get_offset_of_originalImageSize_16() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___originalImageSize_16)); }
	inline Vector2_t2243707579  get_originalImageSize_16() const { return ___originalImageSize_16; }
	inline Vector2_t2243707579 * get_address_of_originalImageSize_16() { return &___originalImageSize_16; }
	inline void set_originalImageSize_16(Vector2_t2243707579  value)
	{
		___originalImageSize_16 = value;
	}

	inline static int32_t get_offset_of_enlargedImageSize_17() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___enlargedImageSize_17)); }
	inline Vector2_t2243707579  get_enlargedImageSize_17() const { return ___enlargedImageSize_17; }
	inline Vector2_t2243707579 * get_address_of_enlargedImageSize_17() { return &___enlargedImageSize_17; }
	inline void set_enlargedImageSize_17(Vector2_t2243707579  value)
	{
		___enlargedImageSize_17 = value;
	}

	inline static int32_t get_offset_of_desiredPositionZ_18() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___desiredPositionZ_18)); }
	inline float get_desiredPositionZ_18() const { return ___desiredPositionZ_18; }
	inline float* get_address_of_desiredPositionZ_18() { return &___desiredPositionZ_18; }
	inline void set_desiredPositionZ_18(float value)
	{
		___desiredPositionZ_18 = value;
	}

	inline static int32_t get_offset_of_movementWeight_19() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___movementWeight_19)); }
	inline float get_movementWeight_19() const { return ___movementWeight_19; }
	inline float* get_address_of_movementWeight_19() { return &___movementWeight_19; }
	inline void set_movementWeight_19(float value)
	{
		___movementWeight_19 = value;
	}

	inline static int32_t get_offset_of_scaleWeight_20() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___scaleWeight_20)); }
	inline float get_scaleWeight_20() const { return ___scaleWeight_20; }
	inline float* get_address_of_scaleWeight_20() { return &___scaleWeight_20; }
	inline void set_scaleWeight_20(float value)
	{
		___scaleWeight_20 = value;
	}

	inline static int32_t get_offset_of_hoverPositionZMeters_21() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___hoverPositionZMeters_21)); }
	inline float get_hoverPositionZMeters_21() const { return ___hoverPositionZMeters_21; }
	inline float* get_address_of_hoverPositionZMeters_21() { return &___hoverPositionZMeters_21; }
	inline void set_hoverPositionZMeters_21(float value)
	{
		___hoverPositionZMeters_21 = value;
	}

	inline static int32_t get_offset_of_interpolationSpeed_22() { return static_cast<int32_t>(offsetof(MaskedTile_t4024183987, ___interpolationSpeed_22)); }
	inline float get_interpolationSpeed_22() const { return ___interpolationSpeed_22; }
	inline float* get_address_of_interpolationSpeed_22() { return &___interpolationSpeed_22; }
	inline void set_interpolationSpeed_22(float value)
	{
		___interpolationSpeed_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
