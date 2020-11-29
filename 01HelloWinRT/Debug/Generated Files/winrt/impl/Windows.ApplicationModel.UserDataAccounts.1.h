// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_1_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_1_H
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.0.h"
namespace winrt::Windows::ApplicationModel::UserDataAccounts
{
    struct WINRT_EBO IUserDataAccount :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount>
    {
        IUserDataAccount(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccount2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount2>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        IUserDataAccount2(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccount3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount3>
    {
        IUserDataAccount3(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccount4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount4>
    {
        IUserDataAccount4(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccountManagerForUser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountManagerForUser>
    {
        IUserDataAccountManagerForUser(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccountManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountManagerStatics>
    {
        IUserDataAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccountManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountManagerStatics2>
    {
        IUserDataAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccountStore :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStore>
    {
        IUserDataAccountStore(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IUserDataAccountStore2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStore2>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        IUserDataAccountStore2(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStore2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IUserDataAccountStore2, IUserDataAccountStore2>::CreateAccountAsync;
        using impl::consume_t<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    };
    struct WINRT_EBO IUserDataAccountStore3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStore3>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        IUserDataAccountStore3(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStore3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IUserDataAccountStore3, IUserDataAccountStore3>::CreateAccountAsync;
        using impl::consume_t<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    };
    struct WINRT_EBO IUserDataAccountStoreChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStoreChangedEventArgs>
    {
        IUserDataAccountStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
