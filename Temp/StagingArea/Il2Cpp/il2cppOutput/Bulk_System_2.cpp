#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_System_UriHostNameType2148127109.h"
#include "System_System_UriKind1128731744.h"
#include "System_System_UriParser1012511323.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "System_System_Uri19570940.h"
#include "System_System_UriFormatException3682083048.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_System_DefaultUriParser1591960796.h"
#include "System_System_GenericUriParser2599285286.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "System_System_UriPartial112107391.h"
#include "System_System_UriTypeConverter3912970448.h"

// System.UriParser
struct UriParser_t1012511323;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.UriFormatException
struct UriFormatException_t3682083048;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.DefaultUriParser
struct DefaultUriParser_t1591960796;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppClass* UriParser_t1012511323_il2cpp_TypeInfo_var;
extern Il2CppClass* Regex_t1803876613_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral704347881;
extern Il2CppCodeGenString* _stringLiteral1509538344;
extern const uint32_t UriParser__cctor_m1839415991_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* UriFormatException_t3682083048_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029320;
extern Il2CppCodeGenString* _stringLiteral1096536852;
extern const uint32_t UriParser_InitializeAndValidate_m251943319_MetadataUsageId;
extern Il2CppClass* Hashtable_t909839986_il2cpp_TypeInfo_var;
extern Il2CppClass* DefaultUriParser_t1591960796_il2cpp_TypeInfo_var;
extern Il2CppClass* Uri_t19570940_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral150430653;
extern const uint32_t UriParser_CreateDefaults_m295980432_MetadataUsageId;
extern Il2CppClass* GenericUriParser_t2599285286_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_InternalRegister_m416643159_MetadataUsageId;
extern Il2CppClass* CultureInfo_t3500843524_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_GetParser_m1453767844_MetadataUsageId;




// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C"  void Regex__ctor_m1229307206 (Regex_t1803876613 * __this, String_t* ___pattern0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m55908894 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::.ctor(System.String)
extern "C"  void UriFormatException__ctor_m3352702581 (UriFormatException_t3682083048 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1884964176 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DefaultUriParser::.ctor()
extern "C"  void DefaultUriParser__ctor_m4218024811 (DefaultUriParser_t1591960796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C"  void UriParser_InternalRegister_m416643159 (Il2CppObject * __this /* static, unused */, Hashtable_t909839986 * ___table0, UriParser_t1012511323 * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2136705809 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m2677760297 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m3624672465 (UriParser_t1012511323 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1159216960 (UriParser_t1012511323 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C"  void UriParser_CreateDefaults_m295980432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_InvariantCulture_m398972276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C"  String_t* String_ToLower_m743194025 (String_t* __this, CultureInfo_t3500843524 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m1282308392 (UriParser_t1012511323 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern "C"  void UriParser__cctor_m1839415991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser__cctor_m1839415991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = (Il2CppObject *)il2cpp_codegen_object_new(Il2CppObject_il2cpp_TypeInfo_var);
		Object__ctor_m2551263788(L_0, /*hidden argument*/NULL);
		((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->set_lock_object_0(L_0);
		Regex_t1803876613 * L_1 = (Regex_t1803876613 *)il2cpp_codegen_object_new(Regex_t1803876613_il2cpp_TypeInfo_var);
		Regex__ctor_m1229307206(L_1, _stringLiteral704347881, /*hidden argument*/NULL);
		((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->set_uri_regex_4(L_1);
		Regex_t1803876613 * L_2 = (Regex_t1803876613 *)il2cpp_codegen_object_new(Regex_t1803876613_il2cpp_TypeInfo_var);
		Regex__ctor_m1229307206(L_2, _stringLiteral1509538344, /*hidden argument*/NULL);
		((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->set_auth_regex_5(L_2);
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C"  void UriParser_InitializeAndValidate_m251943319 (UriParser_t1012511323 * __this, Uri_t19570940 * ___uri0, UriFormatException_t3682083048 ** ___parsingError1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InitializeAndValidate_m251943319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t19570940 * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m55908894(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_4, _stringLiteral372029320, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t3682083048 ** L_6 = ___parsingError1;
		UriFormatException_t3682083048 * L_7 = (UriFormatException_t3682083048 *)il2cpp_codegen_object_new(UriFormatException_t3682083048_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3352702581(L_7, _stringLiteral1096536852, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_6)) = (Il2CppObject *)L_7;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_6), (Il2CppObject *)L_7);
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t3682083048 ** L_8 = ___parsingError1;
		*((Il2CppObject **)(L_8)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_8), (Il2CppObject *)NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m4010407891 (UriParser_t1012511323 * __this, String_t* ___schemeName0, int32_t ___defaultPort1, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m3624672465 (UriParser_t1012511323 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_scheme_name_2(L_0);
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m1377931533 (UriParser_t1012511323 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_default_port_3();
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1159216960 (UriParser_t1012511323 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_default_port_3(L_0);
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern "C"  void UriParser_CreateDefaults_m295980432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_CreateDefaults_m295980432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t909839986 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1012511323_il2cpp_TypeInfo_var);
		Hashtable_t909839986 * L_0 = ((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t909839986 * L_1 = (Hashtable_t909839986 *)il2cpp_codegen_object_new(Hashtable_t909839986_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1884964176(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t909839986 * L_2 = V_0;
		DefaultUriParser_t1591960796 * L_3 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t19570940_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1012511323_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_5 = V_0;
		DefaultUriParser_t1591960796 * L_6 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFtp_22();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_8 = V_0;
		DefaultUriParser_t1591960796 * L_9 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeGopher_23();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_11 = V_0;
		DefaultUriParser_t1591960796 * L_12 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttp_24();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_14 = V_0;
		DefaultUriParser_t1591960796 * L_15 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttps_25();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_17 = V_0;
		DefaultUriParser_t1591960796 * L_18 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_20 = V_0;
		DefaultUriParser_t1591960796 * L_21 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetPipe_29();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_23 = V_0;
		DefaultUriParser_t1591960796 * L_24 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetTcp_30();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_26 = V_0;
		DefaultUriParser_t1591960796 * L_27 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_29 = V_0;
		DefaultUriParser_t1591960796 * L_30 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t19570940_StaticFields*)Uri_t19570940_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNntp_28();
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t909839986 * L_32 = V_0;
		DefaultUriParser_t1591960796 * L_33 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m416643159(NULL /*static, unused*/, L_32, L_33, _stringLiteral150430653, ((int32_t)389), /*hidden argument*/NULL);
		Il2CppObject * L_34 = ((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->get_lock_object_0();
		V_1 = L_34;
		Il2CppObject * L_35 = V_1;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1012511323_il2cpp_TypeInfo_var);
			Hashtable_t909839986 * L_36 = ((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->get_table_1();
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t909839986 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1012511323_il2cpp_TypeInfo_var);
			((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->set_table_1(L_37);
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t909839986 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Il2CppObject * L_38 = V_1;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C"  void UriParser_InternalRegister_m416643159 (Il2CppObject * __this /* static, unused */, Hashtable_t909839986 * ___table0, UriParser_t1012511323 * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InternalRegister_m416643159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultUriParser_t1591960796 * V_0 = NULL;
	{
		UriParser_t1012511323 * L_0 = ___uriParser1;
		String_t* L_1 = ___schemeName2;
		NullCheck(L_0);
		UriParser_set_SchemeName_m3624672465(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t1012511323 * L_2 = ___uriParser1;
		int32_t L_3 = ___defaultPort3;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m1159216960(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t1012511323 * L_4 = ___uriParser1;
		if (!((GenericUriParser_t2599285286 *)IsInstClass(L_4, GenericUriParser_t2599285286_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t909839986 * L_5 = ___table0;
		String_t* L_6 = ___schemeName2;
		UriParser_t1012511323 * L_7 = ___uriParser1;
		NullCheck(L_5);
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t1591960796 * L_8 = (DefaultUriParser_t1591960796 *)il2cpp_codegen_object_new(DefaultUriParser_t1591960796_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m4218024811(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t1591960796 * L_9 = V_0;
		String_t* L_10 = ___schemeName2;
		NullCheck(L_9);
		UriParser_set_SchemeName_m3624672465(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t1591960796 * L_11 = V_0;
		int32_t L_12 = ___defaultPort3;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m1159216960(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t909839986 * L_13 = ___table0;
		String_t* L_14 = ___schemeName2;
		DefaultUriParser_t1591960796 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1012511323 * L_16 = ___uriParser1;
		String_t* L_17 = ___schemeName2;
		int32_t L_18 = ___defaultPort3;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern "C"  UriParser_t1012511323 * UriParser_GetParser_m1453767844 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetParser_m1453767844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___schemeName0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1012511323 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1012511323_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m295980432(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_2 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m743194025(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t909839986 * L_4 = ((UriParser_t1012511323_StaticFields*)UriParser_t1012511323_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Il2CppObject * L_6 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t1012511323 *)CastclassClass(L_6, UriParser_t1012511323_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
