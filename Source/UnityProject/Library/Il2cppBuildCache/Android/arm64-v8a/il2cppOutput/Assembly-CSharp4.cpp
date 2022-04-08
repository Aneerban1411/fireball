#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Photon.Realtime.PhotonPing
struct PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E;
// PhotonPingManager
struct PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602;
// PhotonView
struct PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845;
// Photon.Realtime.PingMono
struct PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9;
// PunTurnManager
struct PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Region
struct Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B;
// RpsCore
struct RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PhotonNetwork/EventCallback
struct EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6;
// PhotonPingManager/<PingSocket>d__10
struct U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A;
// ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged
struct RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7;
// PlayerScore/<RestartGame>d__4
struct U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9;
// RpsCore/<CycleRemoteHandCoroutine>d__42
struct U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2;
// RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37
struct U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690;

IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m498C1C52E1A0B7E0A3630B5DAC884E47C3737417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPingSocketU3Ed__10_System_Collections_IEnumerator_Reset_m29CFD1353DD530E956CEBD64B3A168174249BF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestartGameU3Ed__4_System_Collections_IEnumerator_Reset_m5A28A754A59E468267CF9D74FD77A720B0EDF1B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m5D39DC7C1CB46FBBF1FFA7A528FB6769C5FABD82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Photon.Realtime.PhotonPing
struct PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean Photon.Realtime.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean Photon.Realtime.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 Photon.Realtime.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] Photon.Realtime.PhotonPing::PingBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PingBytes_4;
	// System.Byte Photon.Realtime.PhotonPing::PingId
	uint8_t ___PingId_5;

public:
	inline static int32_t get_offset_of_DebugString_0() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___DebugString_0)); }
	inline String_t* get_DebugString_0() const { return ___DebugString_0; }
	inline String_t** get_address_of_DebugString_0() { return &___DebugString_0; }
	inline void set_DebugString_0(String_t* value)
	{
		___DebugString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugString_0), (void*)value);
	}

	inline static int32_t get_offset_of_Successful_1() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___Successful_1)); }
	inline bool get_Successful_1() const { return ___Successful_1; }
	inline bool* get_address_of_Successful_1() { return &___Successful_1; }
	inline void set_Successful_1(bool value)
	{
		___Successful_1 = value;
	}

	inline static int32_t get_offset_of_GotResult_2() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___GotResult_2)); }
	inline bool get_GotResult_2() const { return ___GotResult_2; }
	inline bool* get_address_of_GotResult_2() { return &___GotResult_2; }
	inline void set_GotResult_2(bool value)
	{
		___GotResult_2 = value;
	}

	inline static int32_t get_offset_of_PingLength_3() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___PingLength_3)); }
	inline int32_t get_PingLength_3() const { return ___PingLength_3; }
	inline int32_t* get_address_of_PingLength_3() { return &___PingLength_3; }
	inline void set_PingLength_3(int32_t value)
	{
		___PingLength_3 = value;
	}

	inline static int32_t get_offset_of_PingBytes_4() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___PingBytes_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PingBytes_4() const { return ___PingBytes_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PingBytes_4() { return &___PingBytes_4; }
	inline void set_PingBytes_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PingBytes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingBytes_4), (void*)value);
	}

	inline static int32_t get_offset_of_PingId_5() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___PingId_5)); }
	inline uint8_t get_PingId_5() const { return ___PingId_5; }
	inline uint8_t* get_address_of_PingId_5() { return &___PingId_5; }
	inline void set_PingId_5(uint8_t value)
	{
		___PingId_5 = value;
	}
};


// PhotonPingManager
struct PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602  : public RuntimeObject
{
public:
	// System.Boolean PhotonPingManager::UseNative
	bool ___UseNative_0;
	// System.Int32 PhotonPingManager::PingsRunning
	int32_t ___PingsRunning_5;

public:
	inline static int32_t get_offset_of_UseNative_0() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602, ___UseNative_0)); }
	inline bool get_UseNative_0() const { return ___UseNative_0; }
	inline bool* get_address_of_UseNative_0() { return &___UseNative_0; }
	inline void set_UseNative_0(bool value)
	{
		___UseNative_0 = value;
	}

	inline static int32_t get_offset_of_PingsRunning_5() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602, ___PingsRunning_5)); }
	inline int32_t get_PingsRunning_5() const { return ___PingsRunning_5; }
	inline int32_t* get_address_of_PingsRunning_5() { return &___PingsRunning_5; }
	inline void set_PingsRunning_5(int32_t value)
	{
		___PingsRunning_5 = value;
	}
};

