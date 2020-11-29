// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Storage_FileProperties_2_H
#define WINRT_Windows_Storage_FileProperties_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"
namespace winrt::Windows::Storage::FileProperties
{
    struct WINRT_EBO BasicProperties : Windows::Storage::FileProperties::IBasicProperties,
        impl::require<BasicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        BasicProperties(std::nullptr_t) noexcept {}
        BasicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IBasicProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO DocumentProperties : Windows::Storage::FileProperties::IDocumentProperties
    {
        DocumentProperties(std::nullptr_t) noexcept {}
        DocumentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IDocumentProperties(ptr, take_ownership_from_abi) {}
    };
    struct GeotagHelper
    {
        GeotagHelper() = delete;
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> GetGeotagAsync(Windows::Storage::IStorageFile const& file);
        static Windows::Foundation::IAsyncAction SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator);
        static Windows::Foundation::IAsyncAction SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint);
    };
    struct WINRT_EBO ImageProperties : Windows::Storage::FileProperties::IImageProperties
    {
        ImageProperties(std::nullptr_t) noexcept {}
        ImageProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IImageProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MusicProperties : Windows::Storage::FileProperties::IMusicProperties
    {
        MusicProperties(std::nullptr_t) noexcept {}
        MusicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IMusicProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO StorageItemContentProperties : Windows::Storage::FileProperties::IStorageItemContentProperties
    {
        StorageItemContentProperties(std::nullptr_t) noexcept {}
        StorageItemContentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IStorageItemContentProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO StorageItemThumbnail : Windows::Storage::Streams::IRandomAccessStreamWithContentType,
        impl::require<StorageItemThumbnail, Windows::Storage::FileProperties::IThumbnailProperties>
    {
        StorageItemThumbnail(std::nullptr_t) noexcept {}
        StorageItemThumbnail(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStreamWithContentType(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoProperties : Windows::Storage::FileProperties::IVideoProperties
    {
        VideoProperties(std::nullptr_t) noexcept {}
        VideoProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IVideoProperties(ptr, take_ownership_from_abi) {}
    };
}
#endif
