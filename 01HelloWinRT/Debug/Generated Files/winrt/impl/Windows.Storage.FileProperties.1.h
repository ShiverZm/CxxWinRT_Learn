// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Storage_FileProperties_1_H
#define WINRT_Windows_Storage_FileProperties_1_H
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
namespace winrt::Windows::Storage::FileProperties
{
    struct WINRT_EBO IBasicProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicProperties>
    {
        IBasicProperties(std::nullptr_t = nullptr) noexcept {}
        IBasicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDocumentProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDocumentProperties>,
        impl::require<Windows::Storage::FileProperties::IDocumentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IDocumentProperties(std::nullptr_t = nullptr) noexcept {}
        IDocumentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeotagHelperStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeotagHelperStatics>
    {
        IGeotagHelperStatics(std::nullptr_t = nullptr) noexcept {}
        IGeotagHelperStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IImageProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageProperties>,
        impl::require<Windows::Storage::FileProperties::IImageProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IImageProperties(std::nullptr_t = nullptr) noexcept {}
        IImageProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMusicProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMusicProperties>,
        impl::require<Windows::Storage::FileProperties::IMusicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IMusicProperties(std::nullptr_t = nullptr) noexcept {}
        IMusicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageItemContentProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemContentProperties>,
        impl::require<Windows::Storage::FileProperties::IStorageItemContentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IStorageItemContentProperties(std::nullptr_t = nullptr) noexcept {}
        IStorageItemContentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageItemExtraProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemExtraProperties>
    {
        IStorageItemExtraProperties(std::nullptr_t = nullptr) noexcept {}
        IStorageItemExtraProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IThumbnailProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IThumbnailProperties>
    {
        IThumbnailProperties(std::nullptr_t = nullptr) noexcept {}
        IThumbnailProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoProperties>,
        impl::require<Windows::Storage::FileProperties::IVideoProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IVideoProperties(std::nullptr_t = nullptr) noexcept {}
        IVideoProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