struct PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields
{
public:
	// System.Int32 PhotonPingManager::Attempts
	int32_t ___Attempts_1;
	// System.Boolean PhotonPingManager::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt_2;
	// System.Int32 PhotonPingManager::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_3;

public:
	inline static int32_t get_offset_of_Attempts_1() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields, ___Attempts_1)); }
	inline int32_t get_Attempts_1() const { return ___Attempts_1; }
	inline int32_t* get_address_of_Attempts_1() { return &___Attempts_1; }
	inline void set_Attempts_1(int32_t value)
	{
		___Attempts_1 = value;
	}

	inline static int32_t get_offset_of_IgnoreInitialAttempt_2() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields, ___IgnoreInitialAttempt_2)); }
	inline bool get_IgnoreInitialAttempt_2() const { return ___IgnoreInitialAttempt_2; }
	inline bool* get_address_of_IgnoreInitialAttempt_2() { return &___IgnoreInitialAttempt_2; }
	inline void set_IgnoreInitialAttempt_2(bool value)
	{
		___IgnoreInitialAttempt_2 = value;
	}

	inline static int32_t get_offset_of_MaxMilliseconsPerPing_3() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields, ___MaxMilliseconsPerPing_3)); }
	inline int32_t get_MaxMilliseconsPerPing_3() const { return ___MaxMilliseconsPerPing_3; }
	inline int32_t* get_address_of_MaxMilliseconsPerPing_3() { return &___MaxMilliseconsPerPing_3; }
	inline void set_MaxMilliseconsPerPing_3(int32_t value)
	{
		___MaxMilliseconsPerPing_3 = value;
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// PhotonPingManager/<PingSocket>d__10
struct U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A  : public RuntimeObject
{
public:
	// System.Int32 PhotonPingManager/<PingSocket>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PhotonPingManager/<PingSocket>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Region PhotonPingManager/<PingSocket>d__10::region
	Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * ___region_2;
	// PhotonPingManager PhotonPingManager/<PingSocket>d__10::<>4__this
	PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * ___U3CU3E4__this_3;
	// Photon.Realtime.PhotonPing PhotonPingManager/<PingSocket>d__10::<ping>5__2
	PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * ___U3CpingU3E5__2_4;
	// System.Single PhotonPingManager/<PingSocket>d__10::<rttSum>5__3
	float ___U3CrttSumU3E5__3_5;
	// System.Int32 PhotonPingManager/<PingSocket>d__10::<replyCount>5__4
	int32_t ___U3CreplyCountU3E5__4_6;
	// System.String PhotonPingManager/<PingSocket>d__10::<regionAddress>5__5
	String_t* ___U3CregionAddressU3E5__5_7;
	// System.Int32 PhotonPingManager/<PingSocket>d__10::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Boolean PhotonPingManager/<PingSocket>d__10::<overtime>5__7
	bool ___U3CovertimeU3E5__7_9;
	// System.Diagnostics.Stopwatch PhotonPingManager/<PingSocket>d__10::<sw>5__8
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CswU3E5__8_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_region_2() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___region_2)); }
	inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * get_region_2() const { return ___region_2; }
	inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B ** get_address_of_region_2() { return &___region_2; }
	inline void set_region_2(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * value)
	{
		___region_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CU3E4__this_3)); }
	inline PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpingU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CpingU3E5__2_4)); }
	inline PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * get_U3CpingU3E5__2_4() const { return ___U3CpingU3E5__2_4; }
	inline PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E ** get_address_of_U3CpingU3E5__2_4() { return &___U3CpingU3E5__2_4; }
	inline void set_U3CpingU3E5__2_4(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * value)
	{
		___U3CpingU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpingU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CrttSumU3E5__3_5)); }
	inline float get_U3CrttSumU3E5__3_5() const { return ___U3CrttSumU3E5__3_5; }
	inline float* get_address_of_U3CrttSumU3E5__3_5() { return &___U3CrttSumU3E5__3_5; }
	inline void set_U3CrttSumU3E5__3_5(float value)
	{
		___U3CrttSumU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CreplyCountU3E5__4_6)); }
	inline int32_t get_U3CreplyCountU3E5__4_6() const { return ___U3CreplyCountU3E5__4_6; }
	inline int32_t* get_address_of_U3CreplyCountU3E5__4_6() { return &___U3CreplyCountU3E5__4_6; }
	inline void set_U3CreplyCountU3E5__4_6(int32_t value)
	{
		___U3CreplyCountU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CregionAddressU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CregionAddressU3E5__5_7)); }
	inline String_t* get_U3CregionAddressU3E5__5_7() const { return ___U3CregionAddressU3E5__5_7; }
	inline String_t** get_address_of_U3CregionAddressU3E5__5_7() { return &___U3CregionAddressU3E5__5_7; }
	inline void set_U3CregionAddressU3E5__5_7(String_t* value)
	{
		___U3CregionAddressU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CregionAddressU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CiU3E5__6_8)); }
	inline int32_t get_U3CiU3E5__6_8() const { return ___U3CiU3E5__6_8; }
	inline int32_t* get_address_of_U3CiU3E5__6_8() { return &___U3CiU3E5__6_8; }
	inline void set_U3CiU3E5__6_8(int32_t value)
	{
		___U3CiU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CovertimeU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CovertimeU3E5__7_9)); }
	inline bool get_U3CovertimeU3E5__7_9() const { return ___U3CovertimeU3E5__7_9; }
	inline bool* get_address_of_U3CovertimeU3E5__7_9() { return &___U3CovertimeU3E5__7_9; }
	inline void set_U3CovertimeU3E5__7_9(bool value)
	{
		___U3CovertimeU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CswU3E5__8_10)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CswU3E5__8_10() const { return ___U3CswU3E5__8_10; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CswU3E5__8_10() { return &___U3CswU3E5__8_10; }
	inline void set_U3CswU3E5__8_10(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CswU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CswU3E5__8_10), (void*)value);
	}
};


