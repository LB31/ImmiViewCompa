#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GvrBaseControllerVisual4093442088.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrTouchPoint
struct  GvrTouchPoint_t3050416034  : public GvrBaseControllerVisual_t4093442088
{
public:
	// UnityEngine.Renderer GvrTouchPoint::touchRenderer
	Renderer_t257310565 * ___touchRenderer_11;
	// System.Single GvrTouchPoint::elapsedScaleTimeSeconds
	float ___elapsedScaleTimeSeconds_12;
	// System.Boolean GvrTouchPoint::wasTouching
	bool ___wasTouching_13;
	// UnityEngine.Material GvrTouchPoint::touchTransparent
	Material_t193706927 * ___touchTransparent_14;
	// UnityEngine.Material GvrTouchPoint::touchOpaque
	Material_t193706927 * ___touchOpaque_15;

public:
	inline static int32_t get_offset_of_touchRenderer_11() { return static_cast<int32_t>(offsetof(GvrTouchPoint_t3050416034, ___touchRenderer_11)); }
	inline Renderer_t257310565 * get_touchRenderer_11() const { return ___touchRenderer_11; }
	inline Renderer_t257310565 ** get_address_of_touchRenderer_11() { return &___touchRenderer_11; }
	inline void set_touchRenderer_11(Renderer_t257310565 * value)
	{
		___touchRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___touchRenderer_11, value);
	}

	inline static int32_t get_offset_of_elapsedScaleTimeSeconds_12() { return static_cast<int32_t>(offsetof(GvrTouchPoint_t3050416034, ___elapsedScaleTimeSeconds_12)); }
	inline float get_elapsedScaleTimeSeconds_12() const { return ___elapsedScaleTimeSeconds_12; }
	inline float* get_address_of_elapsedScaleTimeSeconds_12() { return &___elapsedScaleTimeSeconds_12; }
	inline void set_elapsedScaleTimeSeconds_12(float value)
	{
		___elapsedScaleTimeSeconds_12 = value;
	}

	inline static int32_t get_offset_of_wasTouching_13() { return static_cast<int32_t>(offsetof(GvrTouchPoint_t3050416034, ___wasTouching_13)); }
	inline bool get_wasTouching_13() const { return ___wasTouching_13; }
	inline bool* get_address_of_wasTouching_13() { return &___wasTouching_13; }
	inline void set_wasTouching_13(bool value)
	{
		___wasTouching_13 = value;
	}

	inline static int32_t get_offset_of_touchTransparent_14() { return static_cast<int32_t>(offsetof(GvrTouchPoint_t3050416034, ___touchTransparent_14)); }
	inline Material_t193706927 * get_touchTransparent_14() const { return ___touchTransparent_14; }
	inline Material_t193706927 ** get_address_of_touchTransparent_14() { return &___touchTransparent_14; }
	inline void set_touchTransparent_14(Material_t193706927 * value)
	{
		___touchTransparent_14 = value;
		Il2CppCodeGenWriteBarrier(&___touchTransparent_14, value);
	}

	inline static int32_t get_offset_of_touchOpaque_15() { return static_cast<int32_t>(offsetof(GvrTouchPoint_t3050416034, ___touchOpaque_15)); }
	inline Material_t193706927 * get_touchOpaque_15() const { return ___touchOpaque_15; }
	inline Material_t193706927 ** get_address_of_touchOpaque_15() { return &___touchOpaque_15; }
	inline void set_touchOpaque_15(Material_t193706927 * value)
	{
		___touchOpaque_15 = value;
		Il2CppCodeGenWriteBarrier(&___touchOpaque_15, value);
	}
};

struct GvrTouchPoint_t3050416034_StaticFields
{
public:
	// UnityEngine.Vector3 GvrTouchPoint::TOUCHPAD_POINT_DIMENSIONS
	Vector3_t2243707580  ___TOUCHPAD_POINT_DIMENSIONS_6;

public:
	inline static int32_t get_offset_of_TOUCHPAD_POINT_DIMENSIONS_6() { return static_cast<int32_t>(offsetof(GvrTouchPoint_t3050416034_StaticFields, ___TOUCHPAD_POINT_DIMENSIONS_6)); }
	inline Vector3_t2243707580  get_TOUCHPAD_POINT_DIMENSIONS_6() const { return ___TOUCHPAD_POINT_DIMENSIONS_6; }
	inline Vector3_t2243707580 * get_address_of_TOUCHPAD_POINT_DIMENSIONS_6() { return &___TOUCHPAD_POINT_DIMENSIONS_6; }
	inline void set_TOUCHPAD_POINT_DIMENSIONS_6(Vector3_t2243707580  value)
	{
		___TOUCHPAD_POINT_DIMENSIONS_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
