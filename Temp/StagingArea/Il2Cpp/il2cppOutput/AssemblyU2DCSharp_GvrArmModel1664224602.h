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
#include "AssemblyU2DCSharp_GvrArmModel_GazeBehavior712533048.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// GvrArmModel
struct GvrArmModel_t1664224602;
// GvrArmModel/OnArmModelUpdateEvent
struct OnArmModelUpdateEvent_t1199919348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrArmModel
struct  GvrArmModel_t1664224602  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 GvrArmModel::elbowOffset
	Vector3_t2243707580  ___elbowOffset_20;
	// UnityEngine.Vector3 GvrArmModel::torsoDirection
	Vector3_t2243707580  ___torsoDirection_21;
	// UnityEngine.Vector3 GvrArmModel::filteredVelocity
	Vector3_t2243707580  ___filteredVelocity_22;
	// UnityEngine.Vector3 GvrArmModel::filteredAccel
	Vector3_t2243707580  ___filteredAccel_23;
	// UnityEngine.Vector3 GvrArmModel::zeroAccel
	Vector3_t2243707580  ___zeroAccel_24;
	// System.Boolean GvrArmModel::firstUpdate
	bool ___firstUpdate_25;
	// UnityEngine.Vector3 GvrArmModel::handedMultiplier
	Vector3_t2243707580  ___handedMultiplier_26;
	// System.Single GvrArmModel::addedElbowHeight
	float ___addedElbowHeight_27;
	// System.Single GvrArmModel::addedElbowDepth
	float ___addedElbowDepth_28;
	// System.Single GvrArmModel::pointerTiltAngle
	float ___pointerTiltAngle_29;
	// System.Single GvrArmModel::fadeDistanceFromFace
	float ___fadeDistanceFromFace_30;
	// System.Single GvrArmModel::tooltipMinDistanceFromFace
	float ___tooltipMinDistanceFromFace_31;
	// System.Int32 GvrArmModel::tooltipMaxAngleFromCamera
	int32_t ___tooltipMaxAngleFromCamera_32;
	// GvrArmModel/GazeBehavior GvrArmModel::followGaze
	int32_t ___followGaze_33;
	// System.Boolean GvrArmModel::useAccelerometer
	bool ___useAccelerometer_34;
	// UnityEngine.Vector3 GvrArmModel::<pointerPosition>k__BackingField
	Vector3_t2243707580  ___U3CpointerPositionU3Ek__BackingField_35;
	// UnityEngine.Quaternion GvrArmModel::<pointerRotation>k__BackingField
	Quaternion_t4030073918  ___U3CpointerRotationU3Ek__BackingField_36;
	// UnityEngine.Vector3 GvrArmModel::<wristPosition>k__BackingField
	Vector3_t2243707580  ___U3CwristPositionU3Ek__BackingField_37;
	// UnityEngine.Quaternion GvrArmModel::<wristRotation>k__BackingField
	Quaternion_t4030073918  ___U3CwristRotationU3Ek__BackingField_38;
	// UnityEngine.Vector3 GvrArmModel::<elbowPosition>k__BackingField
	Vector3_t2243707580  ___U3CelbowPositionU3Ek__BackingField_39;
	// UnityEngine.Quaternion GvrArmModel::<elbowRotation>k__BackingField
	Quaternion_t4030073918  ___U3CelbowRotationU3Ek__BackingField_40;
	// UnityEngine.Vector3 GvrArmModel::<shoulderPosition>k__BackingField
	Vector3_t2243707580  ___U3CshoulderPositionU3Ek__BackingField_41;
	// UnityEngine.Quaternion GvrArmModel::<shoulderRotation>k__BackingField
	Quaternion_t4030073918  ___U3CshoulderRotationU3Ek__BackingField_42;
	// System.Single GvrArmModel::<preferredAlpha>k__BackingField
	float ___U3CpreferredAlphaU3Ek__BackingField_43;
	// System.Single GvrArmModel::<tooltipAlphaValue>k__BackingField
	float ___U3CtooltipAlphaValueU3Ek__BackingField_44;
	// GvrArmModel/OnArmModelUpdateEvent GvrArmModel::OnArmModelUpdate
	OnArmModelUpdateEvent_t1199919348 * ___OnArmModelUpdate_45;