// PlayerScore/<RestartGame>d__4
struct U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9  : public RuntimeObject
{
public:
	// System.Int32 PlayerScore/<RestartGame>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerScore/<RestartGame>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// RpsCore/<CycleRemoteHandCoroutine>d__42
struct U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2  : public RuntimeObject
{
public:
	// System.Int32 RpsCore/<CycleRemoteHandCoroutine>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RpsCore/<CycleRemoteHandCoroutine>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RpsCore RpsCore/<CycleRemoteHandCoroutine>d__42::<>4__this
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2, ___U3CU3E4__this_2)); }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37
struct U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690  : public RuntimeObject
{
public:
	// System.Int32 RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RpsCore RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::<>4__this
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690, ___U3CU3E4__this_2)); }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Photon.Realtime.PingMono
struct PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9  : public PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E
{
public:
	// System.Net.Sockets.Socket Photon.Realtime.PingMono::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_6;

public:
	inline static int32_t get_offset_of_sock_6() { return static_cast<int32_t>(offsetof(PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9, ___sock_6)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_6() const { return ___sock_6; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_6() { return &___sock_6; }
	inline void set_sock_6(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_6), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CloudRegionCode
struct CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62 
{
public:
	// System.Int32 CloudRegionCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewPositionModel/ExtrapolateOptions
struct ExtrapolateOptions_tDE7019C598B58B7DAA76C27793E05B8A90E983AC 
{
public:
	// System.Int32 PhotonTransformViewPositionModel/ExtrapolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtrapolateOptions_tDE7019C598B58B7DAA76C27793E05B8A90E983AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewPositionModel/InterpolateOptions
struct InterpolateOptions_tCA7221023DC9B36EABDD19455160BD923D31FEDE 
{
public:
	// System.Int32 PhotonTransformViewPositionModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_tCA7221023DC9B36EABDD19455160BD923D31FEDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewRotationModel/InterpolateOptions
struct InterpolateOptions_tE98EDF151A63EA047CA41425CA6E6ACAC16889DE 
{
public:
	// System.Int32 PhotonTransformViewRotationModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_tE98EDF151A63EA047CA41425CA6E6ACAC16889DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewScaleModel/InterpolateOptions
struct InterpolateOptions_t9FE8530021A82C2E33E947A99AE0C7CEB75F1E3E 
{
public:
	// System.Int32 PhotonTransformViewScaleModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_t9FE8530021A82C2E33E947A99AE0C7CEB75F1E3E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PunTeams/Team
struct Team_t4787E519F79A12C5EA8A8EB53E5F506D237EFEF4 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Team_t4787E519F79A12C5EA8A8EB53E5F506D237EFEF4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// RpsCore/Hand
struct Hand_t867A934119CE28BF196DD7B8DF63D6BA309030EA 
{
public:
	// System.Int32 RpsCore/Hand::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Hand_t867A934119CE28BF196DD7B8DF63D6BA309030EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RpsCore/ResultType
struct ResultType_t0B2FFBA02922127758F192A1E0478563322784BA 
{
public:
	// System.Int32 RpsCore/ResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultType_t0B2FFBA02922127758F192A1E0478563322784BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ServerSettings/HostingOption
struct HostingOption_tF1C311C500FFE220BC1CDD3C36C52CA4B3B29D24 
{
public:
	// System.Int32 ServerSettings/HostingOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostingOption_tF1C311C500FFE220BC1CDD3C36C52CA4B3B29D24, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Region
struct Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B  : public RuntimeObject
{
public:
	// CloudRegionCode Region::Code
	int32_t ___Code_0;
	// System.String Region::Cluster
	String_t* ___Cluster_1;
	// System.String Region::HostAndPort
	String_t* ___HostAndPort_2;
	// System.Int32 Region::Ping
	int32_t ___Ping_3;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Cluster_1() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___Cluster_1)); }
	inline String_t* get_Cluster_1() const { return ___Cluster_1; }
	inline String_t** get_address_of_Cluster_1() { return &___Cluster_1; }
	inline void set_Cluster_1(String_t* value)
	{
		___Cluster_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cluster_1), (void*)value);
	}

	inline static int32_t get_offset_of_HostAndPort_2() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___HostAndPort_2)); }
	inline String_t* get_HostAndPort_2() const { return ___HostAndPort_2; }
	inline String_t** get_address_of_HostAndPort_2() { return &___HostAndPort_2; }
	inline void set_HostAndPort_2(String_t* value)
	{
		___HostAndPort_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HostAndPort_2), (void*)value);
	}

	inline static int32_t get_offset_of_Ping_3() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___Ping_3)); }
	inline int32_t get_Ping_3() const { return ___Ping_3; }
	inline int32_t* get_address_of_Ping_3() { return &___Ping_3; }
	inline void set_Ping_3(int32_t value)
	{
		___Ping_3 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// PhotonNetwork/EventCallback
struct EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged
struct RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Photon.MonoBehaviour
struct MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PhotonView Photon.MonoBehaviour::pvCache
	PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54, ___pvCache_4)); }
	inline PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// PhotonHandler
struct PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_5;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_6;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_7;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_8;

public:
	inline static int32_t get_offset_of_updateInterval_5() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___updateInterval_5)); }
	inline int32_t get_updateInterval_5() const { return ___updateInterval_5; }
	inline int32_t* get_address_of_updateInterval_5() { return &___updateInterval_5; }
	inline void set_updateInterval_5(int32_t value)
	{
		___updateInterval_5 = value;
	}

	inline static int32_t get_offset_of_updateIntervalOnSerialize_6() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___updateIntervalOnSerialize_6)); }
	inline int32_t get_updateIntervalOnSerialize_6() const { return ___updateIntervalOnSerialize_6; }
	inline int32_t* get_address_of_updateIntervalOnSerialize_6() { return &___updateIntervalOnSerialize_6; }
	inline void set_updateIntervalOnSerialize_6(int32_t value)
	{
		___updateIntervalOnSerialize_6 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_7() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___nextSendTickCount_7)); }
	inline int32_t get_nextSendTickCount_7() const { return ___nextSendTickCount_7; }
	inline int32_t* get_address_of_nextSendTickCount_7() { return &___nextSendTickCount_7; }
	inline void set_nextSendTickCount_7(int32_t value)
	{
		___nextSendTickCount_7 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCountOnSerialize_8() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___nextSendTickCountOnSerialize_8)); }
	inline int32_t get_nextSendTickCountOnSerialize_8() const { return ___nextSendTickCountOnSerialize_8; }
	inline int32_t* get_address_of_nextSendTickCountOnSerialize_8() { return &___nextSendTickCountOnSerialize_8; }
	inline void set_nextSendTickCountOnSerialize_8(int32_t value)
	{
		___nextSendTickCountOnSerialize_8 = value;
	}
};

