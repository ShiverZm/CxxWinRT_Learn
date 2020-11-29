// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Networking_PushNotifications_2_H
#define WINRT_Windows_Networking_PushNotifications_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Networking.PushNotifications.1.h"
namespace winrt::Windows::Networking::PushNotifications
{
    struct WINRT_EBO PushNotificationChannel : Windows::Networking::PushNotifications::IPushNotificationChannel
    {
        PushNotificationChannel(std::nullptr_t) noexcept {}
        PushNotificationChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::PushNotifications::IPushNotificationChannel(ptr, take_ownership_from_abi) {}
    };
    struct PushNotificationChannelManager
    {
        PushNotificationChannelManager() = delete;
        static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId);
        static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId);
        static Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetForUser(Windows::System::User const& user);
        static Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetDefault();
    };
    struct WINRT_EBO PushNotificationChannelManagerForUser : Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser,
        impl::require<PushNotificationChannelManagerForUser, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>
    {
        PushNotificationChannelManagerForUser(std::nullptr_t) noexcept {}
        PushNotificationChannelManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PushNotificationReceivedEventArgs : Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs
    {
        PushNotificationReceivedEventArgs(std::nullptr_t) noexcept {}
        PushNotificationReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO RawNotification : Windows::Networking::PushNotifications::IRawNotification,
        impl::require<RawNotification, Windows::Networking::PushNotifications::IRawNotification2>
    {
        RawNotification(std::nullptr_t) noexcept {}
        RawNotification(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::PushNotifications::IRawNotification(ptr, take_ownership_from_abi) {}
    };
}
#endif
