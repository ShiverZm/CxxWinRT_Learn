// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Management_Deployment_Preview_2_H
#define WINRT_Windows_Management_Deployment_Preview_2_H
#include "winrt/impl/Windows.Management.Deployment.Preview.1.h"
namespace winrt::Windows::Management::Deployment::Preview
{
    struct ClassicAppManager
    {
        ClassicAppManager() = delete;
        static Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(param::hstring const& appUninstallKey);
    };
    struct WINRT_EBO InstalledClassicAppInfo : Windows::Management::Deployment::Preview::IInstalledClassicAppInfo
    {
        InstalledClassicAppInfo(std::nullptr_t) noexcept {}
        InstalledClassicAppInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::Preview::IInstalledClassicAppInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
