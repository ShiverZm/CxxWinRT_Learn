// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_System_Diagnostics_TraceReporting_0_H
#define WINRT_Windows_System_Diagnostics_TraceReporting_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct IMapView;
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::System::Diagnostics::TraceReporting
{
    enum class PlatformDiagnosticActionState : int32_t
    {
        Success = 0,
        FreeNetworkNotAvailable = 1,
        ACPowerNotAvailable = 2,
    };
    enum class PlatformDiagnosticEscalationType : int32_t
    {
        OnCompletion = 0,
        OnFailure = 1,
    };
    enum class PlatformDiagnosticEventBufferLatencies : uint32_t
    {
        Normal = 0x1,
        CostDeferred = 0x2,
        Realtime = 0x4,
    };
    enum class PlatformDiagnosticTracePriority : int32_t
    {
        Normal = 0,
        UserElevated = 1,
    };
    enum class PlatformDiagnosticTraceSlotState : int32_t
    {
        NotRunning = 0,
        Running = 1,
        Throttled = 2,
    };
    enum class PlatformDiagnosticTraceSlotType : int32_t
    {
        Alternative = 0,
        AlwaysOn = 1,
        Mini = 2,
    };
    struct IPlatformDiagnosticActionsStatics;
    struct IPlatformDiagnosticTraceInfo;
    struct IPlatformDiagnosticTraceRuntimeInfo;
    struct PlatformDiagnosticActions;
    struct PlatformDiagnosticTraceInfo;
    struct PlatformDiagnosticTraceRuntimeInfo;
}
namespace winrt::impl
{
    template<> struct is_enum_flag<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies> : std::true_type
    {
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticActionsStatics" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceInfo" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceRuntimeInfo" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActions" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceInfo" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceRuntimeInfo" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActionState" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticEscalationType" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticEventBufferLatencies" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTracePriority" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceSlotState" };
    };
    template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceSlotType" };
    };
    template <> struct guid_storage<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        static constexpr guid value{ 0xC1145CFA,0x9292,0x4267,{ 0x89,0x0A,0x9E,0xA3,0xED,0x07,0x23,0x12 } };
    };
    template <> struct guid_storage<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        static constexpr guid value{ 0xF870ED97,0xD597,0x4BF7,{ 0x88,0xDC,0xCF,0x5C,0x7D,0xC2,0xA1,0xD2 } };
    };
    template <> struct guid_storage<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        static constexpr guid value{ 0x3D4D5E2D,0x01D8,0x4768,{ 0x85,0x54,0x1E,0xB1,0xCA,0x61,0x09,0x86 } };
    };
    template <> struct default_interface<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>
    {
        using type = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo;
    };
    template <> struct default_interface<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>
    {
        using type = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo;
    };
    template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL IsScenarioEnabled(winrt::guid, bool*) noexcept = 0;
            virtual int32_t WINRT_CALL TryEscalateScenario(winrt::guid, int32_t, void*, bool, bool, void*, bool*) noexcept = 0;
            virtual int32_t WINRT_CALL DownloadLatestSettingsForNamespace(void*, void*, bool, bool, bool, int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL GetActiveScenarioList(void**) noexcept = 0;
            virtual int32_t WINRT_CALL ForceUpload(uint32_t, bool, bool, int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL IsTraceRunning(int32_t, winrt::guid, uint64_t, int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL GetActiveTraceRuntime(int32_t, void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetKnownTraceList(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_ScenarioId(winrt::guid*) noexcept = 0;
            virtual int32_t WINRT_CALL get_ProfileHash(uint64_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsExclusive(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsAutoLogger(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL get_MaxTraceDurationFileTime(int64_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_Priority(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_RuntimeFileTime(int64_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_EtwRuntimeFileTime(int64_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics
    {
        bool IsScenarioEnabled(winrt::guid const& scenarioId) const;
        bool TryEscalateScenario(winrt::guid const& scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const& escalationType, param::hstring const& outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, param::map_view<hstring, hstring> const& triggers) const;
        Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState DownloadLatestSettingsForNamespace(param::hstring const& partner, param::hstring const& feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery) const;
        Windows::Foundation::Collections::IVectorView<winrt::guid> GetActiveScenarioList() const;
        Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const& latency, bool uploadOverCostedNetwork, bool uploadOverBattery) const;
        Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType, winrt::guid const& scenarioId, uint64_t traceProfileHash) const;
        Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const;
        Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const;
    };
    template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo
    {
        winrt::guid ScenarioId() const;
        uint64_t ProfileHash() const;
        bool IsExclusive() const;
        bool IsAutoLogger() const;
        int64_t MaxTraceDurationFileTime() const;
        Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority Priority() const;
    };
    template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo
    {
        int64_t RuntimeFileTime() const;
        int64_t EtwRuntimeFileTime() const;
    };
    template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo<D>;
    };
}
#endif
