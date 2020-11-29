// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Embedded_DeviceLockdown_0_H
#define WINRT_Windows_Embedded_DeviceLockdown_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Embedded::DeviceLockdown
{
    struct IDeviceLockdownProfileInformation;
    struct IDeviceLockdownProfileStatics;
    struct DeviceLockdownProfile;
    struct DeviceLockdownProfileInformation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.IDeviceLockdownProfileInformation" };
    };
    template <> struct name<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.IDeviceLockdownProfileStatics" };
    };
    template <> struct name<Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>
    {
        static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile" };
    };
    template <> struct name<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>
    {
        static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfileInformation" };
    };
    template <> struct guid_storage<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        static constexpr guid value{ 0x7980E14E,0x45B1,0x4A96,{ 0x92,0xFC,0x62,0x75,0x6B,0x73,0x96,0x78 } };
    };
    template <> struct guid_storage<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        static constexpr guid value{ 0x622F6965,0xF9A8,0x41A1,{ 0xA6,0x91,0x88,0xCD,0x80,0xC7,0xA0,0x69 } };
    };
    template <> struct default_interface<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>
    {
        using type = Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation;
    };
    template <> struct abi<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL GetSupportedLockdownProfiles(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetCurrentLockdownProfile(winrt::guid*) noexcept = 0;
            virtual int32_t WINRT_CALL ApplyLockdownProfileAsync(winrt::guid, void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetLockdownProfileInformation(winrt::guid, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation
    {
        hstring Name() const;
    };
    template <> struct consume<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        template <typename D> using type = consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics
    {
        Windows::Foundation::Collections::IVectorView<winrt::guid> GetSupportedLockdownProfiles() const;
        winrt::guid GetCurrentLockdownProfile() const;
        Windows::Foundation::IAsyncAction ApplyLockdownProfileAsync(winrt::guid const& profileID) const;
        Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation GetLockdownProfileInformation(winrt::guid const& profileID) const;
    };
    template <> struct consume<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        template <typename D> using type = consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>;
    };
}
#endif