struct PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields
{
public:
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * ___SP_4;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_9;
	// System.Diagnostics.Stopwatch PhotonHandler::timerToStopConnectionInBackground
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___timerToStopConnectionInBackground_10;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_11;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_12;

public:
	inline static int32_t get_offset_of_SP_4() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___SP_4)); }
	inline PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * get_SP_4() const { return ___SP_4; }
	inline PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB ** get_address_of_SP_4() { return &___SP_4; }
	inline void set_SP_4(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * value)
	{
		___SP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SP_4), (void*)value);
	}

	inline static int32_t get_offset_of_sendThreadShouldRun_9() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___sendThreadShouldRun_9)); }
	inline bool get_sendThreadShouldRun_9() const { return ___sendThreadShouldRun_9; }
	inline bool* get_address_of_sendThreadShouldRun_9() { return &___sendThreadShouldRun_9; }
	inline void set_sendThreadShouldRun_9(bool value)
	{
		___sendThreadShouldRun_9 = value;
	}

	inline static int32_t get_offset_of_timerToStopConnectionInBackground_10() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___timerToStopConnectionInBackground_10)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_timerToStopConnectionInBackground_10() const { return ___timerToStopConnectionInBackground_10; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_timerToStopConnectionInBackground_10() { return &___timerToStopConnectionInBackground_10; }
	inline void set_timerToStopConnectionInBackground_10(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___timerToStopConnectionInBackground_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerToStopConnectionInBackground_10), (void*)value);
	}

	inline static int32_t get_offset_of_AppQuits_11() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___AppQuits_11)); }
	inline bool get_AppQuits_11() const { return ___AppQuits_11; }
	inline bool* get_address_of_AppQuits_11() { return &___AppQuits_11; }
	inline void set_AppQuits_11(bool value)
	{
		___AppQuits_11 = value;
	}

	inline static int32_t get_offset_of_PingImplementation_12() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___PingImplementation_12)); }
	inline Type_t * get_PingImplementation_12() const { return ___PingImplementation_12; }
	inline Type_t ** get_address_of_PingImplementation_12() { return &___PingImplementation_12; }
	inline void set_PingImplementation_12(Type_t * value)
	{
		___PingImplementation_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_12), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Photon.PunBehaviour
