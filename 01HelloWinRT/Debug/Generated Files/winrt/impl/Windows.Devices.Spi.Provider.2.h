// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Spi_Provider_2_H
#define WINRT_Windows_Devices_Spi_Provider_2_H
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
namespace winrt::Windows::Devices::Spi::Provider
{
    struct WINRT_EBO ProviderSpiConnectionSettings : Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings
    {
        ProviderSpiConnectionSettings(std::nullptr_t) noexcept {}
        ProviderSpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings(ptr, take_ownership_from_abi) {}
        ProviderSpiConnectionSettings(int32_t chipSelectLine);
    };
}
#endif
