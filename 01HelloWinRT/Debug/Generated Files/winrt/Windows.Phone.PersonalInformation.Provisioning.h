// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Phone_PersonalInformation_Provisioning_H
#define WINRT_Windows_Phone_PersonalInformation_Provisioning_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190404.8"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Phone.PersonalInformation.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.Provisioning.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics<D>::AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics)->AssociateNetworkAccountAsync(get_abi(store), get_abi(networkName), get_abi(networkAccountId), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics<D>::ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics)->ImportVcardToSystemAsync(get_abi(stream), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics2<D>::AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2)->AssociateSocialNetworkAccountAsync(get_abi(store), get_abi(networkName), get_abi(networkAccountId), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics<D>::ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime) const
    {
        void* action{};
        check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics)->ImportSmsToSystemAsync(incoming, read, get_abi(body), get_abi(sender), get_abi(recipients), get_abi(deliveryTime), &action));
        return { action, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics<D>::ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments) const
    {
        void* action{};
        check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics)->ImportMmsToSystemAsync(incoming, read, get_abi(subject), get_abi(sender), get_abi(recipients), get_abi(deliveryTime), get_abi(attachments), &action));
        return { action, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>
    {
        int32_t WINRT_CALL AssociateNetworkAccountAsync(void* store, void* networkName, void* networkAccountId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().AssociateNetworkAccountAsync(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStore const*>(&store), *reinterpret_cast<hstring const*>(&networkName), *reinterpret_cast<hstring const*>(&networkAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ImportVcardToSystemAsync(void* stream, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportVcardToSystemAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>
    {
        int32_t WINRT_CALL AssociateSocialNetworkAccountAsync(void* store, void* networkName, void* networkAccountId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().AssociateSocialNetworkAccountAsync(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStore const*>(&store), *reinterpret_cast<hstring const*>(&networkName), *reinterpret_cast<hstring const*>(&networkAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>
    {
        int32_t WINRT_CALL ImportSmsToSystemAsync(bool incoming, bool read, void* body, void* sender, void* recipients, int64_t deliveryTime, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportSmsToSystemAsync(incoming, read, *reinterpret_cast<hstring const*>(&body), *reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&recipients), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ImportMmsToSystemAsync(bool incoming, bool read, void* subject, void* sender, void* recipients, int64_t deliveryTime, void* attachments, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportMmsToSystemAsync(incoming, read, *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&recipients), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const*>(&attachments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Phone::PersonalInformation::Provisioning
{
    inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId)
    {
        return impl::call_factory<ContactPartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>([&](auto&& f) { return f.AssociateNetworkAccountAsync(store, networkName, networkAccountId); });
    }
    inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream)
    {
        return impl::call_factory<ContactPartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>([&](auto&& f) { return f.ImportVcardToSystemAsync(stream); });
    }
    inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId)
    {
        return impl::call_factory<ContactPartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>([&](auto&& f) { return f.AssociateSocialNetworkAccountAsync(store, networkName, networkAccountId); });
    }
    inline Windows::Foundation::IAsyncAction MessagePartnerProvisioningManager::ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime)
    {
        return impl::call_factory<MessagePartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>([&](auto&& f) { return f.ImportSmsToSystemAsync(incoming, read, body, sender, recipients, deliveryTime); });
    }
    inline Windows::Foundation::IAsyncAction MessagePartnerProvisioningManager::ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments)
    {
        return impl::call_factory<MessagePartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>([&](auto&& f) { return f.ImportMmsToSystemAsync(incoming, read, subject, sender, recipients, deliveryTime, attachments); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> : winrt::impl::hash_base<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> {};
    template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> : winrt::impl::hash_base<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> {};
    template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> : winrt::impl::hash_base<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> {};
    template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager> : winrt::impl::hash_base<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager> {};
    template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager> : winrt::impl::hash_base<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager> {};
}
#endif