struct PunBehaviour_t425DC9736400BA4BC890FC00358FEDC32409FD68  : public MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// RpsCore
struct RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7  : public PunBehaviour_t425DC9736400BA4BC890FC00358FEDC32409FD68
{
public:
	// UnityEngine.RectTransform RpsCore::ConnectUiView
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___ConnectUiView_5;
	// UnityEngine.RectTransform RpsCore::GameUiView
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___GameUiView_6;
	// UnityEngine.CanvasGroup RpsCore::ButtonCanvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___ButtonCanvasGroup_7;
	// UnityEngine.RectTransform RpsCore::TimerFillImage
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___TimerFillImage_8;
	// UnityEngine.UI.Text RpsCore::TurnText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TurnText_9;
	// UnityEngine.UI.Text RpsCore::TimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TimeText_10;
	// UnityEngine.UI.Text RpsCore::RemotePlayerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RemotePlayerText_11;
	// UnityEngine.UI.Text RpsCore::LocalPlayerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LocalPlayerText_12;
	// UnityEngine.UI.Image RpsCore::WinOrLossImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___WinOrLossImage_13;
	// UnityEngine.UI.Image RpsCore::localSelectionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___localSelectionImage_14;
	// RpsCore/Hand RpsCore::localSelection
	int32_t ___localSelection_15;
	// UnityEngine.UI.Image RpsCore::remoteSelectionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___remoteSelectionImage_16;
	// RpsCore/Hand RpsCore::remoteSelection
	int32_t ___remoteSelection_17;
	// UnityEngine.Sprite RpsCore::SelectedRock
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SelectedRock_18;
	// UnityEngine.Sprite RpsCore::SelectedPaper
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SelectedPaper_19;
	// UnityEngine.Sprite RpsCore::SelectedScissors
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SelectedScissors_20;
	// UnityEngine.Sprite RpsCore::SpriteWin
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteWin_21;
	// UnityEngine.Sprite RpsCore::SpriteLose
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteLose_22;
	// UnityEngine.Sprite RpsCore::SpriteDraw
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteDraw_23;
	// UnityEngine.RectTransform RpsCore::DisconnectedPanel
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___DisconnectedPanel_24;
	// RpsCore/ResultType RpsCore::result
	int32_t ___result_25;
	// PunTurnManager RpsCore::turnManager
	PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F * ___turnManager_26;
	// RpsCore/Hand RpsCore::randomHand
	int32_t ___randomHand_27;
	// System.Boolean RpsCore::IsShowingResults
	bool ___IsShowingResults_28;

public:
	inline static int32_t get_offset_of_ConnectUiView_5() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___ConnectUiView_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_ConnectUiView_5() const { return ___ConnectUiView_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_ConnectUiView_5() { return &___ConnectUiView_5; }
	inline void set_ConnectUiView_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___ConnectUiView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectUiView_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameUiView_6() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___GameUiView_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_GameUiView_6() const { return ___GameUiView_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_GameUiView_6() { return &___GameUiView_6; }
	inline void set_GameUiView_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___GameUiView_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameUiView_6), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonCanvasGroup_7() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___ButtonCanvasGroup_7)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_ButtonCanvasGroup_7() const { return ___ButtonCanvasGroup_7; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_ButtonCanvasGroup_7() { return &___ButtonCanvasGroup_7; }
	inline void set_ButtonCanvasGroup_7(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___ButtonCanvasGroup_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonCanvasGroup_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimerFillImage_8() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___TimerFillImage_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_TimerFillImage_8() const { return ___TimerFillImage_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_TimerFillImage_8() { return &___TimerFillImage_8; }
	inline void set_TimerFillImage_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___TimerFillImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimerFillImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_TurnText_9() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___TurnText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TurnText_9() const { return ___TurnText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TurnText_9() { return &___TurnText_9; }
	inline void set_TurnText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TurnText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnText_9), (void*)value);
	}

	inline static int32_t get_offset_of_TimeText_10() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___TimeText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TimeText_10() const { return ___TimeText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TimeText_10() { return &___TimeText_10; }
	inline void set_TimeText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TimeText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeText_10), (void*)value);
	}

	inline static int32_t get_offset_of_RemotePlayerText_11() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___RemotePlayerText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RemotePlayerText_11() const { return ___RemotePlayerText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RemotePlayerText_11() { return &___RemotePlayerText_11; }
	inline void set_RemotePlayerText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RemotePlayerText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemotePlayerText_11), (void*)value);
	}

	inline static int32_t get_offset_of_LocalPlayerText_12() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___LocalPlayerText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LocalPlayerText_12() const { return ___LocalPlayerText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LocalPlayerText_12() { return &___LocalPlayerText_12; }
	inline void set_LocalPlayerText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LocalPlayerText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalPlayerText_12), (void*)value);
	}

	inline static int32_t get_offset_of_WinOrLossImage_13() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___WinOrLossImage_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_WinOrLossImage_13() const { return ___WinOrLossImage_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_WinOrLossImage_13() { return &___WinOrLossImage_13; }
	inline void set_WinOrLossImage_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___WinOrLossImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WinOrLossImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_localSelectionImage_14() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___localSelectionImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_localSelectionImage_14() const { return ___localSelectionImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_localSelectionImage_14() { return &___localSelectionImage_14; }
	inline void set_localSelectionImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___localSelectionImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localSelectionImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_localSelection_15() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___localSelection_15)); }
	inline int32_t get_localSelection_15() const { return ___localSelection_15; }
	inline int32_t* get_address_of_localSelection_15() { return &___localSelection_15; }
	inline void set_localSelection_15(int32_t value)
	{
		___localSelection_15 = value;
	}

	inline static int32_t get_offset_of_remoteSelectionImage_16() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___remoteSelectionImage_16)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_remoteSelectionImage_16() const { return ___remoteSelectionImage_16; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_remoteSelectionImage_16() { return &___remoteSelectionImage_16; }
	inline void set_remoteSelectionImage_16(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___remoteSelectionImage_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteSelectionImage_16), (void*)value);
	}

	inline static int32_t get_offset_of_remoteSelection_17() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___remoteSelection_17)); }
	inline int32_t get_remoteSelection_17() const { return ___remoteSelection_17; }
	inline int32_t* get_address_of_remoteSelection_17() { return &___remoteSelection_17; }
	inline void set_remoteSelection_17(int32_t value)
	{
		___remoteSelection_17 = value;
	}

	inline static int32_t get_offset_of_SelectedRock_18() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SelectedRock_18)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SelectedRock_18() const { return ___SelectedRock_18; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SelectedRock_18() { return &___SelectedRock_18; }
	inline void set_SelectedRock_18(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SelectedRock_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedRock_18), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedPaper_19() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SelectedPaper_19)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SelectedPaper_19() const { return ___SelectedPaper_19; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SelectedPaper_19() { return &___SelectedPaper_19; }
	inline void set_SelectedPaper_19(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SelectedPaper_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedPaper_19), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedScissors_20() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SelectedScissors_20)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SelectedScissors_20() const { return ___SelectedScissors_20; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SelectedScissors_20() { return &___SelectedScissors_20; }
	inline void set_SelectedScissors_20(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SelectedScissors_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedScissors_20), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteWin_21() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SpriteWin_21)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteWin_21() const { return ___SpriteWin_21; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteWin_21() { return &___SpriteWin_21; }
	inline void set_SpriteWin_21(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteWin_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteWin_21), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteLose_22() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SpriteLose_22)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteLose_22() const { return ___SpriteLose_22; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteLose_22() { return &___SpriteLose_22; }
	inline void set_SpriteLose_22(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteLose_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteLose_22), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteDraw_23() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SpriteDraw_23)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteDraw_23() const { return ___SpriteDraw_23; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteDraw_23() { return &___SpriteDraw_23; }
	inline void set_SpriteDraw_23(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteDraw_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteDraw_23), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectedPanel_24() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___DisconnectedPanel_24)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_DisconnectedPanel_24() const { return ___DisconnectedPanel_24; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_DisconnectedPanel_24() { return &___DisconnectedPanel_24; }
	inline void set_DisconnectedPanel_24(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___DisconnectedPanel_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectedPanel_24), (void*)value);
	}

	inline static int32_t get_offset_of_result_25() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___result_25)); }
	inline int32_t get_result_25() const { return ___result_25; }
	inline int32_t* get_address_of_result_25() { return &___result_25; }
	inline void set_result_25(int32_t value)
	{
		___result_25 = value;
	}

	inline static int32_t get_offset_of_turnManager_26() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___turnManager_26)); }
	inline PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F * get_turnManager_26() const { return ___turnManager_26; }
	inline PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F ** get_address_of_turnManager_26() { return &___turnManager_26; }
	inline void set_turnManager_26(PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F * value)
	{
		___turnManager_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turnManager_26), (void*)value);
	}

	inline static int32_t get_offset_of_randomHand_27() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___randomHand_27)); }
	inline int32_t get_randomHand_27() const { return ___randomHand_27; }
	inline int32_t* get_address_of_randomHand_27() { return &___randomHand_27; }
	inline void set_randomHand_27(int32_t value)
	{
		___randomHand_27 = value;
	}

	inline static int32_t get_offset_of_IsShowingResults_28() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___IsShowingResults_28)); }
	inline bool get_IsShowingResults_28() const { return ___IsShowingResults_28; }
	inline bool* get_address_of_IsShowingResults_28() { return &___IsShowingResults_28; }
	inline void set_IsShowingResults_28(bool value)
	{
		___IsShowingResults_28 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Photon.Realtime.PingMono::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMono__ctor_mF43BDC17E322F0AD458A6C83EB7F6CA7BB8491F2 (PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String PhotonPingManager::ResolveHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPingManager_ResolveHost_m56CFA0B734BD288767ED20862BBF6E0665C775F7 (String_t* ___hostName0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void RpsCore::StartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpsCore_StartTurn_m4BA719D78935E8F24224BDC8C62C5856D125BCF8 (RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback__ctor_m5612289C700D929042E0C8E674FCAA1DE19FB17C (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_Invoke_m66EC3FB630F22A6DFFEF67C69378FAF93C91BB96 (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, uint8_t ___eventCode0, RuntimeObject * ___content1, int32_t ___senderId2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventCode0, ___content1, ___senderId2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventCode0, ___content1, ___senderId2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(targetMethod, targetThis, ___eventCode0, ___content1, ___senderId2);
					else
						GenericVirtActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(targetMethod, targetThis, ___eventCode0, ___content1, ___senderId2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventCode0, ___content1, ___senderId2);
					else
						VirtActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventCode0, ___content1, ___senderId2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint8_t, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventCode0, ___content1, ___senderId2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventCallback_BeginInvoke_m4D910659F7B933DEE1BD15937ABC6D471F7AA1DC (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, uint8_t ___eventCode0, RuntimeObject * ___content1, int32_t ___senderId2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &___eventCode0);
	__d_args[1] = ___content1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___senderId2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_EndInvoke_mF19C9EF15CA688EAAECE3A8489D1E553A34D2F86 (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PhotonPingManager/<PingSocket>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingSocketU3Ed__10__ctor_m1A7C17A999D897EA8FCADE29EE85FFC9925AC1D7 (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PhotonPingManager/<PingSocket>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingSocketU3Ed__10_System_IDisposable_Dispose_m62DFC4A3D017D06A8A9CD72F741026DC7F1F158B (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PhotonPingManager/<PingSocket>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPingSocketU3Ed__10_MoveNext_m111460DF71137CF8AF8F60FE6A7A6C4422B8E97D (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * V_5 = NULL;
	int32_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Exception_t * G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_01c1;
			}
			case 2:
			{
				goto IL_025c;
			}
			case 3:
			{
				goto IL_02b5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// region.Ping = Attempts*MaxMilliseconsPerPing;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_3 = __this->get_region_2();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_Attempts_1();
		int32_t L_5 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_3();
		NullCheck(L_3);
		L_3->set_Ping_3(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)));
		// this.PingsRunning++; // TODO: Add try-catch to make sure the PingsRunning are reduced at the end and that the lib does not crash the app
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_6 = V_1;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_PingsRunning_5();
		NullCheck(L_6);
		L_6->set_PingsRunning_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// PhotonPing ping = null;
		__this->set_U3CpingU3E5__2_4((PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E *)NULL);
		// if (PhotonHandler.PingImplementation == typeof(PingMono))
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		Type_t * L_9 = ((PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields*)il2cpp_codegen_static_fields_for(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var))->get_PingImplementation_12();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// ping = new PingMono(); // using this type explicitly saves it from IL2CPP bytecode stripping
		PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9 * L_13 = (PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9 *)il2cpp_codegen_object_new(PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_il2cpp_TypeInfo_var);
		PingMono__ctor_mF43BDC17E322F0AD458A6C83EB7F6CA7BB8491F2(L_13, /*hidden argument*/NULL);
		__this->set_U3CpingU3E5__2_4(L_13);
	}

IL_0079:
	{
		// if (ping == null)
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_14 = __this->get_U3CpingU3E5__2_4();
		if (L_14)
		{
			goto IL_0096;
		}
	}
	{
		// ping = (PhotonPing)Activator.CreateInstance(PhotonHandler.PingImplementation);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		Type_t * L_15 = ((PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields*)il2cpp_codegen_static_fields_for(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var))->get_PingImplementation_12();
		RuntimeObject * L_16;
		L_16 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_15, /*hidden argument*/NULL);
		__this->set_U3CpingU3E5__2_4(((PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E *)CastclassClass((RuntimeObject*)L_16, PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E_il2cpp_TypeInfo_var)));
	}

IL_0096:
	{
		// float rttSum = 0.0f;
		__this->set_U3CrttSumU3E5__3_5((0.0f));
		// int replyCount = 0;
		__this->set_U3CreplyCountU3E5__4_6(0);
		// string regionAddress = region.HostAndPort;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_17 = __this->get_region_2();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_HostAndPort_2();
		__this->set_U3CregionAddressU3E5__5_7(L_18);
		// int indexOfColon = regionAddress.LastIndexOf(':');
		String_t* L_19 = __this->get_U3CregionAddressU3E5__5_7();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_19, ((int32_t)58), /*hidden argument*/NULL);
		V_2 = L_20;
		// if (indexOfColon > 1)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_00de;
		}
	}
	{
		// regionAddress = regionAddress.Substring(0, indexOfColon);
		String_t* L_22 = __this->get_U3CregionAddressU3E5__5_7();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_22, 0, L_23, /*hidden argument*/NULL);
		__this->set_U3CregionAddressU3E5__5_7(L_24);
	}

IL_00de:
	{
		// int indexOfProtocol = regionAddress.IndexOf(PhotonPingManager.wssProtocolString);
		String_t* L_25 = __this->get_U3CregionAddressU3E5__5_7();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_25, _stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2, /*hidden argument*/NULL);
		V_3 = L_26;
		// if (indexOfProtocol > -1)
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) <= ((int32_t)(-1))))
		{
			goto IL_0110;
		}
	}
	{
		// regionAddress = regionAddress.Substring(indexOfProtocol+PhotonPingManager.wssProtocolString.Length);
		String_t* L_28 = __this->get_U3CregionAddressU3E5__5_7();
		int32_t L_29 = V_3;
		NullCheck(_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_31;
		L_31 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)), /*hidden argument*/NULL);
		__this->set_U3CregionAddressU3E5__5_7(L_31);
	}

