// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Phone_System_UserProfile_GameServices_Core_0_H
#define WINRT_Windows_Phone_System_UserProfile_GameServices_Core_0_H
namespace winrt::Windows::Foundation
{
    struct Uri;
    template <typename TResult> struct IAsyncOperation;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Phone::System::UserProfile::GameServices::Core
{
    enum class GameServiceGameOutcome : int32_t
    {
        None = 0,
        Win = 1,
        Loss = 2,
        Tie = 3,
    };
    enum class GameServiceScoreKind : int32_t
    {
        Number = 0,
        Time = 1,
    };
    struct IGameService;
    struct IGameService2;
    struct IGameServicePropertyCollection;
    struct GameService;
    struct GameServicePropertyCollection;
}
namespace winrt::impl
{
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.IGameService" };
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.IGameService2" };
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.IGameServicePropertyCollection" };
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameService>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameService" };
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameServicePropertyCollection" };
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameServiceGameOutcome" };
    };
    template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind>
    {
        static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameServiceScoreKind" };
    };
    template <> struct guid_storage<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
    {
        static constexpr guid value{ 0x2E2D5098,0x48A9,0x4EFC,{ 0xAF,0xD6,0x8E,0x6D,0xA0,0x90,0x03,0xFB } };
    };
    template <> struct guid_storage<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
    {
        static constexpr guid value{ 0xD2364EF6,0xEA17,0x4BE5,{ 0x8D,0x8A,0xC8,0x60,0x88,0x5E,0x05,0x1F } };
    };
    template <> struct guid_storage<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
    {
        static constexpr guid value{ 0x07E57FC8,0xDEBB,0x4609,{ 0x9C,0xC8,0x52,0x9D,0x16,0xBC,0x2B,0xD9 } };
    };
    template <> struct default_interface<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>
    {
        using type = Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection;
    };
    template <> struct abi<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_ServiceUri(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetGamerProfileAsync(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetInstalledGameItemsAsync(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetPartnerTokenAsync(void*, void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetPrivilegesAsync(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GrantAchievement(uint32_t) noexcept = 0;
            virtual int32_t WINRT_CALL GrantAvatarAward(uint32_t) noexcept = 0;
            virtual int32_t WINRT_CALL PostResult(uint32_t, int32_t, int64_t, int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL NotifyPartnerTokenExpired(void*) noexcept = 0;
            virtual int32_t WINRT_CALL GetAuthenticationStatus(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL GetPropertyAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService
    {
        Windows::Foundation::Uri ServiceUri() const;
        Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetGamerProfileAsync() const;
        Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetInstalledGameItemsAsync() const;
        Windows::Foundation::IAsyncOperation<hstring> GetPartnerTokenAsync(Windows::Foundation::Uri const& audienceUri) const;
        Windows::Foundation::IAsyncOperation<hstring> GetPrivilegesAsync() const;
        void GrantAchievement(uint32_t achievementId) const;
        void GrantAvatarAward(uint32_t avatarAwardId) const;
        void PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
    {
        template <typename D> using type = consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2
    {
        void NotifyPartnerTokenExpired(Windows::Foundation::Uri const& audienceUri) const;
        uint32_t GetAuthenticationStatus() const;
    };
    template <> struct consume<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
    {
        template <typename D> using type = consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameServicePropertyCollection
    {
        Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> GetPropertyAsync(param::hstring const& propertyName) const;
    };
    template <> struct consume<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
    {
        template <typename D> using type = consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameServicePropertyCollection<D>;
    };
}
#endif
