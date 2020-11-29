// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Adc_0_H
#define WINRT_Windows_Devices_Adc_0_H
namespace winrt::Windows::Devices::Adc::Provider
{
    struct IAdcProvider;
}
namespace winrt::Windows::Foundation
{
    template <typename TResult> struct IAsyncOperation;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Devices::Adc
{
    enum class AdcChannelMode : int32_t
    {
        SingleEnded = 0,
        Differential = 1,
    };
    struct IAdcChannel;
    struct IAdcController;
    struct IAdcControllerStatics;
    struct IAdcControllerStatics2;
    struct AdcChannel;
    struct AdcController;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Adc::IAdcChannel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Adc::IAdcController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Adc::IAdcControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Adc::IAdcControllerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Adc::AdcChannel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Adc::AdcController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Adc::AdcChannelMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Adc::IAdcChannel>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.IAdcChannel" };
    };
    template <> struct name<Windows::Devices::Adc::IAdcController>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.IAdcController" };
    };
    template <> struct name<Windows::Devices::Adc::IAdcControllerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.IAdcControllerStatics" };
    };
    template <> struct name<Windows::Devices::Adc::IAdcControllerStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.IAdcControllerStatics2" };
    };
    template <> struct name<Windows::Devices::Adc::AdcChannel>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.AdcChannel" };
    };
    template <> struct name<Windows::Devices::Adc::AdcController>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.AdcController" };
    };
    template <> struct name<Windows::Devices::Adc::AdcChannelMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.AdcChannelMode" };
    };
    template <> struct guid_storage<Windows::Devices::Adc::IAdcChannel>
    {
        static constexpr guid value{ 0x040BF414,0x2588,0x4A56,{ 0xAB,0xEF,0x73,0xA2,0x60,0xAC,0xC6,0x0A } };
    };
    template <> struct guid_storage<Windows::Devices::Adc::IAdcController>
    {
        static constexpr guid value{ 0x2A76E4B0,0xA896,0x4219,{ 0x86,0xB6,0xEA,0x8C,0xDC,0xE9,0x8F,0x56 } };
    };
    template <> struct guid_storage<Windows::Devices::Adc::IAdcControllerStatics>
    {
        static constexpr guid value{ 0xCCE98E0C,0x01F8,0x4891,{ 0xBC,0x3B,0xBE,0x53,0xEF,0x27,0x9C,0xA4 } };
    };
    template <> struct guid_storage<Windows::Devices::Adc::IAdcControllerStatics2>
    {
        static constexpr guid value{ 0xA2B93B1D,0x977B,0x4F5A,{ 0xA5,0xFE,0xA6,0xAB,0xAF,0xFE,0x64,0x84 } };
    };
    template <> struct default_interface<Windows::Devices::Adc::AdcChannel>
    {
        using type = Windows::Devices::Adc::IAdcChannel;
    };
    template <> struct default_interface<Windows::Devices::Adc::AdcController>
    {
        using type = Windows::Devices::Adc::IAdcController;
    };
    template <> struct abi<Windows::Devices::Adc::IAdcChannel>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Controller(void**) noexcept = 0;
            virtual int32_t WINRT_CALL ReadValue(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL ReadRatio(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Adc::IAdcController>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_ChannelCount(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_ResolutionInBits(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_MinValue(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_MaxValue(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_ChannelMode(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL put_ChannelMode(int32_t) noexcept = 0;
            virtual int32_t WINRT_CALL IsChannelModeSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t WINRT_CALL OpenChannel(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Adc::IAdcControllerStatics>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL GetControllersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Adc::IAdcControllerStatics2>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcChannel
    {
        Windows::Devices::Adc::AdcController Controller() const;
        int32_t ReadValue() const;
        double ReadRatio() const;
    };
    template <> struct consume<Windows::Devices::Adc::IAdcChannel>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcChannel<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcController
    {
        int32_t ChannelCount() const;
        int32_t ResolutionInBits() const;
        int32_t MinValue() const;
        int32_t MaxValue() const;
        Windows::Devices::Adc::AdcChannelMode ChannelMode() const;
        void ChannelMode(Windows::Devices::Adc::AdcChannelMode const& value) const;
        bool IsChannelModeSupported(Windows::Devices::Adc::AdcChannelMode const& channelMode) const;
        Windows::Devices::Adc::AdcChannel OpenChannel(int32_t channelNumber) const;
    };
    template <> struct consume<Windows::Devices::Adc::IAdcController>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcControllerStatics
    {
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider) const;
    };
    template <> struct consume<Windows::Devices::Adc::IAdcControllerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcControllerStatics2
    {
        Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::Adc::IAdcControllerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcControllerStatics2<D>;
    };
}
#endif
