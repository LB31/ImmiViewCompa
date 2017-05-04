#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrArmModelOffsets_Joint3302496419.h"

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrArmModelOffsets
struct  GvrArmModelOffsets_t2241056642  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LineRenderer GvrArmModelOffsets::lineRenderer
	LineRenderer_t849157671 * ___lineRenderer_2;
	// GvrArmModelOffsets/Joint GvrArmModelOffsets::joint
	int32_t ___joint_3;
	// UnityEngine.GameObject GvrArmModelOffsets::debugDrawTo
	GameObject_t1756533147 * ___debugDrawTo_4;

public:
	inline static int32_t get_offset_of_lineRenderer_2() { return static_cast<int32_t>(offsetof(GvrArmModelOffsets_t2241056642, ___lineRenderer_2)); }
	inline LineRenderer_t849157671 * get_lineRenderer_2() const { return ___lineRenderer_2; }
	inline LineRenderer_t849157671 ** get_address_of_lineRenderer_2() { return &___lineRenderer_2; }
	inline void set_lineRenderer_2(LineRenderer_t849157671 * value)
	{
		___lineRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_2, value);
	}

	inline static int32_t get_offset_of_joint_3() { return static_cast<int32_t>(offsetof(GvrArmModelOffsets_t2241056642, ___joint_3)); }
	inline int32_t get_joint_3() const { return ___joint_3; }
	inline int32_t* get_address_of_joint_3() { return &___joint_3; }
	inline void set_joint_3(int32_t value)
	{
		___joint_3 = value;
	}

	inline static int32_t get_offset_of_debugDrawTo_4() { return static_cast<int32_t>(offsetof(GvrArmModelOffsets_t2241056642, ___debugDrawTo_4)); }
	inline GameObject_t1756533147 * get_debugDrawTo_4() const { return ___debugDrawTo_4; }
	inline GameObject_t1756533147 ** get_address_of_debugDrawTo_4() { return &___debugDrawTo_4; }
	inline void set_debugDrawTo_4(GameObject_t1756533147 * value)
	{
		___debugDrawTo_4 = value;
		Il2CppCodeGenWriteBarrier(&___debugDrawTo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
