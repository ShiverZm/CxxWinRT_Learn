// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201026.4

#ifndef WINRT_Windows_ApplicationModel_CommunicationBlocking_1_H
#define WINRT_Windows_ApplicationModel_CommunicationBlocking_1_H
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::CommunicationBlocking
{
    struct __declspec(empty_bases) ICommunicationBlockingAccessManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAccessManagerStatics>
    {
        ICommunicationBlockingAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAccessManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommunicationBlockingAppManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAppManagerStatics>
    {
        ICommunicationBlockingAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAppManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommunicationBlockingAppManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAppManagerStatics2>,
        impl::require<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        ICommunicationBlockingAppManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAppManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