IL_0110:
	{
		// regionAddress = ResolveHost(regionAddress);
		String_t* L_32 = __this->get_U3CregionAddressU3E5__5_7();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = PhotonPingManager_ResolveHost_m56CFA0B734BD288767ED20862BBF6E0665C775F7(L_32, /*hidden argument*/NULL);
		__this->set_U3CregionAddressU3E5__5_7(L_33);
		// for (int i = 0; i < Attempts; i++)
		__this->set_U3CiU3E5__6_8(0);
		goto IL_027c;
	}

IL_012d:
	{
		// bool overtime = false;
		__this->set_U3CovertimeU3E5__7_9((bool)0);
		// Stopwatch sw = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_34 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_34, /*hidden argument*/NULL);
		__this->set_U3CswU3E5__8_10(L_34);
		// sw.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_35 = __this->get_U3CswU3E5__8_10();
		NullCheck(L_35);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_35, /*hidden argument*/NULL);
	}

IL_014a:
	try
	{ // begin try (depth: 1)
		// ping.StartPing(regionAddress);
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_36 = __this->get_U3CpingU3E5__2_4();
		String_t* L_37 = __this->get_U3CregionAddressU3E5__5_7();
		NullCheck(L_36);
		bool L_38;
		L_38 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean Photon.Realtime.PhotonPing::StartPing(System.String) */, L_36, L_37);
		// }
		goto IL_01c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015e;
		}
		throw e;
	}

