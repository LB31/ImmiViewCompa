#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrBaseControllerVisual
struct  GvrBaseControllerVisual_t4093442088  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer GvrBaseControllerVisual::materialRenderer
	Renderer_t257310565 * ___materialRenderer_2;
	// UnityEngine.MaterialPropertyBlock GvrBaseControllerVisual::materialPropertyBlock
	MaterialPropertyBlock_t3303648957 * ___materialPropertyBlock_3;
	// System.Int32 GvrBaseControllerVisual::colorId
	int32_t ___colorId_4;
	// System.Single GvrBaseControllerVisual::maximumAlpha
	float ___maximumAlpha_5;

public:
	inline static int32_t get_offset_of_materialRenderer_2() { return static_cast<int32_t>(offsetof(GvrBaseControllerVisual_t4093442088, ___materialRenderer_2)); }
	inline Renderer_t257310565 * get_materialRenderer_2() const { return ___materialRenderer_2; }
	inline Renderer_t257310565 ** get_address_of_materialRenderer_2() { return &___materialRenderer_2; }
	inline void set_materialRenderer_2(Renderer_t257310565 * value)
	{
		___materialRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___materialRenderer_2, value);
	}

	inline static int32_t get_offset_of_materialPropertyBlock_3() { return static_cast<int32_t>(offsetof(GvrBaseControllerVisual_t4093442088, ___materialPropertyBlock_3)); }
	inline MaterialPropertyBlock_t3303648957 * get_materialPropertyBlock_3() const { return ___materialPropertyBlock_3; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_materialPropertyBlock_3() { return &___materialPropertyBlock_3; }
	inline void set_materialPropertyBlock_3(MaterialPropertyBlock_t3303648957 * value)
	{
		___materialPropertyBlock_3 = value;
		Il2CppCodeGenWriteBarrier(&___materialPropertyBlock_3, value);
	}

	inline static int32_t get_offset_of_colorId_4() { return static_cast<int32_t>(offsetof(GvrBaseControllerVisual_t4093442088, ___colorId_4)); }
	inline int32_t get_colorId_4() const { return ___colorId_4; }
	inline int32_t* get_address_of_colorId_4() { return &___colorId_4; }
	inline void set_colorId_4(int32_t value)
	{
		___colorId_4 = value;
	}

	inline static int32_t get_offset_of_maximumAlpha_5() { return static_cast<int32_t>(offsetof(GvrBaseControllerVisual_t4093442088, ___maximumAlpha_5)); }
	inline float get_maximumAlpha_5() const { return ___maximumAlpha_5; }
	inline float* get_address_of_maximumAlpha_5() { return &___maximumAlpha_5; }
	inline void set_maximumAlpha_5(float value)
	{
		___maximumAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
