// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Media_ContentRestrictions_2_H
#define WINRT_Windows_Media_ContentRestrictions_2_H
#include "winrt/impl/Windows.Media.ContentRestrictions.1.h"
namespace winrt::Windows::Media::ContentRestrictions
{
    struct WINRT_EBO ContentRestrictionsBrowsePolicy : Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy
    {
        ContentRestrictionsBrowsePolicy(std::nullptr_t) noexcept {}
        ContentRestrictionsBrowsePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO RatedContentDescription : Windows::Media::ContentRestrictions::IRatedContentDescription
    {
        RatedContentDescription(std::nullptr_t) noexcept {}
        RatedContentDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IRatedContentDescription(ptr, take_ownership_from_abi) {}
        RatedContentDescription(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category);
    };
    struct WINRT_EBO RatedContentRestrictions : Windows::Media::ContentRestrictions::IRatedContentRestrictions
    {
        RatedContentRestrictions(std::nullptr_t) noexcept {}
        RatedContentRestrictions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IRatedContentRestrictions(ptr, take_ownership_from_abi) {}
        RatedContentRestrictions();
        RatedContentRestrictions(uint32_t maxAgeRating);
    };
}
#endif
