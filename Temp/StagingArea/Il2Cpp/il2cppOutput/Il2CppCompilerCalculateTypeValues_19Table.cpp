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
#include "AssemblyU2DCSharp_GVR_Input_TouchPadEvent1647781410.h"
#include "AssemblyU2DCSharp_GVR_Input_TransformEvent206501054.h"
#include "AssemblyU2DCSharp_GVR_Input_GameObjectEvent3653055841.h"
#include "AssemblyU2DCSharp_MenuHandler3829619697.h"
#include "AssemblyU2DCSharp_MenuHandler_U3CDoAppearU3Ec__Ite3667605745.h"
#include "AssemblyU2DCSharp_MenuHandler_U3CDoFadeU3Ec__Itera3187801445.h"
#include "AssemblyU2DCSharp_GVR_Events_PositionSwapper2793617445.h"
#include "AssemblyU2DCSharp_ScrubberEvents2429506345.h"
#include "AssemblyU2DCSharp_SwitchVideos3516593024.h"
#include "AssemblyU2DCSharp_SwitchVideos_U3CSetActiveDelayedU531920552.h"
#include "AssemblyU2DCSharp_GVR_Events_ToggleAction2865238344.h"
#include "AssemblyU2DCSharp_VideoControlsManager3010523296.h"
#include "AssemblyU2DCSharp_VideoControlsManager_U3CDoAppear2331568912.h"
#include "AssemblyU2DCSharp_VideoControlsManager_U3CDoFadeU34193299950.h"
#include "AssemblyU2DCSharp_VideoPlayerReference1150574547.h"
#include "AssemblyU2DCSharp_GvrHead3923315805.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate1289521902.h"
#include "AssemblyU2DCSharp_GvrCameraUtils3683962711.h"
#include "AssemblyU2DCSharp_GvrEye3930157106.h"
#include "AssemblyU2DCSharp_GvrProfile2070273202.h"
#include "AssemblyU2DCSharp_GvrProfile_Screen839756045.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses2112994543.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV1743211906.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"
#include "AssemblyU2DCSharp_GvrProfile_Viewer1642017539.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes2720173411.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes2891453798.h"
#include "AssemblyU2DCSharp_StereoController3144380552.h"
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU33626315335.h"
#include "AssemblyU2DCSharp_StereoRenderEffect958489249.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseAndroidDevice1263753648.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice4004462063.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice635821333.h"
#include "AssemblyU2DCSharp_Gvr_Internal_UnityVRDevice2569769461.h"
#include "AssemblyU2DCSharp_GvrGaze2249568644.h"
#include "AssemblyU2DCSharp_GvrReticle1834592217.h"
#include "AssemblyU2DCSharp_GvrAudio2627885619.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2125366261.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerData1929858338.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerType3348390394.h"
#include "AssemblyU2DCSharp_GvrAudio_RoomProperties2834448096.h"
#include "AssemblyU2DCSharp_GvrAudioListener1521766837.h"
#include "AssemblyU2DCSharp_GvrAudioRoom1253442178.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3590751945.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1301118448.h"
#include "AssemblyU2DCSharp_GvrAudioSource2307460312.h"
#include "AssemblyU2DCSharp_GvrArmModel1664224602.h"
#include "AssemblyU2DCSharp_GvrArmModel_GazeBehavior712533048.h"
#include "AssemblyU2DCSharp_GvrArmModel_OnArmModelUpdateEven1199919348.h"
#include "AssemblyU2DCSharp_GvrArmModelOffsets2241056642.h"
#include "AssemblyU2DCSharp_GvrArmModelOffsets_Joint3302496419.h"
#include "AssemblyU2DCSharp_GvrBatteryIndicator1573734297.h"
#include "AssemblyU2DCSharp_GvrConnectionState1596129842.h"
#include "AssemblyU2DCSharp_GvrControllerApiStatus66586029.h"
#include "AssemblyU2DCSharp_GvrControllerBatteryLevel1673126176.h"
#include "AssemblyU2DCSharp_GvrController1602869021.h"
#include "AssemblyU2DCSharp_GvrController_OnControllerUpdate1438436294.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnection1823409010.h"
#include "AssemblyU2DCSharp_GvrController_U3CEndOfFrameU3Ec_1945048840.h"
#include "AssemblyU2DCSharp_GvrControllerVisual3328916665.h"
#include "AssemblyU2DCSharp_GvrControllerVisualManager1857939020.h"
#include "AssemblyU2DCSharp_GvrPointerManager2205699129.h"
#include "AssemblyU2DCSharp_GvrRecenterOnlyController2745329441.h"
#include "AssemblyU2DCSharp_GvrTooltip801170144.h"
#include "AssemblyU2DCSharp_GvrTooltip_Location3759394206.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerProviderF2872005551.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeContro1389606029.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeControl533280391.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeContro1198686513.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeContro1198686514.h"
#include "AssemblyU2DCSharp_Gvr_Internal_DummyControllerProvi462852303.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorControllerP4051553744.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerState1971591097.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2001911543.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig616150261.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode1624619217.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A936529327.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent4043921137.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager3364249716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1804908545.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1967739812.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT4143287487.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnOr602701282.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnBu358370788.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C4253624923.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent3882078222.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types3648109718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1262104803.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (TouchPadEvent_t1647781410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (TransformEvent_t206501054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (GameObjectEvent_t3653055841), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (MenuHandler_t3829619697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[1] = 
{
	MenuHandler_t3829619697::get_offset_of_menuObjects_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (U3CDoAppearU3Ec__Iterator0_t3667605745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[5] = 
{
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U3CcgU3E__0_0(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24this_1(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24current_2(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24disposing_3(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (U3CDoFadeU3Ec__Iterator1_t3187801445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[5] = 
{
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U3CcgU3E__0_0(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24this_1(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24current_2(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24disposing_3(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (PositionSwapper_t2793617445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[2] = 
{
	PositionSwapper_t2793617445::get_offset_of_currentIndex_2(),
	PositionSwapper_t2793617445::get_offset_of_Positions_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (ScrubberEvents_t2429506345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[5] = 
{
	ScrubberEvents_t2429506345::get_offset_of_newPositionHandle_2(),
	ScrubberEvents_t2429506345::get_offset_of_corners_3(),
	ScrubberEvents_t2429506345::get_offset_of_slider_4(),
	ScrubberEvents_t2429506345::get_offset_of_mgr_5(),
	ScrubberEvents_t2429506345::get_offset_of_inp_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (SwitchVideos_t3516593024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[5] = 
{
	SwitchVideos_t3516593024::get_offset_of_localVideoSample_2(),
	SwitchVideos_t3516593024::get_offset_of_dashVideoSample_3(),
	SwitchVideos_t3516593024::get_offset_of_panoVideoSample_4(),
	SwitchVideos_t3516593024::get_offset_of_videoSamples_5(),
	SwitchVideos_t3516593024::get_offset_of_missingLibText_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (U3CSetActiveDelayedU3Ec__Iterator0_t531920552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[5] = 
{
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_go_0(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_state_1(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_U24current_2(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_U24disposing_3(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (ToggleAction_t2865238344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[7] = 
{
	ToggleAction_t2865238344::get_offset_of_lastUsage_2(),
	ToggleAction_t2865238344::get_offset_of_on_3(),
	ToggleAction_t2865238344::get_offset_of_OnToggleOn_4(),
	ToggleAction_t2865238344::get_offset_of_OnToggleOff_5(),
	ToggleAction_t2865238344::get_offset_of_InitialState_6(),
	ToggleAction_t2865238344::get_offset_of_RaiseEventForInitialState_7(),
	ToggleAction_t2865238344::get_offset_of_Cooldown_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (VideoControlsManager_t3010523296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[11] = 
{
	VideoControlsManager_t3010523296::get_offset_of_pauseSprite_2(),
	VideoControlsManager_t3010523296::get_offset_of_playSprite_3(),
	VideoControlsManager_t3010523296::get_offset_of_videoScrubber_4(),
	VideoControlsManager_t3010523296::get_offset_of_volumeSlider_5(),
	VideoControlsManager_t3010523296::get_offset_of_volumeWidget_6(),
	VideoControlsManager_t3010523296::get_offset_of_settingsPanel_7(),
	VideoControlsManager_t3010523296::get_offset_of_bufferedBackground_8(),
	VideoControlsManager_t3010523296::get_offset_of_basePosition_9(),
	VideoControlsManager_t3010523296::get_offset_of_videoPosition_10(),
	VideoControlsManager_t3010523296::get_offset_of_videoDuration_11(),
	VideoControlsManager_t3010523296::get_offset_of_U3CPlayerU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (U3CDoAppearU3Ec__Iterator0_t2331568912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[5] = 
{
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U3CcgU3E__0_0(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24this_1(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24current_2(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24disposing_3(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (U3CDoFadeU3Ec__Iterator1_t4193299950), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[5] = 
{
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U3CcgU3E__0_0(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24this_1(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24current_2(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24disposing_3(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (VideoPlayerReference_t1150574547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[1] = 
{
	VideoPlayerReference_t1150574547::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (GvrHead_t3923315805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[6] = 
{
	GvrHead_t3923315805::get_offset_of_trackRotation_2(),
	GvrHead_t3923315805::get_offset_of_trackPosition_3(),
	GvrHead_t3923315805::get_offset_of_target_4(),
	GvrHead_t3923315805::get_offset_of_updateEarly_5(),
	GvrHead_t3923315805::get_offset_of_OnHeadUpdated_6(),
	GvrHead_t3923315805::get_offset_of_updated_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (HeadUpdatedDelegate_t1289521902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (GvrCameraUtils_t3683962711), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (GvrEye_t3930157106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1918[8] = 
{
	GvrEye_t3930157106::get_offset_of_eye_2(),
	GvrEye_t3930157106::get_offset_of_toggleCullingMask_3(),
	GvrEye_t3930157106::get_offset_of_controller_4(),
	GvrEye_t3930157106::get_offset_of_stereoEffect_5(),
	GvrEye_t3930157106::get_offset_of_monoCamera_6(),
	GvrEye_t3930157106::get_offset_of_realProj_7(),
	GvrEye_t3930157106::get_offset_of_interpPosition_8(),
	GvrEye_t3930157106::get_offset_of_U3CcamU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (GvrProfile_t2070273202), -1, sizeof(GvrProfile_t2070273202_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1919[15] = 
{
	GvrProfile_t2070273202::get_offset_of_screen_0(),
	GvrProfile_t2070273202::get_offset_of_viewer_1(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus5_2(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus6_3(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyS6_4(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyNote4_5(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_LGG3_6(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone4_7(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone5_8(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6_9(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6p_10(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardJun2014_11(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardMay2015_12(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GoggleTechC1Glass_13(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Default_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (Screen_t839756045)+ sizeof (Il2CppObject), sizeof(Screen_t839756045 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1920[3] = 
{
	Screen_t839756045::get_offset_of_width_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_height_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_border_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (Lenses_t2112994543)+ sizeof (Il2CppObject), sizeof(Lenses_t2112994543 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1921[7] = 
{
	Lenses_t2112994543::get_offset_of_separation_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_offset_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_screenDistance_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_alignment_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (MaxFOV_t1743211906)+ sizeof (Il2CppObject), sizeof(MaxFOV_t1743211906 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1922[4] = 
{
	MaxFOV_t1743211906::get_offset_of_outer_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_inner_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_upper_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_lower_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (Distortion_t550060296)+ sizeof (Il2CppObject), sizeof(Distortion_t550060296_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1923[1] = 
{
	Distortion_t550060296::get_offset_of_coef_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (Viewer_t1642017539)+ sizeof (Il2CppObject), sizeof(Viewer_t1642017539_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1924[4] = 
{
	Viewer_t1642017539::get_offset_of_lenses_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_maxFOV_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_distortion_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_inverse_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (ScreenSizes_t2720173411)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1925[10] = 
{
	ScreenSizes_t2720173411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (ViewerTypes_t2891453798)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1926[4] = 
{
	ViewerTypes_t2891453798::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (StereoController_t3144380552), -1, sizeof(StereoController_t3144380552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1927[16] = 
{
	StereoController_t3144380552::get_offset_of_keepStereoUpdated_2(),
	StereoController_t3144380552::get_offset_of_stereoMultiplier_3(),
	StereoController_t3144380552::get_offset_of_matchMonoFOV_4(),
	StereoController_t3144380552::get_offset_of_matchByZoom_5(),
	StereoController_t3144380552::get_offset_of_centerOfInterest_6(),
	StereoController_t3144380552::get_offset_of_radiusOfInterest_7(),
	StereoController_t3144380552::get_offset_of_checkStereoComfort_8(),
	StereoController_t3144380552::get_offset_of_stereoAdjustSmoothing_9(),
	StereoController_t3144380552::get_offset_of_screenParallax_10(),
	StereoController_t3144380552::get_offset_of_stereoPaddingX_11(),
	StereoController_t3144380552::get_offset_of_stereoPaddingY_12(),
	StereoController_t3144380552::get_offset_of_renderedStereo_13(),
	StereoController_t3144380552::get_offset_of_eyes_14(),
	StereoController_t3144380552::get_offset_of_head_15(),
	StereoController_t3144380552::get_offset_of_U3CcamU3Ek__BackingField_16(),
	StereoController_t3144380552_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t3626315335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[4] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24this_0(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24disposing_2(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (StereoRenderEffect_t958489249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (BaseAndroidDevice_t1263753648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1930[1] = 
{
	BaseAndroidDevice_t1263753648::get_offset_of_androidActivity_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (BaseVRDevice_t4004462063), -1, sizeof(BaseVRDevice_t4004462063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1931[19] = 
{
	BaseVRDevice_t4004462063_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t4004462063::get_offset_of_U3CProfileU3Ek__BackingField_1(),
	BaseVRDevice_t4004462063::get_offset_of_headPose_2(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyePose_3(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyePose_4(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedProjection_5(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedProjection_6(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedProjection_7(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedProjection_8(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedViewport_9(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedViewport_10(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedViewport_11(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedViewport_12(),
	BaseVRDevice_t4004462063::get_offset_of_recommendedTextureSize_13(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeOrientation_14(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeOrientation_15(),
	BaseVRDevice_t4004462063::get_offset_of_tilted_16(),
	BaseVRDevice_t4004462063::get_offset_of_profileChanged_17(),
	BaseVRDevice_t4004462063::get_offset_of_backButtonPressed_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (GvrDevice_t635821333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1932[13] = 
{
	0,
	0,
	0,
	0,
	GvrDevice_t635821333::get_offset_of_headData_24(),
	GvrDevice_t635821333::get_offset_of_viewData_25(),
	GvrDevice_t635821333::get_offset_of_profileData_26(),
	GvrDevice_t635821333::get_offset_of_headView_27(),
	GvrDevice_t635821333::get_offset_of_leftEyeView_28(),
	GvrDevice_t635821333::get_offset_of_rightEyeView_29(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeProjections_30(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeUILayer_31(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (UnityVRDevice_t2569769461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (GvrGaze_t2249568644), -1, sizeof(GvrGaze_t2249568644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1934[11] = 
{
	GvrGaze_t2249568644::get_offset_of_pointerObject_2(),
	GvrGaze_t2249568644::get_offset_of_pointer_3(),
	GvrGaze_t2249568644::get_offset_of_U3CcamU3Ek__BackingField_4(),
	GvrGaze_t2249568644::get_offset_of_mask_5(),
	GvrGaze_t2249568644::get_offset_of_currentTarget_6(),
	GvrGaze_t2249568644::get_offset_of_currentGazeObject_7(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectPosition_8(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectionRay_9(),
	GvrGaze_t2249568644::get_offset_of_isTriggered_10(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (GvrReticle_t1834592217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (GvrAudio_t2627885619), -1, sizeof(GvrAudio_t2627885619_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1937[23] = 
{
	GvrAudio_t2627885619_StaticFields::get_offset_of_sampleRate_0(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_numChannels_1(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_framesPerBuffer_2(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_listenerDirectivityColor_3(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_sourceDirectivityColor_4(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrAudio_t2627885619_StaticFields::get_offset_of_bounds_16(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_enabledRooms_17(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_initialized_18(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_listenerTransform_19(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_occlusionMaskValue_20(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_pose_21(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (Quality_t2125366261)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1938[4] = 
{
	Quality_t2125366261::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (SpatializerData_t1929858338)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1939[9] = 
{
	SpatializerData_t1929858338::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (SpatializerType_t3348390394)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1940[3] = 
{
	SpatializerType_t3348390394::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (RoomProperties_t2834448096)+ sizeof (Il2CppObject), sizeof(RoomProperties_t2834448096 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1941[20] = 
{
	RoomProperties_t2834448096::get_offset_of_positionX_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_positionY_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_positionZ_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationX_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationY_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationZ_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationW_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_dimensionsX_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_dimensionsY_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_dimensionsZ_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialLeft_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialRight_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialBottom_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialTop_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialFront_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialBack_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reflectionScalar_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reverbGain_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reverbTime_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reverbBrightness_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (GvrAudioListener_t1521766837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[3] = 
{
	GvrAudioListener_t1521766837::get_offset_of_globalGainDb_2(),
	GvrAudioListener_t1521766837::get_offset_of_occlusionMask_3(),
	GvrAudioListener_t1521766837::get_offset_of_quality_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (GvrAudioRoom_t1253442178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[11] = 
{
	GvrAudioRoom_t1253442178::get_offset_of_leftWall_2(),
	GvrAudioRoom_t1253442178::get_offset_of_rightWall_3(),
	GvrAudioRoom_t1253442178::get_offset_of_floor_4(),
	GvrAudioRoom_t1253442178::get_offset_of_ceiling_5(),
	GvrAudioRoom_t1253442178::get_offset_of_backWall_6(),
	GvrAudioRoom_t1253442178::get_offset_of_frontWall_7(),
	GvrAudioRoom_t1253442178::get_offset_of_reflectivity_8(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbGainDb_9(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbBrightness_10(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbTime_11(),
	GvrAudioRoom_t1253442178::get_offset_of_size_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (SurfaceMaterial_t3590751945)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1944[24] = 
{
	SurfaceMaterial_t3590751945::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (GvrAudioSoundfield_t1301118448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[13] = 
{
	GvrAudioSoundfield_t1301118448::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSoundfield_t1301118448::get_offset_of_gainDb_3(),
	GvrAudioSoundfield_t1301118448::get_offset_of_playOnAwake_4(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldClip0102_5(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldClip0304_6(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldLoop_7(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldMute_8(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldPitch_9(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldPriority_10(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldVolume_11(),
	GvrAudioSoundfield_t1301118448::get_offset_of_id_12(),
	GvrAudioSoundfield_t1301118448::get_offset_of_audioSources_13(),
	GvrAudioSoundfield_t1301118448::get_offset_of_isPaused_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (GvrAudioSource_t2307460312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[25] = 
{
	GvrAudioSource_t2307460312::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSource_t2307460312::get_offset_of_directivityAlpha_3(),
	GvrAudioSource_t2307460312::get_offset_of_directivitySharpness_4(),
	GvrAudioSource_t2307460312::get_offset_of_listenerDirectivityAlpha_5(),
	GvrAudioSource_t2307460312::get_offset_of_listenerDirectivitySharpness_6(),
	GvrAudioSource_t2307460312::get_offset_of_gainDb_7(),
	GvrAudioSource_t2307460312::get_offset_of_occlusionEnabled_8(),
	GvrAudioSource_t2307460312::get_offset_of_playOnAwake_9(),
	GvrAudioSource_t2307460312::get_offset_of_sourceClip_10(),
	GvrAudioSource_t2307460312::get_offset_of_sourceLoop_11(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMute_12(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePitch_13(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePriority_14(),
	GvrAudioSource_t2307460312::get_offset_of_sourceDopplerLevel_15(),
	GvrAudioSource_t2307460312::get_offset_of_sourceSpread_16(),
	GvrAudioSource_t2307460312::get_offset_of_sourceVolume_17(),
	GvrAudioSource_t2307460312::get_offset_of_sourceRolloffMode_18(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMaxDistance_19(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMinDistance_20(),
	GvrAudioSource_t2307460312::get_offset_of_hrtfEnabled_21(),
	GvrAudioSource_t2307460312::get_offset_of_audioSource_22(),
	GvrAudioSource_t2307460312::get_offset_of_id_23(),
	GvrAudioSource_t2307460312::get_offset_of_currentOcclusion_24(),
	GvrAudioSource_t2307460312::get_offset_of_nextOcclusionUpdate_25(),
	GvrAudioSource_t2307460312::get_offset_of_isPaused_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (GvrArmModel_t1664224602), -1, sizeof(GvrArmModel_t1664224602_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1947[44] = 
{
	GvrArmModel_t1664224602_StaticFields::get_offset_of_instance_2(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_DEFAULT_SHOULDER_RIGHT_3(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_ELBOW_MIN_RANGE_4(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_ELBOW_MAX_RANGE_5(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_POINTER_OFFSET_6(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_ELBOW_POSITION_7(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_WRIST_POSITION_8(),
	GvrArmModel_t1664224602_StaticFields::get_offset_of_ARM_EXTENSION_OFFSET_9(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrArmModel_t1664224602::get_offset_of_elbowOffset_20(),
	GvrArmModel_t1664224602::get_offset_of_torsoDirection_21(),
	GvrArmModel_t1664224602::get_offset_of_filteredVelocity_22(),
	GvrArmModel_t1664224602::get_offset_of_filteredAccel_23(),
	GvrArmModel_t1664224602::get_offset_of_zeroAccel_24(),
	GvrArmModel_t1664224602::get_offset_of_firstUpdate_25(),
	GvrArmModel_t1664224602::get_offset_of_handedMultiplier_26(),
	GvrArmModel_t1664224602::get_offset_of_addedElbowHeight_27(),
	GvrArmModel_t1664224602::get_offset_of_addedElbowDepth_28(),
	GvrArmModel_t1664224602::get_offset_of_pointerTiltAngle_29(),
	GvrArmModel_t1664224602::get_offset_of_fadeDistanceFromFace_30(),
	GvrArmModel_t1664224602::get_offset_of_tooltipMinDistanceFromFace_31(),
	GvrArmModel_t1664224602::get_offset_of_tooltipMaxAngleFromCamera_32(),
	GvrArmModel_t1664224602::get_offset_of_followGaze_33(),
	GvrArmModel_t1664224602::get_offset_of_useAccelerometer_34(),
	GvrArmModel_t1664224602::get_offset_of_U3CpointerPositionU3Ek__BackingField_35(),
	GvrArmModel_t1664224602::get_offset_of_U3CpointerRotationU3Ek__BackingField_36(),
	GvrArmModel_t1664224602::get_offset_of_U3CwristPositionU3Ek__BackingField_37(),
	GvrArmModel_t1664224602::get_offset_of_U3CwristRotationU3Ek__BackingField_38(),
	GvrArmModel_t1664224602::get_offset_of_U3CelbowPositionU3Ek__BackingField_39(),
	GvrArmModel_t1664224602::get_offset_of_U3CelbowRotationU3Ek__BackingField_40(),
	GvrArmModel_t1664224602::get_offset_of_U3CshoulderPositionU3Ek__BackingField_41(),
	GvrArmModel_t1664224602::get_offset_of_U3CshoulderRotationU3Ek__BackingField_42(),
	GvrArmModel_t1664224602::get_offset_of_U3CpreferredAlphaU3Ek__BackingField_43(),
	GvrArmModel_t1664224602::get_offset_of_U3CtooltipAlphaValueU3Ek__BackingField_44(),
	GvrArmModel_t1664224602::get_offset_of_OnArmModelUpdate_45(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (GazeBehavior_t712533048)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1948[4] = 
{
	GazeBehavior_t712533048::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (OnArmModelUpdateEvent_t1199919348), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (GvrArmModelOffsets_t2241056642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1950[3] = 
{
	GvrArmModelOffsets_t2241056642::get_offset_of_lineRenderer_2(),
	GvrArmModelOffsets_t2241056642::get_offset_of_joint_3(),
	GvrArmModelOffsets_t2241056642::get_offset_of_debugDrawTo_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (Joint_t3302496419)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1951[5] = 
{
	Joint_t3302496419::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (GvrBatteryIndicator_t1573734297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1952[8] = 
{
	GvrBatteryIndicator_t1573734297::get_offset_of_indicatorRenderer_6(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matUnknown_7(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matCharging_8(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matFull_9(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matAlmostFull_10(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matMedium_11(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matLow_12(),
	GvrBatteryIndicator_t1573734297::get_offset_of_matCriticalLow_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (GvrConnectionState_t1596129842)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1953[6] = 
{
	GvrConnectionState_t1596129842::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (GvrControllerApiStatus_t66586029)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1954[9] = 
{
	GvrControllerApiStatus_t66586029::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (GvrControllerBatteryLevel_t1673126176)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1955[8] = 
{
	GvrControllerBatteryLevel_t1673126176::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (GvrController_t1602869021), -1, sizeof(GvrController_t1602869021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1956[7] = 
{
	GvrController_t1602869021_StaticFields::get_offset_of_instance_2(),
	GvrController_t1602869021_StaticFields::get_offset_of_controllerProvider_3(),
	GvrController_t1602869021::get_offset_of_controllerState_4(),
	GvrController_t1602869021::get_offset_of_controllerUpdate_5(),
	GvrController_t1602869021::get_offset_of_waitForEndOfFrame_6(),
	GvrController_t1602869021::get_offset_of_OnControllerUpdate_7(),
	GvrController_t1602869021::get_offset_of_emulatorConnectionMode_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (OnControllerUpdateEvent_t1438436294), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (EmulatorConnectionMode_t1823409010)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1958[4] = 
{
	EmulatorConnectionMode_t1823409010::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t1945048840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[4] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24this_0(),
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24disposing_2(),
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (GvrControllerVisual_t3328916665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1960[5] = 
{
	GvrControllerVisual_t3328916665::get_offset_of_controllerRenderer_6(),
	GvrControllerVisual_t3328916665::get_offset_of_material_idle_7(),
	GvrControllerVisual_t3328916665::get_offset_of_material_app_8(),
	GvrControllerVisual_t3328916665::get_offset_of_material_system_9(),
	GvrControllerVisual_t3328916665::get_offset_of_material_touchpad_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (GvrControllerVisualManager_t1857939020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1961[1] = 
{
	GvrControllerVisualManager_t1857939020::get_offset_of_wasControllerConnected_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (GvrPointerManager_t2205699129), -1, sizeof(GvrPointerManager_t2205699129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1962[2] = 
{
	GvrPointerManager_t2205699129_StaticFields::get_offset_of_instance_2(),
	GvrPointerManager_t2205699129::get_offset_of_pointer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (GvrRecenterOnlyController_t2745329441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1963[3] = 
{
	GvrRecenterOnlyController_t2745329441::get_offset_of_recenteringOffset_2(),
	GvrRecenterOnlyController_t2745329441::get_offset_of_pointer_3(),
	GvrRecenterOnlyController_t2745329441::get_offset_of_cam_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (GvrTooltip_t801170144), -1, sizeof(GvrTooltip_t801170144_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1964[13] = 
{
	GvrTooltip_t801170144_StaticFields::get_offset_of_RIGHT_SIDE_ROTATION_2(),
	GvrTooltip_t801170144_StaticFields::get_offset_of_LEFT_SIDE_ROTATION_3(),
	GvrTooltip_t801170144_StaticFields::get_offset_of_SQUARE_CENTER_4(),
	GvrTooltip_t801170144_StaticFields::get_offset_of_PIVOT_5(),
	0,
	0,
	0,
	GvrTooltip_t801170144::get_offset_of_location_9(),
	GvrTooltip_t801170144::get_offset_of_text_10(),
	GvrTooltip_t801170144::get_offset_of_alwaysVisible_11(),
	GvrTooltip_t801170144::get_offset_of_isOnLeft_12(),
	GvrTooltip_t801170144::get_offset_of_rectTransform_13(),
	GvrTooltip_t801170144::get_offset_of_canvasGroup_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (Location_t3759394206)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1965[6] = 
{
	Location_t3759394206::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (ControllerProviderFactory_t2872005551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (AndroidNativeControllerProvider_t1389606029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1967[33] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	AndroidNativeControllerProvider_t1389606029::get_offset_of_api_26(),
	AndroidNativeControllerProvider_t1389606029::get_offset_of_androidContext_27(),
	AndroidNativeControllerProvider_t1389606029::get_offset_of_classLoader_28(),
	AndroidNativeControllerProvider_t1389606029::get_offset_of_error_29(),
	AndroidNativeControllerProvider_t1389606029::get_offset_of_errorDetails_30(),
	AndroidNativeControllerProvider_t1389606029::get_offset_of_statePtr_31(),
	AndroidNativeControllerProvider_t1389606029::get_offset_of_pose3d_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (gvr_quat_t533280391)+ sizeof (Il2CppObject), sizeof(gvr_quat_t533280391 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1968[4] = 
{
	gvr_quat_t533280391::get_offset_of_x_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_quat_t533280391::get_offset_of_y_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_quat_t533280391::get_offset_of_z_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_quat_t533280391::get_offset_of_w_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (gvr_vec3_t1198686513)+ sizeof (Il2CppObject), sizeof(gvr_vec3_t1198686513 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1969[3] = 
{
	gvr_vec3_t1198686513::get_offset_of_x_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_vec3_t1198686513::get_offset_of_y_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_vec3_t1198686513::get_offset_of_z_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (gvr_vec2_t1198686514)+ sizeof (Il2CppObject), sizeof(gvr_vec2_t1198686514 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1970[2] = 
{
	gvr_vec2_t1198686514::get_offset_of_x_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_vec2_t1198686514::get_offset_of_y_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (DummyControllerProvider_t462852303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1971[1] = 
{
	DummyControllerProvider_t462852303::get_offset_of_dummyState_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (EmulatorControllerProvider_t4051553744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1972[4] = 
{
	EmulatorControllerProvider_t4051553744::get_offset_of_state_0(),
	EmulatorControllerProvider_t4051553744::get_offset_of_yawCorrection_1(),
	EmulatorControllerProvider_t4051553744::get_offset_of_initialRecenterDone_2(),
	EmulatorControllerProvider_t4051553744::get_offset_of_lastRawOrientation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (ControllerState_t1971591097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1973[23] = 
{
	ControllerState_t1971591097::get_offset_of_connectionState_0(),
	ControllerState_t1971591097::get_offset_of_apiStatus_1(),
	ControllerState_t1971591097::get_offset_of_orientation_2(),
	ControllerState_t1971591097::get_offset_of_gyro_3(),
	ControllerState_t1971591097::get_offset_of_accel_4(),
	ControllerState_t1971591097::get_offset_of_isTouching_5(),
	ControllerState_t1971591097::get_offset_of_touchPos_6(),
	ControllerState_t1971591097::get_offset_of_touchDown_7(),
	ControllerState_t1971591097::get_offset_of_touchUp_8(),
	ControllerState_t1971591097::get_offset_of_recentering_9(),
	ControllerState_t1971591097::get_offset_of_recentered_10(),
	ControllerState_t1971591097::get_offset_of_clickButtonState_11(),
	ControllerState_t1971591097::get_offset_of_clickButtonDown_12(),
	ControllerState_t1971591097::get_offset_of_clickButtonUp_13(),
	ControllerState_t1971591097::get_offset_of_appButtonState_14(),
	ControllerState_t1971591097::get_offset_of_appButtonDown_15(),
	ControllerState_t1971591097::get_offset_of_appButtonUp_16(),
	ControllerState_t1971591097::get_offset_of_homeButtonDown_17(),
	ControllerState_t1971591097::get_offset_of_homeButtonState_18(),
	ControllerState_t1971591097::get_offset_of_errorDetails_19(),
	ControllerState_t1971591097::get_offset_of_gvrPtr_20(),
	ControllerState_t1971591097::get_offset_of_isCharging_21(),
	ControllerState_t1971591097::get_offset_of_batteryLevel_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (EmulatorClientSocket_t2001911543), -1, sizeof(EmulatorClientSocket_t2001911543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1974[9] = 
{
	EmulatorClientSocket_t2001911543_StaticFields::get_offset_of_kPhoneEventPort_2(),
	0,
	0,
	EmulatorClientSocket_t2001911543::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2001911543::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2001911543::get_offset_of_lastConnectionAttemptWasSuccessful_8(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneRemote_9(),
	EmulatorClientSocket_t2001911543::get_offset_of_U3CconnectedU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (EmulatorConfig_t616150261), -1, sizeof(EmulatorConfig_t616150261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1975[4] = 
{
	EmulatorConfig_t616150261_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t616150261::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (Mode_t1624619217)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1976[4] = 
{
	Mode_t1624619217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (EmulatorGyroEvent_t1858389926)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t1858389926 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1977[2] = 
{
	EmulatorGyroEvent_t1858389926::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t1858389926::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (EmulatorAccelEvent_t621139879)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t621139879 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1978[2] = 
{
	EmulatorAccelEvent_t621139879::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t621139879::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (EmulatorTouchEvent_t1122923020)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t1122923020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1979[6] = 
{
	EmulatorTouchEvent_t1122923020::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (Action_t936529327)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1980[10] = 
{
	Action_t936529327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (Pointer_t3000685002)+ sizeof (Il2CppObject), sizeof(Pointer_t3000685002 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1981[3] = 
{
	Pointer_t3000685002::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (EmulatorOrientationEvent_t4153005117)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t4153005117 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1982[2] = 
{
	EmulatorOrientationEvent_t4153005117::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t4153005117::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (EmulatorButtonEvent_t156276569)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t156276569_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1983[2] = 
{
	EmulatorButtonEvent_t156276569::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t156276569::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (ButtonCode_t4043921137)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1984[7] = 
{
	ButtonCode_t4043921137::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (EmulatorManager_t3364249716), -1, sizeof(EmulatorManager_t3364249716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1985[16] = 
{
	EmulatorManager_t3364249716::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t3364249716::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t3364249716_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t3364249716::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t3364249716::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t3364249716::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t3364249716::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t3364249716::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t3364249716::get_offset_of_gyroEventListenersInternal_10(),
	EmulatorManager_t3364249716::get_offset_of_accelEventListenersInternal_11(),
	EmulatorManager_t3364249716::get_offset_of_touchEventListenersInternal_12(),
	EmulatorManager_t3364249716::get_offset_of_orientationEventListenersInternal_13(),
	EmulatorManager_t3364249716::get_offset_of_buttonEventListenersInternal_14(),
	EmulatorManager_t3364249716::get_offset_of_pendingEvents_15(),
	EmulatorManager_t3364249716::get_offset_of_socket_16(),
	EmulatorManager_t3364249716::get_offset_of_lastDownTimeMs_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (OnGyroEvent_t1804908545), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (OnAccelEvent_t1967739812), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (OnTouchEvent_t4143287487), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (OnOrientationEvent_t602701282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (OnButtonEvent_t358370788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t4253624923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1991[5] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24locvar0_0(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24this_1(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24current_2(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24disposing_3(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (PhoneEvent_t3882078222), -1, sizeof(PhoneEvent_t3882078222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1992[1] = 
{
	PhoneEvent_t3882078222_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (PhoneEvent_t2572128318), -1, sizeof(PhoneEvent_t2572128318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1993[25] = 
{
	PhoneEvent_t2572128318_StaticFields::get_offset_of_defaultInstance_0(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldNames_1(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldTags_2(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasType_4(),
	PhoneEvent_t2572128318::get_offset_of_type__5(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasMotionEvent_7(),
	PhoneEvent_t2572128318::get_offset_of_motionEvent__8(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasGyroscopeEvent_10(),
	PhoneEvent_t2572128318::get_offset_of_gyroscopeEvent__11(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasAccelerometerEvent_13(),
	PhoneEvent_t2572128318::get_offset_of_accelerometerEvent__14(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasDepthMapEvent_16(),
	PhoneEvent_t2572128318::get_offset_of_depthMapEvent__17(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasOrientationEvent_19(),
	PhoneEvent_t2572128318::get_offset_of_orientationEvent__20(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t2572128318::get_offset_of_keyEvent__23(),
	PhoneEvent_t2572128318::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (Types_t3648109718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (Type_t1530480861)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1995[7] = 
{
	Type_t1530480861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (MotionEvent_t4072706903), -1, sizeof(MotionEvent_t4072706903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1996[12] = 
{
	MotionEvent_t4072706903_StaticFields::get_offset_of_defaultInstance_0(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldNames_1(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldTags_2(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasTimestamp_4(),
	MotionEvent_t4072706903::get_offset_of_timestamp__5(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasAction_7(),
	MotionEvent_t4072706903::get_offset_of_action__8(),
	0,
	MotionEvent_t4072706903::get_offset_of_pointers__10(),
	MotionEvent_t4072706903::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (Types_t1262104803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (Pointer_t1211758263), -1, sizeof(Pointer_t1211758263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1998[13] = 
{
	Pointer_t1211758263_StaticFields::get_offset_of_defaultInstance_0(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldNames_1(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldTags_2(),
	0,
	Pointer_t1211758263::get_offset_of_hasId_4(),
	Pointer_t1211758263::get_offset_of_id__5(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedX_7(),
	Pointer_t1211758263::get_offset_of_normalizedX__8(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedY_10(),
	Pointer_t1211758263::get_offset_of_normalizedY__11(),
	Pointer_t1211758263::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (Builder_t2701542133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[2] = 
{
	Builder_t2701542133::get_offset_of_resultIsReadOnly_0(),
	Builder_t2701542133::get_offset_of_result_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
