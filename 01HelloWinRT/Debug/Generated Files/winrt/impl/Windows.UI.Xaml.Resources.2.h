// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_UI_Xaml_Resources_2_H
#define WINRT_Windows_UI_Xaml_Resources_2_H
#include "winrt/impl/Windows.UI.Xaml.Resources.1.h"
namespace winrt::Windows::UI::Xaml::Resources
{
    struct WINRT_EBO CustomXamlResourceLoader : Windows::UI::Xaml::Resources::ICustomXamlResourceLoader,
        impl::require<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        CustomXamlResourceLoader(std::nullptr_t) noexcept {}
        CustomXamlResourceLoader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Resources::ICustomXamlResourceLoader(ptr, take_ownership_from_abi) {}
        CustomXamlResourceLoader();
        static Windows::UI::Xaml::Resources::CustomXamlResourceLoader Current();
        static void Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value);
    };
    template <typename D>
    class ICustomXamlResourceLoaderOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using ICustomXamlResourceLoaderOverrides = winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides;
        Windows::Foundation::IInspectable GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const;
    };
}
#endif
