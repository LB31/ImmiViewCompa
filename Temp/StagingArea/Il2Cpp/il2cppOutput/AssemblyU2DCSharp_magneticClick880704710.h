#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// magneticClick
struct  magneticClick_t880704710  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 magneticClick::lastTiltVector
	Vector3_t2243707580  ___lastTiltVector_2;
	// System.Single magneticClick::tiltedBaseLine
	float ___tiltedBaseLine_3;
	// System.Single magneticClick::magnetBaseLine
	float ___magnetBaseLine_4;
	// System.Single magneticClick::tiltedMagn
	float ___tiltedMagn_5;
	// System.Single magneticClick::magnetMagn
	float ___magnetMagn_6;
	// System.Int32 magneticClick::N_SlowFIR
	int32_t ___N_SlowFIR_7;
	// System.Int32 magneticClick::N_FastFIR_magnet
	int32_t ___N_FastFIR_magnet_8;
	// System.Int32 magneticClick::N_FastFIR_tilted
	int32_t ___N_FastFIR_tilted_9;
	// System.Single magneticClick::threshold
	float ___threshold_10;
	// System.Boolean magneticClick::click
	bool ___click_11;
	// System.Boolean magneticClick::clickReported
	bool ___clickReported_12;

public:
	inline static int32_t get_offset_of_lastTiltVector_2() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___lastTiltVector_2)); }
	inline Vector3_t2243707580  get_lastTiltVector_2() const { return ___lastTiltVector_2; }
	inline Vector3_t2243707580 * get_address_of_lastTiltVector_2() { return &___lastTiltVector_2; }
	inline void set_lastTiltVector_2(Vector3_t2243707580  value)
	{
		___lastTiltVector_2 = value;
	}

	inline static int32_t get_offset_of_tiltedBaseLine_3() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___tiltedBaseLine_3)); }
	inline float get_tiltedBaseLine_3() const { return ___tiltedBaseLine_3; }
	inline float* get_address_of_tiltedBaseLine_3() { return &___tiltedBaseLine_3; }
	inline void set_tiltedBaseLine_3(float value)
	{
		___tiltedBaseLine_3 = value;
	}

	inline static int32_t get_offset_of_magnetBaseLine_4() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___magnetBaseLine_4)); }
	inline float get_magnetBaseLine_4() const { return ___magnetBaseLine_4; }
	inline float* get_address_of_magnetBaseLine_4() { return &___magnetBaseLine_4; }
	inline void set_magnetBaseLine_4(float value)
	{
		___magnetBaseLine_4 = value;
	}

	inline static int32_t get_offset_of_tiltedMagn_5() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___tiltedMagn_5)); }
	inline float get_tiltedMagn_5() const { return ___tiltedMagn_5; }
	inline float* get_address_of_tiltedMagn_5() { return &___tiltedMagn_5; }
	inline void set_tiltedMagn_5(float value)
	{
		___tiltedMagn_5 = value;
	}

	inline static int32_t get_offset_of_magnetMagn_6() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___magnetMagn_6)); }
	inline float get_magnetMagn_6() const { return ___magnetMagn_6; }
	inline float* get_address_of_magnetMagn_6() { return &___magnetMagn_6; }
	inline void set_magnetMagn_6(float value)
	{
		___magnetMagn_6 = value;
	}

	inline static int32_t get_offset_of_N_SlowFIR_7() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___N_SlowFIR_7)); }
	inline int32_t get_N_SlowFIR_7() const { return ___N_SlowFIR_7; }
	inline int32_t* get_address_of_N_SlowFIR_7() { return &___N_SlowFIR_7; }
	inline void set_N_SlowFIR_7(int32_t value)
	{
		___N_SlowFIR_7 = value;
	}

	inline static int32_t get_offset_of_N_FastFIR_magnet_8() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___N_FastFIR_magnet_8)); }
	inline int32_t get_N_FastFIR_magnet_8() const { return ___N_FastFIR_magnet_8; }
	inline int32_t* get_address_of_N_FastFIR_magnet_8() { return &___N_FastFIR_magnet_8; }
	inline void set_N_FastFIR_magnet_8(int32_t value)
	{
		___N_FastFIR_magnet_8 = value;
	}

	inline static int32_t get_offset_of_N_FastFIR_tilted_9() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___N_FastFIR_tilted_9)); }
	inline int32_t get_N_FastFIR_tilted_9() const { return ___N_FastFIR_tilted_9; }
	inline int32_t* get_address_of_N_FastFIR_tilted_9() { return &___N_FastFIR_tilted_9; }
	inline void set_N_FastFIR_tilted_9(int32_t value)
	{
		___N_FastFIR_tilted_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___threshold_10)); }
	inline float get_threshold_10() const { return ___threshold_10; }
	inline float* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(float value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_click_11() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___click_11)); }
	inline bool get_click_11() const { return ___click_11; }
	inline bool* get_address_of_click_11() { return &___click_11; }
	inline void set_click_11(bool value)
	{
		___click_11 = value;
	}

	inline static int32_t get_offset_of_clickReported_12() { return static_cast<int32_t>(offsetof(magneticClick_t880704710, ___clickReported_12)); }
	inline bool get_clickReported_12() const { return ___clickReported_12; }
	inline bool* get_address_of_clickReported_12() { return &___clickReported_12; }
	inline void set_clickReported_12(bool value)
	{
		___clickReported_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
