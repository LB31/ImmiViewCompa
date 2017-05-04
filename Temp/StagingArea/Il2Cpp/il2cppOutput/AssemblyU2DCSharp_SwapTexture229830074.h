#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwapTexture
struct  SwapTexture_t229830074  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material[] SwapTexture::myTextures
	MaterialU5BU5D_t3123989686* ___myTextures_2;
	// System.Int32 SwapTexture::maxTextures
	int32_t ___maxTextures_3;
	// System.Int32 SwapTexture::arrayPos
	int32_t ___arrayPos_4;

public:
	inline static int32_t get_offset_of_myTextures_2() { return static_cast<int32_t>(offsetof(SwapTexture_t229830074, ___myTextures_2)); }
	inline MaterialU5BU5D_t3123989686* get_myTextures_2() const { return ___myTextures_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_myTextures_2() { return &___myTextures_2; }
	inline void set_myTextures_2(MaterialU5BU5D_t3123989686* value)
	{
		___myTextures_2 = value;
		Il2CppCodeGenWriteBarrier(&___myTextures_2, value);
	}

	inline static int32_t get_offset_of_maxTextures_3() { return static_cast<int32_t>(offsetof(SwapTexture_t229830074, ___maxTextures_3)); }
	inline int32_t get_maxTextures_3() const { return ___maxTextures_3; }
	inline int32_t* get_address_of_maxTextures_3() { return &___maxTextures_3; }
	inline void set_maxTextures_3(int32_t value)
	{
		___maxTextures_3 = value;
	}

	inline static int32_t get_offset_of_arrayPos_4() { return static_cast<int32_t>(offsetof(SwapTexture_t229830074, ___arrayPos_4)); }
	inline int32_t get_arrayPos_4() const { return ___arrayPos_4; }
	inline int32_t* get_address_of_arrayPos_4() { return &___arrayPos_4; }
	inline void set_arrayPos_4(int32_t value)
	{
		___arrayPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