CATCH_015e:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.Log("catched: " + e);
			Exception_t * L_39 = V_5;
			Exception_t * L_40 = L_39;
			G_B14_0 = L_40;
			G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F));
			if (L_40)
			{
				G_B15_0 = L_40;
				G_B15_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F));
				goto IL_016e;
			}
		}

IL_016a:
		{
			G_B16_0 = ((String_t*)(NULL));
			G_B16_1 = G_B14_1;
			goto IL_0173;
		}

IL_016e:
		{
			NullCheck(G_B15_0);
			String_t* L_41;
			L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B15_0);
			G_B16_0 = L_41;
			G_B16_1 = G_B15_1;
		}

IL_0173:
		{
			String_t* L_42;
			L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B16_1, G_B16_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
			// this.PingsRunning--;
			PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_43 = V_1;
			PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_44 = V_1;
			NullCheck(L_44);
			int32_t L_45 = L_44->get_PingsRunning_5();
			NullCheck(L_43);
			L_43->set_PingsRunning_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
			// break;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_028c;
		}
	} // end catch (depth: 1)

IL_0190:
	{
		// if (sw.ElapsedMilliseconds >= MaxMilliseconsPerPing)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_46 = __this->get_U3CswU3E5__8_10();
		NullCheck(L_46);
		int64_t L_47;
		L_47 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		int32_t L_48 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_3();
		if ((((int64_t)L_47) < ((int64_t)((int64_t)((int64_t)L_48)))))
		{
			goto IL_01ac;
		}
	}
	{
		// overtime = true;
		__this->set_U3CovertimeU3E5__7_9((bool)1);
		// break;
		goto IL_01d5;
	}

IL_01ac:
	{
		// yield return 0; // keep this loop tight, to avoid adding local lag to rtt.
		int32_t L_49 = 0;
		RuntimeObject * L_50 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_49);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01c1:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01c8:
	{
		// while (!ping.Done())
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_51 = __this->get_U3CpingU3E5__2_4();
		NullCheck(L_51);
		bool L_52;
		L_52 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Photon.Realtime.PhotonPing::Done() */, L_51);
		if (!L_52)
		{
			goto IL_0190;
		}
	}

IL_01d5:
	{
		// int rtt = (int)sw.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_53 = __this->get_U3CswU3E5__8_10();
		NullCheck(L_53);
		int64_t L_54;
		L_54 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_53, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_54));
		// if (IgnoreInitialAttempt && i == 0)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		bool L_55 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_IgnoreInitialAttempt_2();
		if (!L_55)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_56 = __this->get_U3CiU3E5__6_8();
		if (!L_56)
		{
			goto IL_0243;
		}
	}

IL_01f2:
	{
		// else if (ping.Successful && !overtime)
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_57 = __this->get_U3CpingU3E5__2_4();
		NullCheck(L_57);
		bool L_58 = L_57->get_Successful_1();
		if (!L_58)
		{
			goto IL_0243;
		}
	}
	{
		bool L_59 = __this->get_U3CovertimeU3E5__7_9();
		if (L_59)
		{
			goto IL_0243;
		}
	}
	{
		// rttSum += rtt;
		float L_60 = __this->get_U3CrttSumU3E5__3_5();
		int32_t L_61 = V_4;
		__this->set_U3CrttSumU3E5__3_5(((float)il2cpp_codegen_add((float)L_60, (float)((float)((float)L_61)))));
		// replyCount++;
		int32_t L_62 = __this->get_U3CreplyCountU3E5__4_6();
		V_6 = L_62;
		int32_t L_63 = V_6;
		__this->set_U3CreplyCountU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
		// region.Ping = (int)((rttSum) / replyCount);
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_64 = __this->get_region_2();
		float L_65 = __this->get_U3CrttSumU3E5__3_5();
		int32_t L_66 = __this->get_U3CreplyCountU3E5__4_6();
		NullCheck(L_64);
		L_64->set_Ping_3(il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)L_65/(float)((float)((float)L_66))))));
	}

IL_0243:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_67 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_67, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_67);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_025c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		__this->set_U3CswU3E5__8_10((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)NULL);
		// for (int i = 0; i < Attempts; i++)
		int32_t L_68 = __this->get_U3CiU3E5__6_8();
		V_6 = L_68;
		int32_t L_69 = V_6;
		__this->set_U3CiU3E5__6_8(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
	}

IL_027c:
	{
		// for (int i = 0; i < Attempts; i++)
		int32_t L_70 = __this->get_U3CiU3E5__6_8();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		int32_t L_71 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_Attempts_1();
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_012d;
		}
	}

