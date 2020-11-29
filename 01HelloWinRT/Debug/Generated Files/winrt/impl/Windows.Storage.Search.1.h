// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Storage_Search_1_H
#define WINRT_Windows_Storage_Search_1_H
#include "winrt/impl/Windows.Storage.Search.0.h"
namespace winrt::Windows::Storage::Search
{
    struct WINRT_EBO IContentIndexer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentIndexer>
    {
        IContentIndexer(std::nullptr_t = nullptr) noexcept {}
        IContentIndexer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IContentIndexerQuery :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentIndexerQuery>
    {
        IContentIndexerQuery(std::nullptr_t = nullptr) noexcept {}
        IContentIndexerQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IContentIndexerQueryOperations :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentIndexerQueryOperations>
    {
        IContentIndexerQueryOperations(std::nullptr_t = nullptr) noexcept {}
        IContentIndexerQueryOperations(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IContentIndexerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentIndexerStatics>
    {
        IContentIndexerStatics(std::nullptr_t = nullptr) noexcept {}
        IContentIndexerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IIndexableContent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIndexableContent>
    {
        IIndexableContent(std::nullptr_t = nullptr) noexcept {}
        IIndexableContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IQueryOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IQueryOptions>
    {
        IQueryOptions(std::nullptr_t = nullptr) noexcept {}
        IQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IQueryOptionsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IQueryOptionsFactory>
    {
        IQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
        IQueryOptionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IQueryOptionsWithProviderFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IQueryOptionsWithProviderFilter>
    {
        IQueryOptionsWithProviderFilter(std::nullptr_t = nullptr) noexcept {}
        IQueryOptionsWithProviderFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageFileQueryResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageFileQueryResult>,
        impl::require<Windows::Storage::Search::IStorageFileQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
    {
        IStorageFileQueryResult(std::nullptr_t = nullptr) noexcept {}
        IStorageFileQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageFileQueryResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageFileQueryResult2>,
        impl::require<Windows::Storage::Search::IStorageFileQueryResult2, Windows::Storage::Search::IStorageQueryResultBase>
    {
        IStorageFileQueryResult2(std::nullptr_t = nullptr) noexcept {}
        IStorageFileQueryResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageFolderQueryOperations :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageFolderQueryOperations>
    {
        IStorageFolderQueryOperations(std::nullptr_t = nullptr) noexcept {}
        IStorageFolderQueryOperations(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageFolderQueryResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageFolderQueryResult>,
        impl::require<Windows::Storage::Search::IStorageFolderQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
    {
        IStorageFolderQueryResult(std::nullptr_t = nullptr) noexcept {}
        IStorageFolderQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageItemQueryResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemQueryResult>,
        impl::require<Windows::Storage::Search::IStorageItemQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
    {
        IStorageItemQueryResult(std::nullptr_t = nullptr) noexcept {}
        IStorageItemQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageLibraryChangeTrackerTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageLibraryChangeTrackerTriggerDetails>
    {
        IStorageLibraryChangeTrackerTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IStorageLibraryChangeTrackerTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageLibraryContentChangedTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageLibraryContentChangedTriggerDetails>
    {
        IStorageLibraryContentChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IStorageLibraryContentChangedTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStorageQueryResultBase :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageQueryResultBase>
    {
        IStorageQueryResultBase(std::nullptr_t = nullptr) noexcept {}
        IStorageQueryResultBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IValueAndLanguage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IValueAndLanguage>
    {
        IValueAndLanguage(std::nullptr_t = nullptr) noexcept {}
        IValueAndLanguage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
