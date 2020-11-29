// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201026.4

#ifndef WINRT_Windows_Devices_Power_2_H
#define WINRT_Windows_Devices_Power_2_H
#include "winrt/impl/Windows.Devices.Power.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct __declspec(empty_bases) Battery : Windows::Devices::Power::IBattery
    {
        Battery(std::nullptr_t) noexcept {}
        Battery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Power::IBattery(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AggregateBattery();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) BatteryReport : Windows::Devices::Power::IBatteryReport
    {
        BatteryReport(std::nullptr_t) noexcept {}
        BatteryReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Power::IBatteryReport(ptr, take_ownership_from_abi) {}
    };
}
#endif