// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Background_1_H
#define WINRT_Windows_Devices_Background_1_H
#include "winrt/impl/Windows.Devices.Background.0.h"
namespace winrt::Windows::Devices::Background
{
    struct WINRT_EBO IDeviceServicingDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceServicingDetails>
    {
        IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
        IDeviceServicingDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDeviceUseDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceUseDetails>
    {
        IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
        IDeviceUseDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
