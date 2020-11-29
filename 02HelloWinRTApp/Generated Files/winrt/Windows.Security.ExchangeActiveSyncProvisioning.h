// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201026.4

#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201026.4"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201026.4"
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::Id() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_Id(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::OperatingSystem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_OperatingSystem(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemManufacturer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemManufacturer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemProductName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemProductName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemSku() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemSku(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>::SystemHardwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2)->get_SystemHardwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>::SystemFirmwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2)->get_SystemFirmwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        int32_t __stdcall get_Id(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OperatingSystem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OperatingSystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemManufacturer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemManufacturer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemProductName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemProductName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemSku(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemSku());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        int32_t __stdcall get_SystemHardwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemHardwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemFirmwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemFirmwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    inline EasClientDeviceInformation::EasClientDeviceInformation() :
        EasClientDeviceInformation(impl::call_factory_cast<EasClientDeviceInformation(*)(Windows::Foundation::IActivationFactory const&), EasClientDeviceInformation>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<EasClientDeviceInformation>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation> : winrt::impl::hash_base {};
#endif
}
#endif
