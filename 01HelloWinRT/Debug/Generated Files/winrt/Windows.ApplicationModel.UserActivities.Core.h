// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_ApplicationModel_UserActivities_Core_H
#define WINRT_Windows_ApplicationModel_UserActivities_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190404.8"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.UserActivities.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.Core.2.h"
namespace winrt::impl
{
    template <typename D> Windows::ApplicationModel::UserActivities::UserActivitySession consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<D>::CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics)->CreateUserActivitySessionInBackground(get_abi(activity), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<D>::DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics)->DeleteUserActivitySessionsInTimeRangeAsync(get_abi(channel), get_abi(startTime), get_abi(endTime), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> : produce_base<D, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>
    {
        int32_t WINRT_CALL CreateUserActivitySessionInBackground(void* activity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::UserActivities::UserActivitySession>(this->shim().CreateUserActivitySessionInBackground(*reinterpret_cast<Windows::ApplicationModel::UserActivities::UserActivity const*>(&activity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL DeleteUserActivitySessionsInTimeRangeAsync(void* channel, int64_t startTime, int64_t endTime, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteUserActivitySessionsInTimeRangeAsync(*reinterpret_cast<Windows::ApplicationModel::UserActivities::UserActivityChannel const*>(&channel), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::UserActivities::Core
{
    inline Windows::ApplicationModel::UserActivities::UserActivitySession CoreUserActivityManager::CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity)
    {
        return impl::call_factory<CoreUserActivityManager, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>([&](auto&& f) { return f.CreateUserActivitySessionInBackground(activity); });
    }
    inline Windows::Foundation::IAsyncAction CoreUserActivityManager::DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime)
    {
        return impl::call_factory<CoreUserActivityManager, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>([&](auto&& f) { return f.DeleteUserActivitySessionsInTimeRangeAsync(channel, startTime, endTime); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager> {};
}
#endif
