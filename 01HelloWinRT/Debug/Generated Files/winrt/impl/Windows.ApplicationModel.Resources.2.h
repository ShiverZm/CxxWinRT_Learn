// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_ApplicationModel_Resources_2_H
#define WINRT_Windows_ApplicationModel_Resources_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.1.h"
namespace winrt::Windows::ApplicationModel::Resources
{
    struct WINRT_EBO ResourceLoader : Windows::ApplicationModel::Resources::IResourceLoader,
        impl::require<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        ResourceLoader(std::nullptr_t) noexcept {}
        ResourceLoader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Resources::IResourceLoader(ptr, take_ownership_from_abi) {}
        ResourceLoader();
        ResourceLoader(param::hstring const& name);
        static hstring GetStringForReference(Windows::Foundation::Uri const& uri);
        static Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView();
        static Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView(param::hstring const& name);
        static Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse();
        static Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse(param::hstring const& name);
        static Windows::ApplicationModel::Resources::ResourceLoader GetForUIContext(Windows::UI::UIContext const& context);
    };
}
#endif
