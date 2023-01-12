#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>
struct Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudUpdatedEventArgs>
struct Action_1_tFF9FBBC78056CAB219CE4F7E7B45D09506B3A6E4;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPointCloud>
struct Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud>
struct List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C;
// System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>
struct List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1;
// System.Collections.Generic.List`1<PointCloudParser/PointDetection>
struct List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARPointCloud[]
struct ARPointCloudU5BU5D_tD64665DDD0344C5780D4BDC332717DA27CEF1CE0;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// PointCloudParser/PlaneDetection[]
struct PlaneDetectionU5BU5D_t550C3B131D009E48ECF78C8CD7F47E80EFA4DF99;
// PointCloudParser/PointDetection[]
struct PointDetectionU5BU5D_t7DDDDD9CC92191D70BCACC863EA566D56AB4D0F2;
// UnityEngine.XR.ARFoundation.ARPointCloud
struct ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2;
// UnityEngine.XR.ARFoundation.ARPointCloudManager
struct ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PointCloudParser
struct PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t61DE8363378DC9991027C95E31303A3F1BC32E48;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PointCloudParser/PlaneDetection
struct PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345;
// PointCloudParser/PointDetection
struct PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F28E4C788EEC5929A5A8D1C53FDF9F447CA3BB;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m887220F777547562121F36CBBAFCF985DF111BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8D0E319A0490159EB45480DB421D0A30EC4BBFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m02916A2F00F7CC17966926AF3DC4DE85050450DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9B340EF011639AB7E8F566E5FAD22C05D49E4BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAE8EB16DA01C8CC290E87734D7D3C7F12986270B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2245D4DC9A28FEDD05C00A8446B3C102853620D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56A4017EB4B0BB02D1574A5812F93B30590D9D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7E3EAE41EC4A5DB161F1841D3F80104BD58AD4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB8A1CE32BBA211888E99EE3659ABEC7F02277C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0927CF49D5C13EE6B2722D230EA806DCFB81E1AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m21897F64C6159E89B4A1DA510C3295757F7FECC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE99AD2D054ABE6DD716F332B9633F894040FDFFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointCloudParser_PointCloudChanged_mC95039EBBE5FEBB2EA55B4E3B851C84F19933AC6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud>
struct List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARPointCloudU5BU5D_tD64665DDD0344C5780D4BDC332717DA27CEF1CE0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARPointCloudU5BU5D_tD64665DDD0344C5780D4BDC332717DA27CEF1CE0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>
struct List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlaneDetectionU5BU5D_t550C3B131D009E48ECF78C8CD7F47E80EFA4DF99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlaneDetectionU5BU5D_t550C3B131D009E48ECF78C8CD7F47E80EFA4DF99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PointCloudParser/PointDetection>
struct List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PointDetectionU5BU5D_t7DDDDD9CC92191D70BCACC863EA566D56AB4D0F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PointDetectionU5BU5D_t7DDDDD9CC92191D70BCACC863EA566D56AB4D0F2* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARPointCloud>
struct Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<PointCloudParser/PlaneDetection>
struct Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<PointCloudParser/PointDetection>
struct Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* ____current_3;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs
struct ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud> UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs::<added>k__BackingField
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud> UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs::<updated>k__BackingField
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud> UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs::<removed>k__BackingField
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs
struct ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B_marshaled_pinvoke
{
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CaddedU3Ek__BackingField_0;
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs
struct ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B_marshaled_com
{
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CaddedU3Ek__BackingField_0;
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 
{
	// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1/Enumerator::m_Array
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___m_Array_0;
	// System.Int32 Unity.Collections.NativeSlice`1/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>
struct Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___value_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Identifiers_2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// PointCloudParser/PointDetection
struct PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4  : public RuntimeObject
{
	// UnityEngine.Vector3 PointCloudParser/PointDetection::<pos>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CposU3Ek__BackingField_0;
	// System.Int32 PointCloudParser/PointDetection::<age>k__BackingField
	int32_t ___U3CageU3Ek__BackingField_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;
};

struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default_0;
};

// PointCloudParser/PlaneDetection
struct PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345  : public RuntimeObject
{
	// UnityEngine.Plane PointCloudParser/PlaneDetection::plane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane_0;
	// UnityEngine.GameObject PointCloudParser/PlaneDetection::spawnedPlaneSzin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedPlaneSzin_1;
	// UnityEngine.GameObject PointCloudParser/PlaneDetection::spawnedPlaneFonak
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedPlaneFonak_2;
	// System.Int32 PointCloudParser/PlaneDetection::<age>k__BackingField
	int32_t ___U3CageU3Ek__BackingField_3;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>
struct Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRDepthSubsystem_t61DE8363378DC9991027C95E31303A3F1BC32E48* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PointCloudParser
struct PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARPointCloudManager PointCloudParser::pointCloudManager
	ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* ___pointCloudManager_4;
	// UnityEngine.Camera PointCloudParser::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_5;
	// UnityEngine.UI.Text PointCloudParser::countStr
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___countStr_6;
	// System.Collections.Generic.List`1<PointCloudParser/PlaneDetection> PointCloudParser::planes
	List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* ___planes_7;
	// System.Collections.Generic.List`1<PointCloudParser/PointDetection> PointCloudParser::detectedPoints
	List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* ___detectedPoints_8;
	// System.Single PointCloudParser::minDist
	float ___minDist_9;
	// System.Int32 PointCloudParser::minInliers
	int32_t ___minInliers_10;
	// System.Int32 PointCloudParser::maxIter
	int32_t ___maxIter_11;
	// System.Int32 PointCloudParser::planeLifetime
	int32_t ___planeLifetime_12;
	// System.Int32 PointCloudParser::pointLifetime
	int32_t ___pointLifetime_13;
	// UnityEngine.GameObject PointCloudParser::planeSzinPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeSzinPrefab_14;
	// UnityEngine.GameObject PointCloudParser::planeFonakPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeFonakPrefab_15;
	// UnityEngine.GameObject PointCloudParser::planeClickedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeClickedPrefab_16;
	// UnityEngine.GameObject PointCloudParser::pointPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointPrefab_17;
	// UnityEngine.GameObject PointCloudParser::planeClickedSzin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeClickedSzin_18;
	// UnityEngine.GameObject PointCloudParser::planeClickedFonak
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeClickedFonak_19;
	// UnityEngine.GameObject PointCloudParser::arCameraObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arCameraObject_20;
	// UnityEngine.UI.Button PointCloudParser::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_21;
	// System.Boolean PointCloudParser::detectPlanes
	bool ___detectPlanes_22;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352  : public SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackable_2_tE6DB09F8573C1CC6CE82F1938E80F9EFF50F3BBE  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARPointCloud
struct ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2  : public ARTrackable_2_tE6DB09F8573C1CC6CE82F1938E80F9EFF50F3BBE
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARPointCloud::updated
	Action_1_tFF9FBBC78056CAB219CE4F7E7B45D09506B3A6E4* ___updated_7;
	// UnityEngine.XR.ARSubsystems.XRPointCloudData UnityEngine.XR.ARFoundation.ARPointCloud::m_Data
	XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B ___m_Data_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPointCloud::m_PointsUpdated
	bool ___m_PointsUpdated_9;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager
struct ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F  : public ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPointCloudManager::m_PointCloudPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointCloudPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs> UnityEngine.XR.ARFoundation.ARPointCloudManager::pointCloudsChanged
	Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* ___pointCloudsChanged_15;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8C819B4CABAFC405C1DEBA65B1E220746F258AB6_gshared (Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_gshared (Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1/Enumerator<T> Unity.Collections.NativeSlice`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_gshared (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_gshared (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_gshared (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8C819B4CABAFC405C1DEBA65B1E220746F258AB6 (Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8C819B4CABAFC405C1DEBA65B1E220746F258AB6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPointCloudManager::add_pointCloudsChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPointCloudManager_add_pointCloudsChanged_m108F43CDA88DC192BA5DE3EBD7DFFDE3C59E26B3 (ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* __this, Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>::get_Item(System.Int32)
inline PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9 (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* (*) (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 PointCloudParser/PlaneDetection::get_age()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92_inline (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, const RuntimeMethod* method) ;
// System.Void PointCloudParser/PlaneDetection::set_age(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1_inline (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>::get_Count()
inline int32_t List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<PointCloudParser/PointDetection>::get_Item(System.Int32)
inline PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99 (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* (*) (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 PointCloudParser/PointDetection::get_age()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, const RuntimeMethod* method) ;
// System.Void PointCloudParser/PointDetection::set_age(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<PointCloudParser/PointDetection>::get_Count()
inline int32_t List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_inline (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<PointCloudParser/PointDetection>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0927CF49D5C13EE6B2722D230EA806DCFB81E1AD (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean PointCloudParser::IsSamePlane(UnityEngine.Plane,UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointCloudParser_IsSamePlane_m1BB5DC7AAC4228AEF5643EA1CFC82E688028F39A (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p10, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p21, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Plane::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_get_distance_m2D50D2C23E2D9438272F876878015B38DAF5ED30 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Void PointCloudParser::Age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_Age_m5E3C202DDB6CEE61C504C855C90D2AB7F2AFACF3 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) ;
// System.Void PointCloudParser::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud> UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ARPointCloudChangedEventArgs_get_added_m74DFD8ED4B3EADB5AC29DD0E748C84C6FA26DDE9_inline (ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud>::GetEnumerator()
inline Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3 (List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 (*) (List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARPointCloud>::Dispose()
inline void Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F (Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARPointCloud>::get_Current()
inline ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_inline (Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76* __this, const RuntimeMethod* method)
{
	return ((  ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* (*) (Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>> UnityEngine.XR.ARFoundation.ARPointCloud::get_positions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 ARPointCloud_get_positions_mD1B6C96855B80F0CCF6B32F97CBA75110E6EBEB5 (ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>::get_Value()
inline NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C (Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4* __this, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A (*) (Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4*, const RuntimeMethod*))Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_gshared)(__this, method);
}
// Unity.Collections.NativeSlice`1/Enumerator<T> Unity.Collections.NativeSlice`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724 (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 (*) (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A*, const RuntimeMethod*))NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9 (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308*, const RuntimeMethod*))Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_gshared)(__this, method);
}
// T Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470 (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308*, const RuntimeMethod*))Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_gshared)(__this, method);
}
// System.Void PointCloudParser/PointDetection::.ctor(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDetection__ctor_m428FD3652375BB282FDCBC2CC34570624FFC2826 (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___age1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PointCloudParser/PointDetection>::Add(T)
inline void List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_inline (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* __this, PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*, PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308*, const RuntimeMethod*))Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARPointCloud>::MoveNext()
inline bool Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC (Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud> UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ARPointCloudChangedEventArgs_get_updated_mD69E67FE8B06AB44B15F42F1D6EFA91F7E58F7C6_inline (ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PointCloudParser/PointDetection>::GetEnumerator()
inline Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346 List_1_GetEnumerator_m7E3EAE41EC4A5DB161F1841D3F80104BD58AD4EB (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346 (*) (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PointCloudParser/PointDetection>::Dispose()
inline void Enumerator_Dispose_m887220F777547562121F36CBBAFCF985DF111BE7 (Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PointCloudParser/PointDetection>::get_Current()
inline PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* Enumerator_get_Current_mB2245D4DC9A28FEDD05C00A8446B3C102853620D_inline (Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346* __this, const RuntimeMethod* method)
{
	return ((  PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* (*) (Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 PointCloudParser/PointDetection::get_pos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PointDetection_get_pos_m2EEFAC4589B8628855A0AB8342B8079C4AABBCA3_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<PointCloudParser/PointDetection>::MoveNext()
inline bool Enumerator_MoveNext_m02916A2F00F7CC17966926AF3DC4DE85050450DB (Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void PointCloudParser::CollectPlanes(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points0, const RuntimeMethod* method) ;
// System.Void PointCloudParser::FilterPlanes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_FilterPlanes_m2C2CD7F4FED4BBB555D4134941FFDD1BDFBEA2A1 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>::GetEnumerator()
inline Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE List_1_GetEnumerator_mB8A1CE32BBA211888E99EE3659ABEC7F02277C12 (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE (*) (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PointCloudParser/PlaneDetection>::Dispose()
inline void Enumerator_Dispose_m8D0E319A0490159EB45480DB421D0A30EC4BBFD2 (Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PointCloudParser/PlaneDetection>::get_Current()
inline PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* Enumerator_get_Current_mAE8EB16DA01C8CC290E87734D7D3C7F12986270B_inline (Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE* __this, const RuntimeMethod* method)
{
	return ((  PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* (*) (Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<PointCloudParser/PlaneDetection>::MoveNext()
inline bool Enumerator_MoveNext_m9B340EF011639AB7E8F566E5FAD22C05D49E4BF1 (Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___distance0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::GetSide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_GetSide_mE71EA98675FA3FA61EAF83A79EA61CFCD6F4F3DC (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Plane UnityEngine.Plane::get_flipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C Plane_get_flipped_m6FF1A610C410D1CC82569DE63D3FCE8E6DA32AC7 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_mBF36EDC369DE0EC29502B4C655CDBAFFB17BD863 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) ;
// UnityEngine.Plane PointCloudParser::GetRandomPlane(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C PointCloudParser_GetRandomPlane_m65DB675C232493A88CA1D997802EAD768EDACA6B (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PointCloudParser::GetInliers(UnityEngine.Plane,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* PointCloudParser_GetInliers_m2915314526250023096E86FC71E18D83AA9E7165 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6 (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void PointCloudParser/PlaneDetection::.ctor(UnityEngine.Plane,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetection__ctor_mE5F3C0EBFFF4380E16286DB9F6C5F9F96DB88E53 (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___szin1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fonak2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>::Add(T)
inline void List_1_Add_m56A4017EB4B0BB02D1574A5812F93B30590D9D4C_inline (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* __this, PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*, PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
inline bool List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_gshared)(__this, ___item0, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Plane::GetDistanceToPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_GetDistanceToPoint_m43E27525BB203513B13EF35F8EDB3785CA4AE6DC (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PointCloudParser/PlaneDetection>::.ctor()
inline void List_1__ctor_mE99AD2D054ABE6DD716F332B9633F894040FDFFC (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PointCloudParser/PointDetection>::.ctor()
inline void List_1__ctor_m21897F64C6159E89B4A1DA510C3295757F7FECC3 (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void PointCloudParser/PointDetection::set_pos(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointDetection_set_pos_mB0631DE69EE3712A54B8640C2ABC16B34B9DC5E7_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PointCloudParser::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_OnEnable_m82F68E157200E2C504A8B16A686A135247862141 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointCloudParser_PointCloudChanged_mC95039EBBE5FEBB2EA55B4E3B851C84F19933AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointCloudManager.pointCloudsChanged += PointCloudChanged;
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_0 = __this->___pointCloudManager_4;
		Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* L_1 = (Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0*)il2cpp_codegen_object_new(Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m8C819B4CABAFC405C1DEBA65B1E220746F258AB6(L_1, __this, (intptr_t)((void*)PointCloudParser_PointCloudChanged_mC95039EBBE5FEBB2EA55B4E3B851C84F19933AC6_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPointCloudManager_add_pointCloudsChanged_m108F43CDA88DC192BA5DE3EBD7DFFDE3C59E26B3(L_0, L_1, NULL);
		// button.onClick.AddListener(Clear);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___button_21;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PointCloudParser::Age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_Age_m5E3C202DDB6CEE61C504C855C90D2AB7F2AFACF3 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < planes.Count; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// planes[i].age++;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_0 = __this->___planes_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_2;
		L_2 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_0, L_1, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92_inline(L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1_inline(L_3, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// for (int i = 0; i < planes.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < planes.Count; i++)
		int32_t L_7 = V_0;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_8 = __this->___planes_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline(L_8, List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < detectedPoints.Count; i++)
		V_2 = 0;
		goto IL_0054;
	}

IL_0035:
	{
		// detectedPoints[i].age++;
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_10 = __this->___detectedPoints_8;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_12;
		L_12 = List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99(L_10, L_11, List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99_RuntimeMethod_var);
		PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D_inline(L_13, NULL);
		V_1 = L_14;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127_inline(L_13, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		// for (int i = 0; i < detectedPoints.Count; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < detectedPoints.Count; i++)
		int32_t L_17 = V_2;
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_18 = __this->___detectedPoints_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_inline(L_18, List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PointCloudParser::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0927CF49D5C13EE6B2722D230EA806DCFB81E1AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < planes.Count; i++)
		V_0 = 0;
		goto IL_005d;
	}

IL_0004:
	{
		// if (planes[i].age > planeLifetime)
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_0 = __this->___planes_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_2;
		L_2 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_0, L_1, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92_inline(L_2, NULL);
		int32_t L_4 = __this->___planeLifetime_12;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// Destroy(planes[i].spawnedPlaneSzin);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_5 = __this->___planes_7;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_7;
		L_7 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_5, L_6, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___spawnedPlaneSzin_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// Destroy(planes[i].spawnedPlaneFonak);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_9 = __this->___planes_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_11;
		L_11 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_9, L_10, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___spawnedPlaneFonak_2;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
		// planes.RemoveAt(i);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_13 = __this->___planes_7;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B(L_13, L_14, List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B_RuntimeMethod_var);
		// i--;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < planes.Count; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < planes.Count; i++)
		int32_t L_17 = V_0;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_18 = __this->___planes_7;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline(L_18, List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < detectedPoints.Count; i++)
		V_1 = 0;
		goto IL_009c;
	}

IL_006f:
	{
		// if (detectedPoints[i].age > pointLifetime)
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_20 = __this->___detectedPoints_8;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_22;
		L_22 = List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99(L_20, L_21, List_1_get_Item_m0D8C15FA1568FE33BCEA85CA10BD98984C626C99_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D_inline(L_22, NULL);
		int32_t L_24 = __this->___pointLifetime_13;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_0098;
		}
	}
	{
		// detectedPoints.RemoveAt(i);
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_25 = __this->___detectedPoints_8;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		List_1_RemoveAt_m0927CF49D5C13EE6B2722D230EA806DCFB81E1AD(L_25, L_26, List_1_RemoveAt_m0927CF49D5C13EE6B2722D230EA806DCFB81E1AD_RuntimeMethod_var);
		// i--;
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_0098:
	{
		// for (int i = 0; i < detectedPoints.Count; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009c:
	{
		// for (int i = 0; i < detectedPoints.Count; i++)
		int32_t L_29 = V_1;
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_30 = __this->___detectedPoints_8;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_inline(L_30, List_1_get_Count_m89A314CF82C3C79899A129DC0DBA8DE0DD6A758B_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_006f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PointCloudParser::FilterPlanes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_FilterPlanes_m2C2CD7F4FED4BBB555D4134941FFDD1BDFBEA2A1 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < planes.Count; i++)
		V_0 = 0;
		goto IL_00c7;
	}

IL_0007:
	{
		// for (int j = i + 1; j < planes.Count; j++)
		int32_t L_0 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_00b2;
	}

IL_0010:
	{
		// if (IsSamePlane(planes[i].plane, planes[j].plane))
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_1 = __this->___planes_7;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_3;
		L_3 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_1, L_2, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_3);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_4 = L_3->___plane_0;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_5 = __this->___planes_7;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_7;
		L_7 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_5, L_6, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_7);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_8 = L_7->___plane_0;
		bool L_9;
		L_9 = PointCloudParser_IsSamePlane_m1BB5DC7AAC4228AEF5643EA1CFC82E688028F39A(__this, L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_00ae;
		}
	}
	{
		// Destroy(planes[j].spawnedPlaneSzin);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_10 = __this->___planes_7;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_12;
		L_12 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_10, L_11, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___spawnedPlaneSzin_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
		// Destroy(planes[j].spawnedPlaneFonak);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_14 = __this->___planes_7;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_16;
		L_16 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_14, L_15, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___spawnedPlaneFonak_2;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
		// planes[i].age = Math.Min(planes[i].age, planes[j].age);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_18 = __this->___planes_7;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_20;
		L_20 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_18, L_19, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_21 = __this->___planes_7;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_23;
		L_23 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_21, L_22, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92_inline(L_23, NULL);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_25 = __this->___planes_7;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_27;
		L_27 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_25, L_26, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_24, L_28, NULL);
		NullCheck(L_20);
		PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1_inline(L_20, L_29, NULL);
		// planes.RemoveAt(j);
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_30 = __this->___planes_7;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B(L_30, L_31, List_1_RemoveAt_mDC64AF7156CDAD384A2E0CDCAD566FEB0EC2B56B_RuntimeMethod_var);
		// j--;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_00ae:
	{
		// for (int j = i + 1; j < planes.Count; j++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b2:
	{
		// for (int j = i + 1; j < planes.Count; j++)
		int32_t L_34 = V_1;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_35 = __this->___planes_7;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline(L_35, List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = 0; i < planes.Count; i++)
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00c7:
	{
		// for (int i = 0; i < planes.Count; i++)
		int32_t L_38 = V_0;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_39 = __this->___planes_7;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline(L_39, List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean PointCloudParser::IsSamePlane(UnityEngine.Plane,UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointCloudParser_IsSamePlane_m1BB5DC7AAC4228AEF5643EA1CFC82E688028F39A (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p10, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool sameDir = Math.Abs(Vector3.Dot(p1.normal, p2.normal)) > 0.9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&___p10), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&___p21), NULL);
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(L_2);
		// bool sameDist = Math.Abs(Math.Abs(p1.distance) - Math.Abs(p2.distance)) < 0.01;
		float L_4;
		L_4 = Plane_get_distance_m2D50D2C23E2D9438272F876878015B38DAF5ED30((&___p10), NULL);
		float L_5;
		L_5 = fabsf(L_4);
		float L_6;
		L_6 = Plane_get_distance_m2D50D2C23E2D9438272F876878015B38DAF5ED30((&___p21), NULL);
		float L_7;
		L_7 = fabsf(L_6);
		float L_8;
		L_8 = fabsf(((float)il2cpp_codegen_subtract(L_5, L_7)));
		V_0 = (bool)((((double)((double)L_8)) < ((double)(0.01)))? 1 : 0);
		// return sameDir && sameDist;
		bool L_9 = V_0;
		return (bool)((int32_t)(((((double)((double)L_3)) > ((double)(0.90000000000000002)))? 1 : 0)&(int32_t)L_9));
	}
}
// System.Void PointCloudParser::PointCloudChanged(UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_PointCloudChanged_mC95039EBBE5FEBB2EA55B4E3B851C84F19933AC6 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m887220F777547562121F36CBBAFCF985DF111BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8D0E319A0490159EB45480DB421D0A30EC4BBFD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m02916A2F00F7CC17966926AF3DC4DE85050450DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9B340EF011639AB7E8F566E5FAD22C05D49E4BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE8EB16DA01C8CC290E87734D7D3C7F12986270B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2245D4DC9A28FEDD05C00A8446B3C102853620D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7E3EAE41EC4A5DB161F1841D3F80104BD58AD4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB8A1CE32BBA211888E99EE3659ABEC7F02277C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F28E4C788EEC5929A5A8D1C53FDF9F447CA3BB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346 V_7;
	memset((&V_7), 0, sizeof(V_7));
	PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* V_8 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE V_16;
	memset((&V_16), 0, sizeof(V_16));
	PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* V_17 = NULL;
	{
		// Age();
		PointCloudParser_Age_m5E3C202DDB6CEE61C504C855C90D2AB7F2AFACF3(__this, NULL);
		// Clear();
		PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1(__this, NULL);
		// foreach (var pointCloud in obj.added)
		List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* L_0;
		L_0 = ARPointCloudChangedEventArgs_get_added_m74DFD8ED4B3EADB5AC29DD0E748C84C6FA26DDE9_inline((&___obj0), NULL);
		NullCheck(L_0);
		Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 L_1;
		L_1 = List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3(L_0, List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F((&V_1), Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_001b_1:
			{
				// foreach (var pointCloud in obj.added)
				ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_2;
				L_2 = Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_inline((&V_1), Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var);
				// foreach (var pos in pointCloud.positions)
				NullCheck(L_2);
				Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 L_3;
				L_3 = ARPointCloud_get_positions_mD1B6C96855B80F0CCF6B32F97CBA75110E6EBEB5(L_2, NULL);
				V_3 = L_3;
				NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_4;
				L_4 = Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C((&V_3), Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var);
				V_4 = L_4;
				Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 L_5;
				L_5 = NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724((&V_4), NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0062_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9((&V_2), Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0057_2;
					}

IL_003b_2:
					{
						// foreach (var pos in pointCloud.positions)
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
						L_6 = Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470((&V_2), Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var);
						V_5 = L_6;
						// detectedPoints.Add(new PointDetection(pos, 0));
						List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_7 = __this->___detectedPoints_8;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_5;
						PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_9 = (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4*)il2cpp_codegen_object_new(PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4_il2cpp_TypeInfo_var);
						NullCheck(L_9);
						PointDetection__ctor_m428FD3652375BB282FDCBC2CC34570624FFC2826(L_9, L_8, 0, NULL);
						NullCheck(L_7);
						List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_inline(L_7, L_9, List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_RuntimeMethod_var);
					}

IL_0057_2:
					{
						// foreach (var pos in pointCloud.positions)
						bool L_10;
						L_10 = Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF((&V_2), Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var);
						if (L_10)
						{
							goto IL_003b_2;
						}
					}
					{
						goto IL_0070_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0070_1:
			{
				// foreach (var pointCloud in obj.added)
				bool L_11;
				L_11 = Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC((&V_1), Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// foreach (var pointCloud in obj.updated)
		List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* L_12;
		L_12 = ARPointCloudChangedEventArgs_get_updated_mD69E67FE8B06AB44B15F42F1D6EFA91F7E58F7C6_inline((&___obj0), NULL);
		NullCheck(L_12);
		Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 L_13;
		L_13 = List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3(L_12, List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F((&V_1), Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ed_1;
			}

IL_0098_1:
			{
				// foreach (var pointCloud in obj.updated)
				ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_14;
				L_14 = Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_inline((&V_1), Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var);
				// foreach (var pos in pointCloud.positions)
				NullCheck(L_14);
				Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 L_15;
				L_15 = ARPointCloud_get_positions_mD1B6C96855B80F0CCF6B32F97CBA75110E6EBEB5(L_14, NULL);
				V_3 = L_15;
				NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_16;
				L_16 = Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C((&V_3), Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var);
				V_4 = L_16;
				Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 L_17;
				L_17 = NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724((&V_4), NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var);
				V_2 = L_17;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00df_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9((&V_2), Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00d4_2;
					}

IL_00b8_2:
					{
						// foreach (var pos in pointCloud.positions)
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
						L_18 = Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470((&V_2), Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var);
						V_6 = L_18;
						// detectedPoints.Add(new PointDetection(pos, 1));
						List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_19 = __this->___detectedPoints_8;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_6;
						PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_21 = (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4*)il2cpp_codegen_object_new(PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4_il2cpp_TypeInfo_var);
						NullCheck(L_21);
						PointDetection__ctor_m428FD3652375BB282FDCBC2CC34570624FFC2826(L_21, L_20, 1, NULL);
						NullCheck(L_19);
						List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_inline(L_19, L_21, List_1_Add_m21FD4BF65246E8596C8D9FA283451820A0BC7471_RuntimeMethod_var);
					}

IL_00d4_2:
					{
						// foreach (var pos in pointCloud.positions)
						bool L_22;
						L_22 = Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF((&V_2), Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var);
						if (L_22)
						{
							goto IL_00b8_2;
						}
					}
					{
						goto IL_00ed_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ed_1:
			{
				// foreach (var pointCloud in obj.updated)
				bool L_23;
				L_23 = Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC((&V_1), Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0098_1;
				}
			}
			{
				goto IL_0106;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0106:
	{
		// List<Vector3> points = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_24, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_24;
		// foreach (var p in detectedPoints)
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_25 = __this->___detectedPoints_8;
		NullCheck(L_25);
		Enumerator_tB8D7619F7D0BFBEF824C2C68DBA7085567D43346 L_26;
		L_26 = List_1_GetEnumerator_m7E3EAE41EC4A5DB161F1841D3F80104BD58AD4EB(L_25, List_1_GetEnumerator_m7E3EAE41EC4A5DB161F1841D3F80104BD58AD4EB_RuntimeMethod_var);
		V_7 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m887220F777547562121F36CBBAFCF985DF111BE7((&V_7), Enumerator_Dispose_m887220F777547562121F36CBBAFCF985DF111BE7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0131_1;
			}

IL_011b_1:
			{
				// foreach (var p in detectedPoints)
				PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_27;
				L_27 = Enumerator_get_Current_mB2245D4DC9A28FEDD05C00A8446B3C102853620D_inline((&V_7), Enumerator_get_Current_mB2245D4DC9A28FEDD05C00A8446B3C102853620D_RuntimeMethod_var);
				V_8 = L_27;
				// points.Add(p.pos);
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_28 = V_0;
				PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* L_29 = V_8;
				NullCheck(L_29);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = PointDetection_get_pos_m2EEFAC4589B8628855A0AB8342B8079C4AABBCA3_inline(L_29, NULL);
				NullCheck(L_28);
				List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_28, L_30, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
			}

IL_0131_1:
			{
				// foreach (var p in detectedPoints)
				bool L_31;
				L_31 = Enumerator_MoveNext_m02916A2F00F7CC17966926AF3DC4DE85050450DB((&V_7), Enumerator_MoveNext_m02916A2F00F7CC17966926AF3DC4DE85050450DB_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_011b_1;
				}
			}
			{
				goto IL_014a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
		// CollectPlanes(points);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = V_0;
		PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950(__this, L_32, NULL);
		// FilterPlanes();
		PointCloudParser_FilterPlanes_m2C2CD7F4FED4BBB555D4134941FFDD1BDFBEA2A1(__this, NULL);
		// countStr.text = $"{planes.Count} planes";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___countStr_6;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_34 = __this->___planes_7;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline(L_34, List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF8F28E4C788EEC5929A5A8D1C53FDF9F447CA3BB, L_37, NULL);
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_38);
		// if (Input.touchCount > 0)
		int32_t L_39;
		L_39 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_02bd;
		}
	}
	{
		// planeClickedPrefab.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___planeClickedPrefab_16;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// detectPlanes = true;
		__this->___detectPlanes_22 = (bool)1;
		// if (planes.Count == 0)
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_41 = __this->___planes_7;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_inline(L_41, List_1_get_Count_m2EB2447E732A06B98B173DC5D000B33CD68057B9_RuntimeMethod_var);
		if (L_42)
		{
			goto IL_01a8;
		}
	}
	{
		// return;
		return;
	}

IL_01a8:
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_43;
		L_43 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_9 = L_43;
		// Ray ray = arCamera.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = __this->___arCamera_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_45, NULL);
		NullCheck(L_44);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_47;
		L_47 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_44, L_46, NULL);
		V_10 = L_47;
		// float enter = 0.0f;
		V_11 = (0.0f);
		// float minEnter = float.MaxValue;
		V_12 = ((std::numeric_limits<float>::max)());
		// Plane minPlane = planes[0].plane;
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_48 = __this->___planes_7;
		NullCheck(L_48);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_49;
		L_49 = List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9(L_48, 0, List_1_get_Item_m272983B4DB4CCED1A20BF820975FC5467706D1C9_RuntimeMethod_var);
		NullCheck(L_49);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_50 = L_49->___plane_0;
		V_13 = L_50;
		// foreach (var pd in planes)
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_51 = __this->___planes_7;
		NullCheck(L_51);
		Enumerator_tF633F9EE702F96833EF7D702FC8DC929EE2028BE L_52;
		L_52 = List_1_GetEnumerator_mB8A1CE32BBA211888E99EE3659ABEC7F02277C12(L_51, List_1_GetEnumerator_mB8A1CE32BBA211888E99EE3659ABEC7F02277C12_RuntimeMethod_var);
		V_16 = L_52;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0232:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8D0E319A0490159EB45480DB421D0A30EC4BBFD2((&V_16), Enumerator_Dispose_m8D0E319A0490159EB45480DB421D0A30EC4BBFD2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0227_1;
			}

IL_01f9_1:
			{
				// foreach (var pd in planes)
				PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_53;
				L_53 = Enumerator_get_Current_mAE8EB16DA01C8CC290E87734D7D3C7F12986270B_inline((&V_16), Enumerator_get_Current_mAE8EB16DA01C8CC290E87734D7D3C7F12986270B_RuntimeMethod_var);
				V_17 = L_53;
				// if (pd.plane.Raycast(ray, out enter))
				PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_54 = V_17;
				NullCheck(L_54);
				Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_55 = (&L_54->___plane_0);
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_56 = V_10;
				bool L_57;
				L_57 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0(L_55, L_56, (&V_11), NULL);
				if (!L_57)
				{
					goto IL_0227_1;
				}
			}
			{
				// if (enter < minEnter)
				float L_58 = V_11;
				float L_59 = V_12;
				if ((!(((float)L_58) < ((float)L_59))))
				{
					goto IL_0227_1;
				}
			}
			{
				// minEnter = enter;
				float L_60 = V_11;
				V_12 = L_60;
				// minPlane = pd.plane;
				PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_61 = V_17;
				NullCheck(L_61);
				Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_62 = L_61->___plane_0;
				V_13 = L_62;
			}

IL_0227_1:
			{
				// foreach (var pd in planes)
				bool L_63;
				L_63 = Enumerator_MoveNext_m9B340EF011639AB7E8F566E5FAD22C05D49E4BF1((&V_16), Enumerator_MoveNext_m9B340EF011639AB7E8F566E5FAD22C05D49E4BF1_RuntimeMethod_var);
				if (L_63)
				{
					goto IL_01f9_1;
				}
			}
			{
				goto IL_0240;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0240:
	{
		// Vector3 hitPoint = ray.GetPoint(minEnter);
		float L_64 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_10), L_64, NULL);
		V_14 = L_65;
		// Vector3 cameraPos = arCameraObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___arCameraObject_20;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		V_15 = L_68;
		// if (!minPlane.GetSide(cameraPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_15;
		bool L_70;
		L_70 = Plane_GetSide_mE71EA98675FA3FA61EAF83A79EA61CFCD6F4F3DC((&V_13), L_69, NULL);
		if (L_70)
		{
			goto IL_0271;
		}
	}
	{
		// minPlane = minPlane.flipped;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_71;
		L_71 = Plane_get_flipped_m6FF1A610C410D1CC82569DE63D3FCE8E6DA32AC7((&V_13), NULL);
		V_13 = L_71;
	}

IL_0271:
	{
		// planeClickedPrefab.transform.position = hitPoint;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___planeClickedPrefab_16;
		NullCheck(L_72);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_14;
		NullCheck(L_73);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_73, L_74, NULL);
		// planeClickedPrefab.transform.rotation = Quaternion.FromToRotation(Vector3.up, minPlane.normal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___planeClickedPrefab_16;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_13), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79;
		L_79 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_77, L_78, NULL);
		NullCheck(L_76);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_76, L_79, NULL);
		// planeClickedPrefab.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___planeClickedPrefab_16;
		NullCheck(L_80);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_80, (bool)1, NULL);
		// detectPlanes = false;
		__this->___detectPlanes_22 = (bool)0;
		// Clear();
		PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1(__this, NULL);
	}

IL_02bd:
	{
		// }
		return;
	}
}
// System.Void PointCloudParser::CollectPlanes(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56A4017EB4B0BB02D1574A5812F93B30590D9D4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_4;
	memset((&V_4), 0, sizeof(V_4));
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_5 = NULL;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		goto IL_0154;
	}

IL_0005:
	{
		// if (points.Count == 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___points0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (points.Count < 3)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___points0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_2, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// Plane bestPlane = new Plane(points[0], points[1], points[2]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = ___points0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_4, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ___points0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, 1, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = ___points0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_8, 2, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Plane__ctor_mBF36EDC369DE0EC29502B4C655CDBAFFB17BD863((&V_0), L_5, L_7, L_9, NULL);
		// List<Vector3> bestInliers = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_10, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_1 = L_10;
		// for (int i = 0; i < maxIter; i++)
		V_3 = 0;
		goto IL_006b;
	}

IL_003e:
	{
		// Plane randomPlane = GetRandomPlane(points);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ___points0;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_12;
		L_12 = PointCloudParser_GetRandomPlane_m65DB675C232493A88CA1D997802EAD768EDACA6B(__this, L_11, NULL);
		V_4 = L_12;
		// List<Vector3> inliers = GetInliers(randomPlane, points);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_13 = V_4;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ___points0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15;
		L_15 = PointCloudParser_GetInliers_m2915314526250023096E86FC71E18D83AA9E7165(__this, L_13, L_14, NULL);
		V_5 = L_15;
		// if (inliers.Count > bestInliers.Count)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_16 = V_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_16, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_18, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_17) <= ((int32_t)L_19)))
		{
			goto IL_0067;
		}
	}
	{
		// bestPlane = randomPlane;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_20 = V_4;
		V_0 = L_20;
		// bestInliers = inliers;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_21 = V_5;
		V_1 = L_21;
	}

IL_0067:
	{
		// for (int i = 0; i < maxIter; i++)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < maxIter; i++)
		int32_t L_23 = V_3;
		int32_t L_24 = __this->___maxIter_11;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		// if (bestInliers.Count < minInliers)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_25, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		int32_t L_27 = __this->___minInliers_10;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0083;
		}
	}
	{
		// return;
		return;
	}

IL_0083:
	{
		// Vector3 center = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// foreach (var i in bestInliers)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_28 = V_1;
		NullCheck(L_28);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_29;
		L_29 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_28, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_6 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_6), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b5_1;
			}

IL_00a3_1:
			{
				// foreach (var i in bestInliers)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_6), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_7 = L_30;
				// center += i;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_32, NULL);
				V_2 = L_33;
			}

IL_00b5_1:
			{
				// foreach (var i in bestInliers)
				bool L_34;
				L_34 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_6), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_00a3_1;
				}
			}
			{
				goto IL_00ce;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		// center /= bestInliers.Count;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_36, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_35, ((float)L_37), NULL);
		V_2 = L_38;
		// planes.Add(new PlaneDetection(
		//     bestPlane,
		//     Instantiate(
		//         planeSzinPrefab,
		//         center,
		//         Quaternion.FromToRotation(Vector3.up, bestPlane.normal)
		//     ),
		//     Instantiate(
		//         planeFonakPrefab,
		//         center,
		//         Quaternion.FromToRotation(Vector3.up, bestPlane.flipped.normal)
		//     )
		// ));
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_39 = __this->___planes_7;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_40 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___planeSzinPrefab_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_43, L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_41, L_42, L_45, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___planeFonakPrefab_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_50;
		L_50 = Plane_get_flipped_m6FF1A610C410D1CC82569DE63D3FCE8E6DA32AC7((&V_0), NULL);
		V_8 = L_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_49, L_51, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_47, L_48, L_52, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* L_54 = (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345*)il2cpp_codegen_object_new(PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		PlaneDetection__ctor_mE5F3C0EBFFF4380E16286DB9F6C5F9F96DB88E53(L_54, L_40, L_46, L_53, NULL);
		NullCheck(L_39);
		List_1_Add_m56A4017EB4B0BB02D1574A5812F93B30590D9D4C_inline(L_39, L_54, List_1_Add_m56A4017EB4B0BB02D1574A5812F93B30590D9D4C_RuntimeMethod_var);
		// for (int i = 0; i < bestInliers.Count; i++)
		V_9 = 0;
		goto IL_014a;
	}

IL_0135:
	{
		// points.Remove(bestInliers[i]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_55 = ___points0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_56 = V_1;
		int32_t L_57 = V_9;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_56, L_57, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_55);
		bool L_59;
		L_59 = List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676(L_55, L_58, List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_RuntimeMethod_var);
		// for (int i = 0; i < bestInliers.Count; i++)
		int32_t L_60 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_014a:
	{
		// for (int i = 0; i < bestInliers.Count; i++)
		int32_t L_61 = V_9;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_62 = V_1;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_62, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_0135;
		}
	}

IL_0154:
	{
		// while (detectPlanes)
		bool L_64 = __this->___detectPlanes_22;
		if (L_64)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Plane PointCloudParser::GetRandomPlane(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C PointCloudParser_GetRandomPlane_m65DB675C232493A88CA1D997802EAD768EDACA6B (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_1 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int[] indices = new int[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		// System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		V_1 = L_1;
		// for (int i = 0; i < 3; i++)
		V_3 = 0;
		goto IL_0024;
	}

IL_0011:
	{
		// indices[i] = random.Next(points.Count);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_3;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = ___points0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_5, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_4, L_6);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_7);
		// for (int i = 0; i < 3; i++)
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_0011;
		}
	}
	{
		// List<Vector3> randomPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_10, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_10;
		// for (int i = 0; i < indices.Length; i++)
		V_4 = 0;
		goto IL_0047;
	}

IL_0033:
	{
		// randomPoints.Add(points[i]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = V_2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = ___points0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_12, L_13, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_14, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < indices.Length; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < indices.Length; i++)
		int32_t L_16 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		// Plane plane = new Plane(randomPoints[0], randomPoints[1], randomPoints[2]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = V_2;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_18, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20 = V_2;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_20, 1, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_22 = V_2;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_22, 2, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_24;
		memset((&L_24), 0, sizeof(L_24));
		Plane__ctor_mBF36EDC369DE0EC29502B4C655CDBAFFB17BD863((&L_24), L_19, L_21, L_23, /*hidden argument*/NULL);
		// return plane;
		return L_24;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> PointCloudParser::GetInliers(UnityEngine.Plane,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* PointCloudParser_GetInliers_m2915314526250023096E86FC71E18D83AA9E7165 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// List<Vector3> inliers = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Vector3 point in points)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___points1;
		NullCheck(L_1);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_2;
		L_2 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_1, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_1), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_000f_1:
			{
				// foreach (Vector3 point in points)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
				L_3 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_1), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_2 = L_3;
				// float dist = Math.Abs(plane.GetDistanceToPoint(point));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_2;
				float L_5;
				L_5 = Plane_GetDistanceToPoint_m43E27525BB203513B13EF35F8EDB3785CA4AE6DC((&___plane0), L_4, NULL);
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				float L_6;
				L_6 = fabsf(L_5);
				// if (dist < minDist)
				float L_7 = __this->___minDist_9;
				if ((!(((float)L_6) < ((float)L_7))))
				{
					goto IL_0033_1;
				}
			}
			{
				// inliers.Add(point);
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
				NullCheck(L_8);
				List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_8, L_9, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
			}

IL_0033_1:
			{
				// foreach (Vector3 point in points)
				bool L_10;
				L_10 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_1), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// return inliers;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = V_0;
		return L_11;
	}
}
// System.Void PointCloudParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser__ctor_mEBB5E6F379DBFCEA2906F7BE92496CB04D6C7D13 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m21897F64C6159E89B4A1DA510C3295757F7FECC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE99AD2D054ABE6DD716F332B9633F894040FDFFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlaneDetection> planes = new List<PlaneDetection>();
		List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1* L_0 = (List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1*)il2cpp_codegen_object_new(List_1_t4599184368801A96BC1487DEFE8D6359B3FF10C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE99AD2D054ABE6DD716F332B9633F894040FDFFC(L_0, List_1__ctor_mE99AD2D054ABE6DD716F332B9633F894040FDFFC_RuntimeMethod_var);
		__this->___planes_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planes_7), (void*)L_0);
		// private List<PointDetection> detectedPoints = new List<PointDetection>();
		List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24* L_1 = (List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24*)il2cpp_codegen_object_new(List_1_tA33AE2E1AAD275FA90D5F33E921AC21D28610A24_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m21897F64C6159E89B4A1DA510C3295757F7FECC3(L_1, List_1__ctor_m21897F64C6159E89B4A1DA510C3295757F7FECC3_RuntimeMethod_var);
		__this->___detectedPoints_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___detectedPoints_8), (void*)L_1);
		// public float minDist = 0.01f;
		__this->___minDist_9 = (0.00999999978f);
		// public int minInliers = 10;
		__this->___minInliers_10 = ((int32_t)10);
		// public int maxIter = 100;
		__this->___maxIter_11 = ((int32_t)100);
		// public int planeLifetime = 1;
		__this->___planeLifetime_12 = 1;
		// public int pointLifetime = 10;
		__this->___pointLifetime_13 = ((int32_t)10);
		// private bool detectPlanes = true;
		__this->___detectPlanes_22 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PointCloudParser/PlaneDetection::.ctor(UnityEngine.Plane,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetection__ctor_mE5F3C0EBFFF4380E16286DB9F6C5F9F96DB88E53 (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___szin1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fonak2, const RuntimeMethod* method) 
{
	{
		// public PlaneDetection(Plane p, GameObject szin, GameObject fonak)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// plane = p;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_0 = ___p0;
		__this->___plane_0 = L_0;
		// spawnedPlaneSzin = szin;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___szin1;
		__this->___spawnedPlaneSzin_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedPlaneSzin_1), (void*)L_1);
		// spawnedPlaneFonak = fonak;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___fonak2;
		__this->___spawnedPlaneFonak_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedPlaneFonak_2), (void*)L_2);
		// age = 1;
		PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Int32 PointCloudParser/PlaneDetection::get_age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92 (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = __this->___U3CageU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void PointCloudParser/PlaneDetection::set_age(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1 (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CageU3Ek__BackingField_3 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PointCloudParser/PointDetection::.ctor(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDetection__ctor_m428FD3652375BB282FDCBC2CC34570624FFC2826 (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___age1, const RuntimeMethod* method) 
{
	{
		// public PointDetection(Vector3 pos, int age)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.pos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		PointDetection_set_pos_mB0631DE69EE3712A54B8640C2ABC16B34B9DC5E7_inline(__this, L_0, NULL);
		// this.age = age;
		int32_t L_1 = ___age1;
		PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 PointCloudParser/PointDetection::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PointDetection_get_pos_m2EEFAC4589B8628855A0AB8342B8079C4AABBCA3 (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 pos { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CposU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void PointCloudParser/PointDetection::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDetection_set_pos_mB0631DE69EE3712A54B8640C2ABC16B34B9DC5E7 (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 pos { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CposU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 PointCloudParser/PointDetection::get_age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = __this->___U3CageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void PointCloudParser/PointDetection::set_age(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127 (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CageU3Ek__BackingField_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92_inline (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = __this->___U3CageU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1_inline (PlaneDetection_tB0ACE0244BAEEAE6C434B618B2CEA12E1C864345* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CageU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = __this->___U3CageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int age { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CageU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ARPointCloudChangedEventArgs_get_added_m74DFD8ED4B3EADB5AC29DD0E748C84C6FA26DDE9_inline (ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARPointCloud> added { get; private set; }
		List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ARPointCloudChangedEventArgs_get_updated_mD69E67FE8B06AB44B15F42F1D6EFA91F7E58F7C6_inline (ARPointCloudChangedEventArgs_t7DE4CA4D30D369496221061F89CC4BF84E42CC1B* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARPointCloud> updated { get; private set; }
		List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PointDetection_get_pos_m2EEFAC4589B8628855A0AB8342B8079C4AABBCA3_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 pos { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CposU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointDetection_set_pos_mB0631DE69EE3712A54B8640C2ABC16B34B9DC5E7_inline (PointDetection_t4308FB71636D3C8B0F1C5CDB78CCF47DB7A9B8D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 pos { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CposU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->____current_3;
		return L_0;
	}
}
