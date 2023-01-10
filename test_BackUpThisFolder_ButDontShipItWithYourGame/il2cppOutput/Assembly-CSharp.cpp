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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARPointCloud[]
struct ARPointCloudU5BU5D_tD64665DDD0344C5780D4BDC332717DA27CEF1CE0;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
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
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
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
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral524A0C2A2D5A2396F3447D60E7CD21E48558187A;
IL2CPP_EXTERN_C String_t* _stringLiteral80604FAC22A99A68463F71721778B2D3737538DB;
IL2CPP_EXTERN_C String_t* _stringLiteralF173A3D1292412F8C32EA178E14C13936107559F;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F28E4C788EEC5929A5A8D1C53FDF9F447CA3BB;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
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

// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>
struct Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
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
	// UnityEngine.XR.ARFoundation.ARPlaneManager PointCloudParser::arPlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___arPlaneManager_5;
	// UnityEngine.UI.Text PointCloudParser::countStr
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___countStr_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PointCloudParser::planes
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___planes_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PointCloudParser::inliers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___inliers_8;
	// System.Boolean PointCloudParser::verbose
	bool ___verbose_9;
	// System.Single PointCloudParser::minDist
	float ___minDist_10;
	// System.Int32 PointCloudParser::minInliers
	int32_t ___minInliers_11;
	// System.Int32 PointCloudParser::maxIter
	int32_t ___maxIter_12;
	// UnityEngine.GameObject PointCloudParser::planeSzinPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeSzinPrefab_13;
	// UnityEngine.GameObject PointCloudParser::planeFonakPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeFonakPrefab_14;
	// UnityEngine.GameObject PointCloudParser::pointPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointPrefab_15;
	// UnityEngine.UI.Button PointCloudParser::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_16;
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.Collections.NativeSlice`1<UnityEngine.Vector3>>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_gshared (Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1/Enumerator<T> Unity.Collections.NativeSlice`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_gshared (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_gshared (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeSlice`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_gshared (Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
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
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
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
// System.Void PointCloudParser::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) ;
// System.Void PointCloudParser::CollectPlanes(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Plane UnityEngine.Plane::get_flipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C Plane_get_flipped_m6FF1A610C410D1CC82569DE63D3FCE8E6DA32AC7 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
inline bool List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_gshared)(__this, ___item0, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Plane::GetDistanceToPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_GetDistanceToPoint_m43E27525BB203513B13EF35F8EDB3785CA4AE6DC (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___button_16;
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
// System.Void PointCloudParser::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var i in inliers)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___inliers_8;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var i in inliers)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(i);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var i in inliers)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// foreach (var p in planes)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___planes_7;
		NullCheck(L_4);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_5;
		L_5 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_4, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004d_1;
			}

IL_0041_1:
			{
				// foreach (var p in planes)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(p);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
			}

IL_004d_1:
			{
				// foreach (var p in planes)
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// inliers.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___inliers_8;
		NullCheck(L_8);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_8, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// planes.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___planes_7;
		NullCheck(L_9);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_9, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F28E4C788EEC5929A5A8D1C53FDF9F447CA3BB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// List<Vector3> addedPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var pointCloud in obj.added)
		List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* L_1;
		L_1 = ARPointCloudChangedEventArgs_get_added_m74DFD8ED4B3EADB5AC29DD0E748C84C6FA26DDE9_inline((&___obj0), NULL);
		NullCheck(L_1);
		Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 L_2;
		L_2 = List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3(L_1, List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F((&V_2), Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0015_1:
			{
				// foreach (var pointCloud in obj.added)
				ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_3;
				L_3 = Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_inline((&V_2), Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var);
				// foreach (var pos in pointCloud.positions)
				NullCheck(L_3);
				Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 L_4;
				L_4 = ARPointCloud_get_positions_mD1B6C96855B80F0CCF6B32F97CBA75110E6EBEB5(L_3, NULL);
				V_4 = L_4;
				NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_5;
				L_5 = Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C((&V_4), Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var);
				V_5 = L_5;
				Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 L_6;
				L_6 = NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724((&V_5), NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var);
				V_3 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0052_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9((&V_3), Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0047_2;
					}

IL_0036_2:
					{
						// foreach (var pos in pointCloud.positions)
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
						L_7 = Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470((&V_3), Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var);
						V_6 = L_7;
						// addedPoints.Add(pos);
						List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = V_0;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_6;
						NullCheck(L_8);
						List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_8, L_9, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
					}

IL_0047_2:
					{
						// foreach (var pos in pointCloud.positions)
						bool L_10;
						L_10 = Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF((&V_3), Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var);
						if (L_10)
						{
							goto IL_0036_2;
						}
					}
					{
						goto IL_0060_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0060_1:
			{
				// foreach (var pointCloud in obj.added)
				bool L_11;
				L_11 = Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC((&V_2), Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// List<Vector3> updatedPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_12, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_1 = L_12;
		// foreach (var pointCloud in obj.updated)
		List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* L_13;
		L_13 = ARPointCloudChangedEventArgs_get_updated_mD69E67FE8B06AB44B15F42F1D6EFA91F7E58F7C6_inline((&___obj0), NULL);
		NullCheck(L_13);
		Enumerator_t8FB18A95FE66623BA79D1603327BD092F7242F76 L_14;
		L_14 = List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3(L_13, List_1_GetEnumerator_m10E4E39C1F269D736D9FF31D25E721E64F65EFF3_RuntimeMethod_var);
		V_2 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F((&V_2), Enumerator_Dispose_m25AECF8298BD8158D0FDCFB35FB1F1F63166F76F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d9_1;
			}

IL_008e_1:
			{
				// foreach (var pointCloud in obj.updated)
				ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_15;
				L_15 = Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_inline((&V_2), Enumerator_get_Current_m878F5264E908AFA4C928136147942D85E6C54BA8_RuntimeMethod_var);
				// foreach (var pos in pointCloud.positions)
				NullCheck(L_15);
				Nullable_1_t8E36DA714556A75295117FA891459FC09EA64AA4 L_16;
				L_16 = ARPointCloud_get_positions_mD1B6C96855B80F0CCF6B32F97CBA75110E6EBEB5(L_15, NULL);
				V_4 = L_16;
				NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_17;
				L_17 = Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C((&V_4), Nullable_1_get_Value_m0B786A1358FF6C1E2BB187D6D8354A155148928C_RuntimeMethod_var);
				V_5 = L_17;
				Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 L_18;
				L_18 = NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724((&V_5), NativeSlice_1_GetEnumerator_mF03F6157B3E1B16E162BD931D5B962AB48DC6724_RuntimeMethod_var);
				V_3 = L_18;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00cb_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9((&V_3), Enumerator_Dispose_m1FC3B252477A63C80FD964A9D560C1C516C656F9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00c0_2;
					}

IL_00af_2:
					{
						// foreach (var pos in pointCloud.positions)
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
						L_19 = Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470((&V_3), Enumerator_get_Current_m8F5AFFF0F427D0327051651D964DF450A298D470_RuntimeMethod_var);
						V_7 = L_19;
						// updatedPoints.Add(pos);
						List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20 = V_1;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_7;
						NullCheck(L_20);
						List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_20, L_21, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
					}

IL_00c0_2:
					{
						// foreach (var pos in pointCloud.positions)
						bool L_22;
						L_22 = Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF((&V_3), Enumerator_MoveNext_mF10E25D26D376437F7CC00824A93C0A993BBF3DF_RuntimeMethod_var);
						if (L_22)
						{
							goto IL_00af_2;
						}
					}
					{
						goto IL_00d9_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00d9_1:
			{
				// foreach (var pointCloud in obj.updated)
				bool L_23;
				L_23 = Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC((&V_2), Enumerator_MoveNext_mC331741D586B09E1E2313DB28ABAB1E971C231EC_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_00f2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f2:
	{
		// Clear();
		PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1(__this, NULL);
		// CollectPlanes(updatedPoints);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_1;
		PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950(__this, L_24, NULL);
		// countStr.text = $"{planes.Count} planes";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___countStr_6;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___planes_7;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_26, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF8F28E4C788EEC5929A5A8D1C53FDF9F447CA3BB, L_29, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_30);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524A0C2A2D5A2396F3447D60E7CD21E48558187A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80604FAC22A99A68463F71721778B2D3737538DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF173A3D1292412F8C32EA178E14C13936107559F);
		s_Il2CppMethodInitialized = true;
	}
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	int32_t V_2 = 0;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_3;
	memset((&V_3), 0, sizeof(V_3));
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;

IL_0000:
	{
		// if (points.Count == 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___points0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (verbose) Debug.LogError("No points in point cloud!");
		bool L_2 = __this->___verbose_9;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (verbose) Debug.LogError("No points in point cloud!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral524A0C2A2D5A2396F3447D60E7CD21E48558187A, NULL);
	}

IL_001a:
	{
		// return;
		return;
	}

IL_001b:
	{
		// if (points.Count < 3)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ___points0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_3, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)3)))
		{
			goto IL_0037;
		}
	}
	{
		// if (verbose) Debug.LogError("Not enough points in point cloud!");
		bool L_5 = __this->___verbose_9;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// if (verbose) Debug.LogError("Not enough points in point cloud!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral80604FAC22A99A68463F71721778B2D3737538DB, NULL);
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// Plane bestPlane = new Plane(points[0], points[1], points[2]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ___points0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = ___points0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_8, 1, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ___points0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, 2, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Plane__ctor_mBF36EDC369DE0EC29502B4C655CDBAFFB17BD863((&V_0), L_7, L_9, L_11, NULL);
		// List<Vector3> bestInliers = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_12, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_1 = L_12;
		// for (int i = 0; i < maxIter; i++)
		V_2 = 0;
		goto IL_0087;
	}

IL_005d:
	{
		// Plane randomPlane = GetRandomPlane(points);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = ___points0;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_14;
		L_14 = PointCloudParser_GetRandomPlane_m65DB675C232493A88CA1D997802EAD768EDACA6B(__this, L_13, NULL);
		V_3 = L_14;
		// List<Vector3> inliers = GetInliers(randomPlane, points);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_15 = V_3;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_16 = ___points0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_17;
		L_17 = PointCloudParser_GetInliers_m2915314526250023096E86FC71E18D83AA9E7165(__this, L_15, L_16, NULL);
		V_4 = L_17;
		// if (inliers.Count > bestInliers.Count)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_18, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_20, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_19) <= ((int32_t)L_21)))
		{
			goto IL_0083;
		}
	}
	{
		// bestPlane = randomPlane;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_22 = V_3;
		V_0 = L_22;
		// bestInliers = inliers;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = V_4;
		V_1 = L_23;
	}

IL_0083:
	{
		// for (int i = 0; i < maxIter; i++)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < maxIter; i++)
		int32_t L_25 = V_2;
		int32_t L_26 = __this->___maxIter_12;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		// if (bestInliers.Count < minInliers)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_27, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		int32_t L_29 = __this->___minInliers_11;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00b1;
		}
	}
	{
		// if (verbose) Debug.LogError("Too few inliers!");
		bool L_30 = __this->___verbose_9;
		if (!L_30)
		{
			goto IL_00b0;
		}
	}
	{
		// if (verbose) Debug.LogError("Too few inliers!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF173A3D1292412F8C32EA178E14C13936107559F, NULL);
	}

IL_00b0:
	{
		// return;
		return;
	}

IL_00b1:
	{
		// Vector3 center = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), (0.0f), (0.0f), (0.0f), NULL);
		// foreach (var i in bestInliers)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_31 = V_1;
		NullCheck(L_31);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_32;
		L_32 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_31, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_6 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_6), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e5_1;
			}

IL_00d1_1:
			{
				// foreach (var i in bestInliers)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_6), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_7 = L_33;
				// center += i;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
				L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_35, NULL);
				V_5 = L_36;
			}

IL_00e5_1:
			{
				// foreach (var i in bestInliers)
				bool L_37;
				L_37 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_6), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_00d1_1;
				}
			}
			{
				goto IL_00fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fe:
	{
		// center /= bestInliers.Count;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_5;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_39, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_38, ((float)L_40), NULL);
		V_5 = L_41;
		// planes.Add(Instantiate(
		//     planeSzinPrefab,
		//     center,
		//     Quaternion.FromToRotation(Vector3.up, bestPlane.normal)
		// //new Quaternion(bestPlane.normal.x, bestPlane.normal.y, bestPlane.normal.z, 1)
		// ));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = __this->___planes_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___planeSzinPrefab_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_45, L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_43, L_44, L_47, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_42);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_42, L_48, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// planes.Add(Instantiate(
		//     planeFonakPrefab,
		//     center,
		//     Quaternion.FromToRotation(Vector3.up, bestPlane.flipped.normal)
		// //new Quaternion(bestPlane.flipped.normal.x, bestPlane.flipped.normal.y, bestPlane.flipped.normal.z, 1)
		// ));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_49 = __this->___planes_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___planeFonakPrefab_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_53;
		L_53 = Plane_get_flipped_m6FF1A610C410D1CC82569DE63D3FCE8E6DA32AC7((&V_0), NULL);
		V_8 = L_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_52, L_54, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_50, L_51, L_55, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_49);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_49, L_56, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// foreach (var i in bestInliers)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_57 = V_1;
		NullCheck(L_57);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_58;
		L_58 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_57, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_6 = L_58;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01a4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_6), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0199_1;
			}

IL_0173_1:
			{
				// foreach (var i in bestInliers)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
				L_59 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_6), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_9 = L_59;
				// inliers.Add(Instantiate(pointPrefab, i, Quaternion.identity));
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_60 = __this->___inliers_8;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___pointPrefab_15;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_9;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
				L_63 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
				L_64 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_61, L_62, L_63, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				NullCheck(L_60);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_60, L_64, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_0199_1:
			{
				// foreach (var i in bestInliers)
				bool L_65;
				L_65 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_6), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_65)
				{
					goto IL_0173_1;
				}
			}
			{
				goto IL_01b2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01b2:
	{
		// for (int i = 0; i < bestInliers.Count; i++)
		V_10 = 0;
		goto IL_01cc;
	}

IL_01b7:
	{
		// points.Remove(bestInliers[i]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_66 = ___points0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_67 = V_1;
		int32_t L_68 = V_10;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_67, L_68, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_66);
		bool L_70;
		L_70 = List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676(L_66, L_69, List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_RuntimeMethod_var);
		// for (int i = 0; i < bestInliers.Count; i++)
		int32_t L_71 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_01cc:
	{
		// for (int i = 0; i < bestInliers.Count; i++)
		int32_t L_72 = V_10;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_73, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_01b7;
		}
	}
	{
		// while (true)
		goto IL_0000;
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

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_1), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_000f_1:
			{
				// foreach (Vector3 point in points)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
				L_3 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_1), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_2 = L_3;
				// float dist = plane.GetDistanceToPoint(point);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_2;
				float L_5;
				L_5 = Plane_GetDistanceToPoint_m43E27525BB203513B13EF35F8EDB3785CA4AE6DC((&___plane0), L_4, NULL);
				// if (dist < minDist)
				float L_6 = __this->___minDist_10;
				if ((!(((float)L_5) < ((float)L_6))))
				{
					goto IL_002e_1;
				}
			}
			{
				// inliers.Add(point);
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
				NullCheck(L_7);
				List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_7, L_8, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
			}

IL_002e_1:
			{
				// foreach (Vector3 point in points)
				bool L_9;
				L_9 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_1), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// return inliers;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = V_0;
		return L_10;
	}
}
// System.Void PointCloudParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudParser__ctor_mEBB5E6F379DBFCEA2906F7BE92496CB04D6C7D13 (PointCloudParser_t18887F5D4BBB99935E93ABE37DF1597ADBA5EED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> planes = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___planes_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planes_7), (void*)L_0);
		// public List<GameObject> inliers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___inliers_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inliers_8), (void*)L_1);
		// public float minDist = 0.01f;
		__this->___minDist_10 = (0.00999999978f);
		// public int minInliers = 10;
		__this->___minInliers_11 = ((int32_t)10);
		// public int maxIter = 100;
		__this->___maxIter_12 = ((int32_t)100);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
