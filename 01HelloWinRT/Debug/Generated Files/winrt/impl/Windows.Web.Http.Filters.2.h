// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Web_Http_Filters_2_H
#define WINRT_Windows_Web_Http_Filters_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.Filters.1.h"
namespace winrt::Windows::Web::Http::Filters
{
    struct WINRT_EBO HttpBaseProtocolFilter : Windows::Web::Http::Filters::IHttpBaseProtocolFilter,
        impl::require<HttpBaseProtocolFilter, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4, Windows::Web::Http::Filters::IHttpBaseProtocolFilter5, Windows::Web::Http::Filters::IHttpFilter>
    {
        HttpBaseProtocolFilter(std::nullptr_t) noexcept {}
        HttpBaseProtocolFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Filters::IHttpBaseProtocolFilter(ptr, take_ownership_from_abi) {}
        HttpBaseProtocolFilter();
        static Windows::Web::Http::Filters::HttpBaseProtocolFilter CreateForUser(Windows::System::User const& user);
    };
    struct WINRT_EBO HttpCacheControl : Windows::Web::Http::Filters::IHttpCacheControl
    {
        HttpCacheControl(std::nullptr_t) noexcept {}
        HttpCacheControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Filters::IHttpCacheControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO HttpServerCustomValidationRequestedEventArgs : Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs
    {
        HttpServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
        HttpServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
