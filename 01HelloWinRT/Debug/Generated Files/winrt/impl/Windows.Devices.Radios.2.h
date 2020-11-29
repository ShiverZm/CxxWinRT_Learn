// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Radios_2_H
#define WINRT_Windows_Devices_Radios_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Radios.1.h"
namespace winrt::Windows::Devices::Radios
{
    struct WINRT_EBO Radio : Windows::Devices::Radios::IRadio
    {
        Radio(std::nullptr_t) noexcept {}
        Radio(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Radios::IRadio(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> GetRadiosAsync();
        static hstring GetDeviceSelector();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> FromIdAsync(param::hstring const& deviceId);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> RequestAccessAsync();
    };
}
#endif