public:
	inline static int32_t get_offset_of_elbowOffset_20() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___elbowOffset_20)); }
	inline Vector3_t2243707580  get_elbowOffset_20() const { return ___elbowOffset_20; }
	inline Vector3_t2243707580 * get_address_of_elbowOffset_20() { return &___elbowOffset_20; }
	inline void set_elbowOffset_20(Vector3_t2243707580  value)
	{
		___elbowOffset_20 = value;
	}

	inline static int32_t get_offset_of_torsoDirection_21() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___torsoDirection_21)); }
	inline Vector3_t2243707580  get_torsoDirection_21() const { return ___torsoDirection_21; }
	inline Vector3_t2243707580 * get_address_of_torsoDirection_21() { return &___torsoDirection_21; }
	inline void set_torsoDirection_21(Vector3_t2243707580  value)
	{
		___torsoDirection_21 = value;
	}

	inline static int32_t get_offset_of_filteredVelocity_22() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___filteredVelocity_22)); }
	inline Vector3_t2243707580  get_filteredVelocity_22() const { return ___filteredVelocity_22; }
	inline Vector3_t2243707580 * get_address_of_filteredVelocity_22() { return &___filteredVelocity_22; }
	inline void set_filteredVelocity_22(Vector3_t2243707580  value)
	{
		___filteredVelocity_22 = value;
	}

	inline static int32_t get_offset_of_filteredAccel_23() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___filteredAccel_23)); }
	inline Vector3_t2243707580  get_filteredAccel_23() const { return ___filteredAccel_23; }
	inline Vector3_t2243707580 * get_address_of_filteredAccel_23() { return &___filteredAccel_23; }
	inline void set_filteredAccel_23(Vector3_t2243707580  value)
	{
		___filteredAccel_23 = value;
	}

	inline static int32_t get_offset_of_zeroAccel_24() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___zeroAccel_24)); }
	inline Vector3_t2243707580  get_zeroAccel_24() const { return ___zeroAccel_24; }
	inline Vector3_t2243707580 * get_address_of_zeroAccel_24() { return &___zeroAccel_24; }
	inline void set_zeroAccel_24(Vector3_t2243707580  value)
	{
		___zeroAccel_24 = value;
	}

	inline static int32_t get_offset_of_firstUpdate_25() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___firstUpdate_25)); }
	inline bool get_firstUpdate_25() const { return ___firstUpdate_25; }
	inline bool* get_address_of_firstUpdate_25() { return &___firstUpdate_25; }
	inline void set_firstUpdate_25(bool value)
	{
		___firstUpdate_25 = value;
	}

	inline static int32_t get_offset_of_handedMultiplier_26() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___handedMultiplier_26)); }
	inline Vector3_t2243707580  get_handedMultiplier_26() const { return ___handedMultiplier_26; }
	inline Vector3_t2243707580 * get_address_of_handedMultiplier_26() { return &___handedMultiplier_26; }
	inline void set_handedMultiplier_26(Vector3_t2243707580  value)
	{
		___handedMultiplier_26 = value;
	}

	inline static int32_t get_offset_of_addedElbowHeight_27() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___addedElbowHeight_27)); }
	inline float get_addedElbowHeight_27() const { return ___addedElbowHeight_27; }
	inline float* get_address_of_addedElbowHeight_27() { return &___addedElbowHeight_27; }
	inline void set_addedElbowHeight_27(float value)
	{
		___addedElbowHeight_27 = value;
	}

	inline static int32_t get_offset_of_addedElbowDepth_28() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___addedElbowDepth_28)); }
	inline float get_addedElbowDepth_28() const { return ___addedElbowDepth_28; }
	inline float* get_address_of_addedElbowDepth_28() { return &___addedElbowDepth_28; }
	inline void set_addedElbowDepth_28(float value)
	{
		___addedElbowDepth_28 = value;
	}

	inline static int32_t get_offset_of_pointerTiltAngle_29() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___pointerTiltAngle_29)); }
	inline float get_pointerTiltAngle_29() const { return ___pointerTiltAngle_29; }
	inline float* get_address_of_pointerTiltAngle_29() { return &___pointerTiltAngle_29; }
	inline void set_pointerTiltAngle_29(float value)
	{
		___pointerTiltAngle_29 = value;
	}

	inline static int32_t get_offset_of_fadeDistanceFromFace_30() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___fadeDistanceFromFace_30)); }
	inline float get_fadeDistanceFromFace_30() const { return ___fadeDistanceFromFace_30; }
	inline float* get_address_of_fadeDistanceFromFace_30() { return &___fadeDistanceFromFace_30; }
	inline void set_fadeDistanceFromFace_30(float value)
	{
		___fadeDistanceFromFace_30 = value;
	}

	inline static int32_t get_offset_of_tooltipMinDistanceFromFace_31() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___tooltipMinDistanceFromFace_31)); }
	inline float get_tooltipMinDistanceFromFace_31() const { return ___tooltipMinDistanceFromFace_31; }
	inline float* get_address_of_tooltipMinDistanceFromFace_31() { return &___tooltipMinDistanceFromFace_31; }
	inline void set_tooltipMinDistanceFromFace_31(float value)
	{
		___tooltipMinDistanceFromFace_31 = value;
	}

	inline static int32_t get_offset_of_tooltipMaxAngleFromCamera_32() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___tooltipMaxAngleFromCamera_32)); }
	inline int32_t get_tooltipMaxAngleFromCamera_32() const { return ___tooltipMaxAngleFromCamera_32; }
	inline int32_t* get_address_of_tooltipMaxAngleFromCamera_32() { return &___tooltipMaxAngleFromCamera_32; }
	inline void set_tooltipMaxAngleFromCamera_32(int32_t value)
	{
		___tooltipMaxAngleFromCamera_32 = value;
	}

	inline static int32_t get_offset_of_followGaze_33() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___followGaze_33)); }
	inline int32_t get_followGaze_33() const { return ___followGaze_33; }
	inline int32_t* get_address_of_followGaze_33() { return &___followGaze_33; }
	inline void set_followGaze_33(int32_t value)
	{
		___followGaze_33 = value;
	}

	inline static int32_t get_offset_of_useAccelerometer_34() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___useAccelerometer_34)); }
	inline bool get_useAccelerometer_34() const { return ___useAccelerometer_34; }
	inline bool* get_address_of_useAccelerometer_34() { return &___useAccelerometer_34; }
	inline void set_useAccelerometer_34(bool value)
	{
		___useAccelerometer_34 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPositionU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CpointerPositionU3Ek__BackingField_35)); }
	inline Vector3_t2243707580  get_U3CpointerPositionU3Ek__BackingField_35() const { return ___U3CpointerPositionU3Ek__BackingField_35; }
	inline Vector3_t2243707580 * get_address_of_U3CpointerPositionU3Ek__BackingField_35() { return &___U3CpointerPositionU3Ek__BackingField_35; }
	inline void set_U3CpointerPositionU3Ek__BackingField_35(Vector3_t2243707580  value)
	{
		___U3CpointerPositionU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CpointerRotationU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CpointerRotationU3Ek__BackingField_36)); }
	inline Quaternion_t4030073918  get_U3CpointerRotationU3Ek__BackingField_36() const { return ___U3CpointerRotationU3Ek__BackingField_36; }
	inline Quaternion_t4030073918 * get_address_of_U3CpointerRotationU3Ek__BackingField_36() { return &___U3CpointerRotationU3Ek__BackingField_36; }
	inline void set_U3CpointerRotationU3Ek__BackingField_36(Quaternion_t4030073918  value)
	{
		___U3CpointerRotationU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CwristPositionU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CwristPositionU3Ek__BackingField_37)); }
	inline Vector3_t2243707580  get_U3CwristPositionU3Ek__BackingField_37() const { return ___U3CwristPositionU3Ek__BackingField_37; }
	inline Vector3_t2243707580 * get_address_of_U3CwristPositionU3Ek__BackingField_37() { return &___U3CwristPositionU3Ek__BackingField_37; }
	inline void set_U3CwristPositionU3Ek__BackingField_37(Vector3_t2243707580  value)
	{
		___U3CwristPositionU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CwristRotationU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CwristRotationU3Ek__BackingField_38)); }
	inline Quaternion_t4030073918  get_U3CwristRotationU3Ek__BackingField_38() const { return ___U3CwristRotationU3Ek__BackingField_38; }
	inline Quaternion_t4030073918 * get_address_of_U3CwristRotationU3Ek__BackingField_38() { return &___U3CwristRotationU3Ek__BackingField_38; }
	inline void set_U3CwristRotationU3Ek__BackingField_38(Quaternion_t4030073918  value)
	{
		___U3CwristRotationU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CelbowPositionU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CelbowPositionU3Ek__BackingField_39)); }
	inline Vector3_t2243707580  get_U3CelbowPositionU3Ek__BackingField_39() const { return ___U3CelbowPositionU3Ek__BackingField_39; }
	inline Vector3_t2243707580 * get_address_of_U3CelbowPositionU3Ek__BackingField_39() { return &___U3CelbowPositionU3Ek__BackingField_39; }
	inline void set_U3CelbowPositionU3Ek__BackingField_39(Vector3_t2243707580  value)
	{
		___U3CelbowPositionU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CelbowRotationU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CelbowRotationU3Ek__BackingField_40)); }
	inline Quaternion_t4030073918  get_U3CelbowRotationU3Ek__BackingField_40() const { return ___U3CelbowRotationU3Ek__BackingField_40; }
	inline Quaternion_t4030073918 * get_address_of_U3CelbowRotationU3Ek__BackingField_40() { return &___U3CelbowRotationU3Ek__BackingField_40; }
	inline void set_U3CelbowRotationU3Ek__BackingField_40(Quaternion_t4030073918  value)
	{
		___U3CelbowRotationU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CshoulderPositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CshoulderPositionU3Ek__BackingField_41)); }
	inline Vector3_t2243707580  get_U3CshoulderPositionU3Ek__BackingField_41() const { return ___U3CshoulderPositionU3Ek__BackingField_41; }
	inline Vector3_t2243707580 * get_address_of_U3CshoulderPositionU3Ek__BackingField_41() { return &___U3CshoulderPositionU3Ek__BackingField_41; }
	inline void set_U3CshoulderPositionU3Ek__BackingField_41(Vector3_t2243707580  value)
	{
		___U3CshoulderPositionU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CshoulderRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CshoulderRotationU3Ek__BackingField_42)); }
	inline Quaternion_t4030073918  get_U3CshoulderRotationU3Ek__BackingField_42() const { return ___U3CshoulderRotationU3Ek__BackingField_42; }
	inline Quaternion_t4030073918 * get_address_of_U3CshoulderRotationU3Ek__BackingField_42() { return &___U3CshoulderRotationU3Ek__BackingField_42; }
	inline void set_U3CshoulderRotationU3Ek__BackingField_42(Quaternion_t4030073918  value)
	{
		___U3CshoulderRotationU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CpreferredAlphaU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CpreferredAlphaU3Ek__BackingField_43)); }
	inline float get_U3CpreferredAlphaU3Ek__BackingField_43() const { return ___U3CpreferredAlphaU3Ek__BackingField_43; }
	inline float* get_address_of_U3CpreferredAlphaU3Ek__BackingField_43() { return &___U3CpreferredAlphaU3Ek__BackingField_43; }
	inline void set_U3CpreferredAlphaU3Ek__BackingField_43(float value)
	{
		___U3CpreferredAlphaU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_U3CtooltipAlphaValueU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___U3CtooltipAlphaValueU3Ek__BackingField_44)); }
	inline float get_U3CtooltipAlphaValueU3Ek__BackingField_44() const { return ___U3CtooltipAlphaValueU3Ek__BackingField_44; }
	inline float* get_address_of_U3CtooltipAlphaValueU3Ek__BackingField_44() { return &___U3CtooltipAlphaValueU3Ek__BackingField_44; }
	inline void set_U3CtooltipAlphaValueU3Ek__BackingField_44(float value)
	{
		___U3CtooltipAlphaValueU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_OnArmModelUpdate_45() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602, ___OnArmModelUpdate_45)); }
	inline OnArmModelUpdateEvent_t1199919348 * get_OnArmModelUpdate_45() const { return ___OnArmModelUpdate_45; }
	inline OnArmModelUpdateEvent_t1199919348 ** get_address_of_OnArmModelUpdate_45() { return &___OnArmModelUpdate_45; }
	inline void set_OnArmModelUpdate_45(OnArmModelUpdateEvent_t1199919348 * value)
	{
		___OnArmModelUpdate_45 = value;
		Il2CppCodeGenWriteBarrier(&___OnArmModelUpdate_45, value);
	}
};