IL_028c:
	{
		// ping.Dispose();
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_72 = __this->get_U3CpingU3E5__2_4();
		NullCheck(L_72);
		VirtActionInvoker0::Invoke(7 /* System.Void Photon.Realtime.PhotonPing::Dispose() */, L_72);
		// this.PingsRunning--;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_73 = V_1;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_74 = V_1;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_PingsRunning_5();
		NullCheck(L_73);
		L_73->set_PingsRunning_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02b5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object PhotonPingManager/<PingSocket>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPingSocketU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m76BF775D2AB2EF1D963924D7C091433A200C8AE2 (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PhotonPingManager/<PingSocket>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingSocketU3Ed__10_System_Collections_IEnumerator_Reset_m29CFD1353DD530E956CEBD64B3A168174249BF59 (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPingSocketU3Ed__10_System_Collections_IEnumerator_Reset_m29CFD1353DD530E956CEBD64B3A168174249BF59_RuntimeMethod_var)));
	}
}
// System.Object PhotonPingManager/<PingSocket>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPingSocketU3Ed__10_System_Collections_IEnumerator_get_Current_mE34763C1767DC2E884E19C0D93DD20AC2D67BD6A (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomIndexingChanged__ctor_m7465336E0CA53779097DA78F994CE7AB24C88466 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomIndexingChanged_Invoke_m5B339AB01F644E40D48B103A667B38D42EC502D6 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RoomIndexingChanged_BeginInvoke_m8086D3C1CCEB86E7202B068B1C6B2A6B4158E41B (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomIndexingChanged_EndInvoke_mE476962BF31799BD08E5D54338C38514134AAED3 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerScore/<RestartGame>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameU3Ed__4__ctor_m042219B1A0B1F8E84F02B82B81B657A80CE4D899 (U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerScore/<RestartGame>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameU3Ed__4_System_IDisposable_Dispose_m34CA52A7DBD6548B99F92929B10525D25BC87693 (U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerScore/<RestartGame>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestartGameU3Ed__4_MoveNext_m7640D5C37A3007119B0F5E8B925E898B6F1DB6C7 (U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// {   yield return new WaitForSecondsRealtime(2f);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_3 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_5, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerScore/<RestartGame>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartGameU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7E8EDA79B737CE5D4068B535318428B091066799 (U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerScore/<RestartGame>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameU3Ed__4_System_Collections_IEnumerator_Reset_m5A28A754A59E468267CF9D74FD77A720B0EDF1B4 (U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestartGameU3Ed__4_System_Collections_IEnumerator_Reset_m5A28A754A59E468267CF9D74FD77A720B0EDF1B4_RuntimeMethod_var)));
	}
}
// System.Object PlayerScore/<RestartGame>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartGameU3Ed__4_System_Collections_IEnumerator_get_Current_mE4A1C207EF3A519FEFED2E77DC6878C25E107936 (U3CRestartGameU3Ed__4_t554C5FA982518AF77DFC460908B76B22A5BA2EC9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RpsCore/<CycleRemoteHandCoroutine>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleRemoteHandCoroutineU3Ed__42__ctor_mC9E7B84681306B130A683B80C76BEAD579DA03F4 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RpsCore/<CycleRemoteHandCoroutine>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleRemoteHandCoroutineU3Ed__42_System_IDisposable_Dispose_m150D6FB6B08602972CBD2FDDD679E2D03F89B881 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RpsCore/<CycleRemoteHandCoroutine>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCycleRemoteHandCoroutineU3Ed__42_MoveNext_m825AAD2304D473E4D44CBDF493F02394D335E104 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// this.randomHand = (Hand)Random.Range(1, 4);
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_4 = V_1;
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 4, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_randomHand_27(L_5);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object RpsCore/<CycleRemoteHandCoroutine>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9F2647A8EA3873FE06E39924993D5AA42AE41DE7 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RpsCore/<CycleRemoteHandCoroutine>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m498C1C52E1A0B7E0A3630B5DAC884E47C3737417 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m498C1C52E1A0B7E0A3630B5DAC884E47C3737417_RuntimeMethod_var)));
	}
}
// System.Object RpsCore/<CycleRemoteHandCoroutine>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_get_Current_mDA7130357BF91C21A8D4A1F48A1B0F124DEFD348 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowResultsBeginNextTurnCoroutineU3Ed__37__ctor_mA059F5D9C24480CA04564D8CA5221646F4CF021F (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_IDisposable_Dispose_mA0F0CF34A7F7AAAF8F8551F18ACE8DB34F096DAD (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowResultsBeginNextTurnCoroutineU3Ed__37_MoveNext_mACF8191F6821517CD741BD242FB36C56C50EDECD (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * V_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B7_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B6_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B8_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ButtonCanvasGroup.interactable = false;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_4 = V_1;
		NullCheck(L_4);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = L_4->get_ButtonCanvasGroup_7();
		NullCheck(L_5);
		CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835(L_5, (bool)0, /*hidden argument*/NULL);
		// IsShowingResults = true;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_IsShowingResults_28((bool)1);
		// if (this.result == ResultType.Draw)
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_result_25();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		// this.WinOrLossImage.sprite = this.SpriteDraw;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_9 = V_1;
		NullCheck(L_9);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9->get_WinOrLossImage_13();
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_11 = V_1;
		NullCheck(L_11);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = L_11->get_SpriteDraw_23();
		NullCheck(L_10);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_10, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0072;
	}

IL_0050:
	{
		// this.WinOrLossImage.sprite = this.result == ResultType.LocalWin ? this.SpriteWin : SpriteLose;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_13 = V_1;
		NullCheck(L_13);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = L_13->get_WinOrLossImage_13();
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_result_25();
		G_B6_0 = L_14;
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			G_B7_0 = L_14;
			goto IL_0067;
		}
	}
	{
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_17 = V_1;
		NullCheck(L_17);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = L_17->get_SpriteLose_22();
		G_B8_0 = L_18;
		G_B8_1 = G_B6_0;
		goto IL_006d;
	}

IL_0067:
	{
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_19 = V_1;
		NullCheck(L_19);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_20 = L_19->get_SpriteWin_21();
		G_B8_0 = L_20;
		G_B8_1 = G_B7_0;
	}

IL_006d:
	{
		NullCheck(G_B8_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// this.WinOrLossImage.gameObject.SetActive(true);
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_21 = V_1;
		NullCheck(L_21);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = L_21->get_WinOrLossImage_13();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_24, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// this.StartTurn();
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_25 = V_1;
		NullCheck(L_25);
		RpsCore_StartTurn_m4BA719D78935E8F24224BDC8C62C5856D125BCF8(L_25, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF264B040EDE4CEB05986F37C348DECE1490A2D47 (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m5D39DC7C1CB46FBBF1FFA7A528FB6769C5FABD82 (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m5D39DC7C1CB46FBBF1FFA7A528FB6769C5FABD82_RuntimeMethod_var)));
	}
}
// System.Object RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_get_Current_m4BF11312E0F71E5DB1EDA4A05B3D5BAFB99325E9 (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
