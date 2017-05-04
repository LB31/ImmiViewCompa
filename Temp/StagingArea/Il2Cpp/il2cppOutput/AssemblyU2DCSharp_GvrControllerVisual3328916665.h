#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GvrBaseControllerVisual4093442088.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrControllerVisual
struct  GvrControllerVisual_t3328916665  : public GvrBaseControllerVisual_t4093442088
{
public:
	// UnityEngine.Renderer GvrControllerVisual::controllerRenderer
	Renderer_t257310565 * ___controllerRenderer_6;
	// UnityEngine.Material GvrControllerVisual::material_idle
	Material_t193706927 * ___material_idle_7;
	// UnityEngine.Material GvrControllerVisual::material_app
	Material_t193706927 * ___material_app_8;
	// UnityEngine.Material GvrControllerVisual::material_system
	Material_t193706927 * ___material_system_9;
	// UnityEngine.Material GvrControllerVisual::material_touchpad
	Material_t193706927 * ___material_touchpad_10;

public:
	inline static int32_t get_offset_of_controllerRenderer_6() { return static_cast<int32_t>(offsetof(GvrControllerVisual_t3328916665, ___controllerRenderer_6)); }
	inline Renderer_t257310565 * get_controllerRenderer_6() const { return ___controllerRenderer_6; }
	inline Renderer_t257310565 ** get_address_of_controllerRenderer_6() { return &___controllerRenderer_6; }
	inline void set_controllerRenderer_6(Renderer_t257310565 * value)
	{
		___controllerRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___controllerRenderer_6, value);
	}

	inline static int32_t get_offset_of_material_idle_7() { return static_cast<int32_t>(offsetof(GvrControllerVisual_t3328916665, ___material_idle_7)); }
	inline Material_t193706927 * get_material_idle_7() const { return ___material_idle_7; }
	inline Material_t193706927 ** get_address_of_material_idle_7() { return &___material_idle_7; }
	inline void set_material_idle_7(Material_t193706927 * value)
	{
		___material_idle_7 = value;
		Il2CppCodeGenWriteBarrier(&___material_idle_7, value);
	}

	inline static int32_t get_offset_of_material_app_8() { return static_cast<int32_t>(offsetof(GvrControllerVisual_t3328916665, ___material_app_8)); }
	inline Material_t193706927 * get_material_app_8() const { return ___material_app_8; }
	inline Material_t193706927 ** get_address_of_material_app_8() { return &___material_app_8; }
	inline void set_material_app_8(Material_t193706927 * value)
	{
		___material_app_8 = value;
		Il2CppCodeGenWriteBarrier(&___material_app_8, value);
	}

	inline static int32_t get_offset_of_material_system_9() { return static_cast<int32_t>(offsetof(GvrControllerVisual_t3328916665, ___material_system_9)); }
	inline Material_t193706927 * get_material_system_9() const { return ___material_system_9; }
	inline Material_t193706927 ** get_address_of_material_system_9() { return &___material_system_9; }
	inline void set_material_system_9(Material_t193706927 * value)
	{
		___material_system_9 = value;
		Il2CppCodeGenWriteBarrier(&___material_system_9, value);
	}

	inline static int32_t get_offset_of_material_touchpad_10() { return static_cast<int32_t>(offsetof(GvrControllerVisual_t3328916665, ___material_touchpad_10)); }
	inline Material_t193706927 * get_material_touchpad_10() const { return ___material_touchpad_10; }
	inline Material_t193706927 ** get_address_of_material_touchpad_10() { return &___material_touchpad_10; }
	inline void set_material_touchpad_10(Material_t193706927 * value)
	{
		___material_touchpad_10 = value;
		Il2CppCodeGenWriteBarrier(&___material_touchpad_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
