// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_ApplicationModel_CommunicationBlocking_1_H
#define WINRT_Windows_ApplicationModel_CommunicationBlocking_1_H
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.0.h"
namespace winrt::Windows::ApplicationModel::CommunicationBlocking
{
    struct WINRT_EBO ICommunicationBlockingAccessManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAccessManagerStatics>
    {
        ICommunicationBlockingAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAccessManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICommunicationBlockingAppManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAppManagerStatics>
    {
        ICommunicationBlockingAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAppManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICommunicationBlockingAppManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAppManagerStatics2>,
        impl::require<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        ICommunicationBlockingAppManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAppManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
