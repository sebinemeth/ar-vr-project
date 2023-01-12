#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void PointCloudParser::OnEnable()
extern void PointCloudParser_OnEnable_m82F68E157200E2C504A8B16A686A135247862141 (void);
// 0x00000002 System.Void PointCloudParser::Age()
extern void PointCloudParser_Age_m5E3C202DDB6CEE61C504C855C90D2AB7F2AFACF3 (void);
// 0x00000003 System.Void PointCloudParser::Clear()
extern void PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1 (void);
// 0x00000004 System.Void PointCloudParser::FilterPlanes()
extern void PointCloudParser_FilterPlanes_m2C2CD7F4FED4BBB555D4134941FFDD1BDFBEA2A1 (void);
// 0x00000005 System.Boolean PointCloudParser::IsSamePlane(UnityEngine.Plane,UnityEngine.Plane)
extern void PointCloudParser_IsSamePlane_m1BB5DC7AAC4228AEF5643EA1CFC82E688028F39A (void);
// 0x00000006 System.Void PointCloudParser::PointCloudChanged(UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs)
extern void PointCloudParser_PointCloudChanged_mC95039EBBE5FEBB2EA55B4E3B851C84F19933AC6 (void);
// 0x00000007 System.Void PointCloudParser::CollectPlanes(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern void PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950 (void);
// 0x00000008 UnityEngine.Plane PointCloudParser::GetRandomPlane(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern void PointCloudParser_GetRandomPlane_m65DB675C232493A88CA1D997802EAD768EDACA6B (void);
// 0x00000009 System.Collections.Generic.List`1<UnityEngine.Vector3> PointCloudParser::GetInliers(UnityEngine.Plane,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern void PointCloudParser_GetInliers_m2915314526250023096E86FC71E18D83AA9E7165 (void);
// 0x0000000A System.Void PointCloudParser::.ctor()
extern void PointCloudParser__ctor_mEBB5E6F379DBFCEA2906F7BE92496CB04D6C7D13 (void);
// 0x0000000B System.Void PointCloudParser/PlaneDetection::.ctor(UnityEngine.Plane,UnityEngine.GameObject,UnityEngine.GameObject)
extern void PlaneDetection__ctor_mE5F3C0EBFFF4380E16286DB9F6C5F9F96DB88E53 (void);
// 0x0000000C System.Int32 PointCloudParser/PlaneDetection::get_age()
extern void PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92 (void);
// 0x0000000D System.Void PointCloudParser/PlaneDetection::set_age(System.Int32)
extern void PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1 (void);
// 0x0000000E System.Void PointCloudParser/PointDetection::.ctor(UnityEngine.Vector3,System.Int32)
extern void PointDetection__ctor_m428FD3652375BB282FDCBC2CC34570624FFC2826 (void);
// 0x0000000F UnityEngine.Vector3 PointCloudParser/PointDetection::get_pos()
extern void PointDetection_get_pos_m2EEFAC4589B8628855A0AB8342B8079C4AABBCA3 (void);
// 0x00000010 System.Void PointCloudParser/PointDetection::set_pos(UnityEngine.Vector3)
extern void PointDetection_set_pos_mB0631DE69EE3712A54B8640C2ABC16B34B9DC5E7 (void);
// 0x00000011 System.Int32 PointCloudParser/PointDetection::get_age()
extern void PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D (void);
// 0x00000012 System.Void PointCloudParser/PointDetection::set_age(System.Int32)
extern void PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127 (void);
static Il2CppMethodPointer s_methodPointers[18] = 
{
	PointCloudParser_OnEnable_m82F68E157200E2C504A8B16A686A135247862141,
	PointCloudParser_Age_m5E3C202DDB6CEE61C504C855C90D2AB7F2AFACF3,
	PointCloudParser_Clear_mA5788FA61FD4D929C0AF609B57F34F5503DF49C1,
	PointCloudParser_FilterPlanes_m2C2CD7F4FED4BBB555D4134941FFDD1BDFBEA2A1,
	PointCloudParser_IsSamePlane_m1BB5DC7AAC4228AEF5643EA1CFC82E688028F39A,
	PointCloudParser_PointCloudChanged_mC95039EBBE5FEBB2EA55B4E3B851C84F19933AC6,
	PointCloudParser_CollectPlanes_m096B1072C8C532ACB0813165129AD13C8A9DE950,
	PointCloudParser_GetRandomPlane_m65DB675C232493A88CA1D997802EAD768EDACA6B,
	PointCloudParser_GetInliers_m2915314526250023096E86FC71E18D83AA9E7165,
	PointCloudParser__ctor_mEBB5E6F379DBFCEA2906F7BE92496CB04D6C7D13,
	PlaneDetection__ctor_mE5F3C0EBFFF4380E16286DB9F6C5F9F96DB88E53,
	PlaneDetection_get_age_m9538578C410A19C238C934DE7FD37EE6657D1F92,
	PlaneDetection_set_age_m45AA6168CFE0D4CDD78D8E4195FD0B623C1F6CE1,
	PointDetection__ctor_m428FD3652375BB282FDCBC2CC34570624FFC2826,
	PointDetection_get_pos_m2EEFAC4589B8628855A0AB8342B8079C4AABBCA3,
	PointDetection_set_pos_mB0631DE69EE3712A54B8640C2ABC16B34B9DC5E7,
	PointDetection_get_age_mF35E53FC3F426F0674F97D98F0CACDD0E3ED730D,
	PointDetection_set_age_mA645591D983879074E508868605E3AD78F55D127,
};
static const int32_t s_InvokerIndices[18] = 
{
	4186,
	4186,
	4186,
	4186,
	1114,
	3312,
	3397,
	3000,
	1386,
	4186,
	978,
	4077,
	3375,
	1892,
	4179,
	3464,
	4077,
	3375,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule = 
{
	"Assembly-CSharp.dll",
	18,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
