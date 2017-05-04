#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Collections_Generic_RBTree_Node2499136326.h"

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Collections.Generic.List`1<UnityEngine.Transform>>
struct  Node_t3725700698  : public Node_t2499136326
{
public:
	// TKey System.Collections.Generic.SortedDictionary`2/Node::key
	float ___key_3;
	// TValue System.Collections.Generic.SortedDictionary`2/Node::value
	List_1_t2644239190 * ___value_4;

public:
	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(Node_t3725700698, ___key_3)); }
	inline float get_key_3() const { return ___key_3; }
	inline float* get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(float value)
	{
		___key_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(Node_t3725700698, ___value_4)); }
	inline List_1_t2644239190 * get_value_4() const { return ___value_4; }
	inline List_1_t2644239190 ** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(List_1_t2644239190 * value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier(&___value_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