struct GvrArmModel_t1664224602_StaticFields
{
public:
	// GvrArmModel GvrArmModel::instance
	GvrArmModel_t1664224602 * ___instance_2;
	// UnityEngine.Vector3 GvrArmModel::DEFAULT_SHOULDER_RIGHT
	Vector3_t2243707580  ___DEFAULT_SHOULDER_RIGHT_3;
	// UnityEngine.Vector3 GvrArmModel::ELBOW_MIN_RANGE
	Vector3_t2243707580  ___ELBOW_MIN_RANGE_4;
	// UnityEngine.Vector3 GvrArmModel::ELBOW_MAX_RANGE
	Vector3_t2243707580  ___ELBOW_MAX_RANGE_5;
	// UnityEngine.Vector3 GvrArmModel::POINTER_OFFSET
	Vector3_t2243707580  ___POINTER_OFFSET_6;
	// UnityEngine.Vector3 GvrArmModel::ELBOW_POSITION
	Vector3_t2243707580  ___ELBOW_POSITION_7;
	// UnityEngine.Vector3 GvrArmModel::WRIST_POSITION
	Vector3_t2243707580  ___WRIST_POSITION_8;
	// UnityEngine.Vector3 GvrArmModel::ARM_EXTENSION_OFFSET
	Vector3_t2243707580  ___ARM_EXTENSION_OFFSET_9;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___instance_2)); }
	inline GvrArmModel_t1664224602 * get_instance_2() const { return ___instance_2; }
	inline GvrArmModel_t1664224602 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GvrArmModel_t1664224602 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_DEFAULT_SHOULDER_RIGHT_3() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___DEFAULT_SHOULDER_RIGHT_3)); }
	inline Vector3_t2243707580  get_DEFAULT_SHOULDER_RIGHT_3() const { return ___DEFAULT_SHOULDER_RIGHT_3; }
	inline Vector3_t2243707580 * get_address_of_DEFAULT_SHOULDER_RIGHT_3() { return &___DEFAULT_SHOULDER_RIGHT_3; }
	inline void set_DEFAULT_SHOULDER_RIGHT_3(Vector3_t2243707580  value)
	{
		___DEFAULT_SHOULDER_RIGHT_3 = value;
	}

	inline static int32_t get_offset_of_ELBOW_MIN_RANGE_4() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___ELBOW_MIN_RANGE_4)); }
	inline Vector3_t2243707580  get_ELBOW_MIN_RANGE_4() const { return ___ELBOW_MIN_RANGE_4; }
	inline Vector3_t2243707580 * get_address_of_ELBOW_MIN_RANGE_4() { return &___ELBOW_MIN_RANGE_4; }
	inline void set_ELBOW_MIN_RANGE_4(Vector3_t2243707580  value)
	{
		___ELBOW_MIN_RANGE_4 = value;
	}

	inline static int32_t get_offset_of_ELBOW_MAX_RANGE_5() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___ELBOW_MAX_RANGE_5)); }
	inline Vector3_t2243707580  get_ELBOW_MAX_RANGE_5() const { return ___ELBOW_MAX_RANGE_5; }
	inline Vector3_t2243707580 * get_address_of_ELBOW_MAX_RANGE_5() { return &___ELBOW_MAX_RANGE_5; }
	inline void set_ELBOW_MAX_RANGE_5(Vector3_t2243707580  value)
	{
		___ELBOW_MAX_RANGE_5 = value;
	}

	inline static int32_t get_offset_of_POINTER_OFFSET_6() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___POINTER_OFFSET_6)); }
	inline Vector3_t2243707580  get_POINTER_OFFSET_6() const { return ___POINTER_OFFSET_6; }
	inline Vector3_t2243707580 * get_address_of_POINTER_OFFSET_6() { return &___POINTER_OFFSET_6; }
	inline void set_POINTER_OFFSET_6(Vector3_t2243707580  value)
	{
		___POINTER_OFFSET_6 = value;
	}

	inline static int32_t get_offset_of_ELBOW_POSITION_7() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___ELBOW_POSITION_7)); }
	inline Vector3_t2243707580  get_ELBOW_POSITION_7() const { return ___ELBOW_POSITION_7; }
	inline Vector3_t2243707580 * get_address_of_ELBOW_POSITION_7() { return &___ELBOW_POSITION_7; }
	inline void set_ELBOW_POSITION_7(Vector3_t2243707580  value)
	{
		___ELBOW_POSITION_7 = value;
	}

	inline static int32_t get_offset_of_WRIST_POSITION_8() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___WRIST_POSITION_8)); }
	inline Vector3_t2243707580  get_WRIST_POSITION_8() const { return ___WRIST_POSITION_8; }
	inline Vector3_t2243707580 * get_address_of_WRIST_POSITION_8() { return &___WRIST_POSITION_8; }
	inline void set_WRIST_POSITION_8(Vector3_t2243707580  value)
	{
		___WRIST_POSITION_8 = value;
	}

	inline static int32_t get_offset_of_ARM_EXTENSION_OFFSET_9() { return static_cast<int32_t>(offsetof(GvrArmModel_t1664224602_StaticFields, ___ARM_EXTENSION_OFFSET_9)); }
	inline Vector3_t2243707580  get_ARM_EXTENSION_OFFSET_9() const { return ___ARM_EXTENSION_OFFSET_9; }
	inline Vector3_t2243707580 * get_address_of_ARM_EXTENSION_OFFSET_9() { return &___ARM_EXTENSION_OFFSET_9; }
	inline void set_ARM_EXTENSION_OFFSET_9(Vector3_t2243707580  value)
	{
		___ARM_EXTENSION_OFFSET_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
