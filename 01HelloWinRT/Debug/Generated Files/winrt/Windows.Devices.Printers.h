// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Printers_H
#define WINRT_Windows_Devices_Printers_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190404.8"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Printers.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Devices::Printers::PrintSchema consume_Windows_Devices_Printers_IPrint3DDevice<D>::PrintSchema() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrint3DDevice)->get_PrintSchema(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrint3DDeviceStatics)->FromIdAsync(get_abi(deviceId), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>::GetDeviceSelector() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrint3DDeviceStatics)->GetDeviceSelector(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Devices_Printers_IPrintSchema<D>::GetDefaultPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrintSchema)->GetDefaultPrintTicketAsync(&operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Devices_Printers_IPrintSchema<D>::GetCapabilitiesAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrintSchema)->GetCapabilitiesAsync(get_abi(constrainTicket), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Devices_Printers_IPrintSchema<D>::MergeAndValidateWithDefaultPrintTicketAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrintSchema)->MergeAndValidateWithDefaultPrintTicketAsync(get_abi(deltaTicket), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::Printers::IPrint3DDevice> : produce_base<D, Windows::Devices::Printers::IPrint3DDevice>
    {
        int32_t WINRT_CALL get_PrintSchema(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::PrintSchema>(this->shim().PrintSchema());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Printers::IPrint3DDeviceStatics> : produce_base<D, Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        int32_t WINRT_CALL FromIdAsync(void* deviceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetDeviceSelector(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Printers::IPrintSchema> : produce_base<D, Windows::Devices::Printers::IPrintSchema>
    {
        int32_t WINRT_CALL GetDefaultPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().GetDefaultPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetCapabilitiesAsync(void* constrainTicket, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().GetCapabilitiesAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&constrainTicket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL MergeAndValidateWithDefaultPrintTicketAsync(void* deltaTicket, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().MergeAndValidateWithDefaultPrintTicketAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&deltaTicket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Printers
{
    inline Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> Print3DDevice::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<Print3DDevice, Windows::Devices::Printers::IPrint3DDeviceStatics>([&](auto&& f) { return f.FromIdAsync(deviceId); });
    }
    inline hstring Print3DDevice::GetDeviceSelector()
    {
        return impl::call_factory<Print3DDevice, Windows::Devices::Printers::IPrint3DDeviceStatics>([&](auto&& f) { return f.GetDeviceSelector(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Printers::IPrint3DDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::IPrint3DDevice> {};
    template<> struct hash<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> {};
    template<> struct hash<winrt::Windows::Devices::Printers::IPrintSchema> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::IPrintSchema> {};
    template<> struct hash<winrt::Windows::Devices::Printers::Print3DDevice> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Print3DDevice> {};
    template<> struct hash<winrt::Windows::Devices::Printers::PrintSchema> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::PrintSchema> {};
}
#endif
