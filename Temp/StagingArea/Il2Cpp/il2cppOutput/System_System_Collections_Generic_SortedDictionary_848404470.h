#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.RBTree
struct RBTree_t1544615604;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Collections.Generic.List`1<UnityEngine.Transform>>
struct NodeHelper_t1801570088;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2<System.Single,System.Collections.Generic.List`1<UnityEngine.Transform>>
struct  SortedDictionary_2_t848404470  : public Il2CppObject
{
public:
	// System.Collections.Generic.RBTree System.Collections.Generic.SortedDictionary`2::tree
	RBTree_t1544615604 * ___tree_0;
	// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2::hlp
	NodeHelper_t1801570088 * ___hlp_1;

public:
	inline static int32_t get_offset_of_tree_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t848404470, ___tree_0)); }
	inline RBTree_t1544615604 * get_tree_0() const { return ___tree_0; }
	inline RBTree_t1544615604 ** get_address_of_tree_0() { return &___tree_0; }
	inline void set_tree_0(RBTree_t1544615604 * value)
	{
		___tree_0 = value;
		Il2CppCodeGenWriteBarrier(&___tree_0, value);
	}

	inline static int32_t get_offset_of_hlp_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t848404470, ___hlp_1)); }
	inline NodeHelper_t1801570088 * get_hlp_1() const { return ___hlp_1; }
	inline NodeHelper_t1801570088 ** get_address_of_hlp_1() { return &___hlp_1; }
	inline void set_hlp_1(NodeHelper_t1801570088 * value)
	{
		___hlp_1 = value;
		Il2CppCodeGenWriteBarrier(&___hlp_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
