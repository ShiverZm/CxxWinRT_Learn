// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Haptics_0_H
#define WINRT_Windows_Devices_Haptics_0_H
namespace winrt::Windows::Foundation
{
    template <typename TResult> struct IAsyncOperation;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Devices::Haptics
{
    enum class VibrationAccessStatus : int32_t
    {
        Allowed = 0,
        DeniedByUser = 1,
        DeniedBySystem = 2,
        DeniedByEnergySaver = 3,
    };
    struct IKnownSimpleHapticsControllerWaveformsStatics;
    struct ISimpleHapticsController;
    struct ISimpleHapticsControllerFeedback;
    struct IVibrationDevice;
    struct IVibrationDeviceStatics;
    struct KnownSimpleHapticsControllerWaveforms;
    struct SimpleHapticsController;
    struct SimpleHapticsControllerFeedback;
    struct VibrationDevice;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Haptics::ISimpleHapticsController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Haptics::IVibrationDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Haptics::IVibrationDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Haptics::SimpleHapticsController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Haptics::VibrationDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Haptics::VibrationAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics" };
    };
    template <> struct name<Windows::Devices::Haptics::ISimpleHapticsController>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.ISimpleHapticsController" };
    };
    template <> struct name<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.ISimpleHapticsControllerFeedback" };
    };
    template <> struct name<Windows::Devices::Haptics::IVibrationDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.IVibrationDevice" };
    };
    template <> struct name<Windows::Devices::Haptics::IVibrationDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.IVibrationDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms" };
    };
    template <> struct name<Windows::Devices::Haptics::SimpleHapticsController>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.SimpleHapticsController" };
    };
    template <> struct name<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.SimpleHapticsControllerFeedback" };
    };
    template <> struct name<Windows::Devices::Haptics::VibrationDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.VibrationDevice" };
    };
    template <> struct name<Windows::Devices::Haptics::VibrationAccessStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Haptics.VibrationAccessStatus" };
    };
    template <> struct guid_storage<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
    {
        static constexpr guid value{ 0x3D577EF7,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::Devices::Haptics::ISimpleHapticsController>
    {
        static constexpr guid value{ 0x3D577EF9,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
    {
        static constexpr guid value{ 0x3D577EF8,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::Devices::Haptics::IVibrationDevice>
    {
        static constexpr guid value{ 0x40F21A3E,0x8844,0x47FF,{ 0xB3,0x12,0x06,0x18,0x5A,0x38,0x44,0xDA } };
    };
    template <> struct guid_storage<Windows::Devices::Haptics::IVibrationDeviceStatics>
    {
        static constexpr guid value{ 0x53E2EDED,0x2290,0x4AC9,{ 0x8E,0xB3,0x1A,0x84,0x12,0x2E,0xB7,0x1C } };
    };
    template <> struct default_interface<Windows::Devices::Haptics::SimpleHapticsController>
    {
        using type = Windows::Devices::Haptics::ISimpleHapticsController;
    };
    template <> struct default_interface<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>
    {
        using type = Windows::Devices::Haptics::ISimpleHapticsControllerFeedback;
    };
    template <> struct default_interface<Windows::Devices::Haptics::VibrationDevice>
    {
        using type = Windows::Devices::Haptics::IVibrationDevice;
    };
    template <> struct abi<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Click(uint16_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_BuzzContinuous(uint16_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_RumbleContinuous(uint16_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_Press(uint16_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_Release(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Haptics::ISimpleHapticsController>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Id(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_SupportedFeedback(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsIntensitySupported(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsPlayCountSupported(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsPlayDurationSupported(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsReplayPauseIntervalSupported(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL StopFeedback() noexcept = 0;
            virtual int32_t WINRT_CALL SendHapticFeedback(void*) noexcept = 0;
            virtual int32_t WINRT_CALL SendHapticFeedbackWithIntensity(void*, double) noexcept = 0;
            virtual int32_t WINRT_CALL SendHapticFeedbackForDuration(void*, double, int64_t) noexcept = 0;
            virtual int32_t WINRT_CALL SendHapticFeedbackForPlayCount(void*, double, int32_t, int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Waveform(uint16_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_Duration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Haptics::IVibrationDevice>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Id(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Haptics::IVibrationDeviceStatics>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t WINRT_CALL FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t WINRT_CALL FindAllAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics
    {
        uint16_t Click() const;
        uint16_t BuzzContinuous() const;
        uint16_t RumbleContinuous() const;
        uint16_t Press() const;
        uint16_t Release() const;
    };
    template <> struct consume<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Haptics_ISimpleHapticsController
    {
        hstring Id() const;
        Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> SupportedFeedback() const;
        bool IsIntensitySupported() const;
        bool IsPlayCountSupported() const;
        bool IsPlayDurationSupported() const;
        bool IsReplayPauseIntervalSupported() const;
        void StopFeedback() const;
        void SendHapticFeedback(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback) const;
        void SendHapticFeedback(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity) const;
        void SendHapticFeedbackForDuration(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity, Windows::Foundation::TimeSpan const& playDuration) const;
        void SendHapticFeedbackForPlayCount(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity, int32_t playCount, Windows::Foundation::TimeSpan const& replayPauseInterval) const;
    };
    template <> struct consume<Windows::Devices::Haptics::ISimpleHapticsController>
    {
        template <typename D> using type = consume_Windows_Devices_Haptics_ISimpleHapticsController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback
    {
        uint16_t Waveform() const;
        Windows::Foundation::TimeSpan Duration() const;
    };
    template <> struct consume<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
    {
        template <typename D> using type = consume_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Haptics_IVibrationDevice
    {
        hstring Id() const;
        Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
    };
    template <> struct consume<Windows::Devices::Haptics::IVibrationDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Haptics_IVibrationDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Haptics_IVibrationDeviceStatics
    {
        Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> RequestAccessAsync() const;
        hstring GetDeviceSelector() const;
        Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> FromIdAsync(param::hstring const& deviceId) const;
        Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> GetDefaultAsync() const;
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> FindAllAsync() const;
    };
    template <> struct consume<Windows::Devices::Haptics::IVibrationDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>;
    };
}
#endif
