// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Security_EnterpriseData_2_H
#define WINRT_Windows_Security_EnterpriseData_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.EnterpriseData.1.h"
namespace winrt::Windows::Security::EnterpriseData
{
    struct WINRT_EBO BufferProtectUnprotectResult : Windows::Security::EnterpriseData::IBufferProtectUnprotectResult
    {
        BufferProtectUnprotectResult(std::nullptr_t) noexcept {}
        BufferProtectUnprotectResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IBufferProtectUnprotectResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO DataProtectionInfo : Windows::Security::EnterpriseData::IDataProtectionInfo
    {
        DataProtectionInfo(std::nullptr_t) noexcept {}
        DataProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IDataProtectionInfo(ptr, take_ownership_from_abi) {}
    };
    struct DataProtectionManager
    {
        DataProtectionManager() = delete;
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> UnprotectAsync(Windows::Storage::Streams::IBuffer const& data);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream);
    };
    struct WINRT_EBO FileProtectionInfo : Windows::Security::EnterpriseData::IFileProtectionInfo,
        impl::require<FileProtectionInfo, Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        FileProtectionInfo(std::nullptr_t) noexcept {}
        FileProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IFileProtectionInfo(ptr, take_ownership_from_abi) {}
    };
    struct FileProtectionManager
    {
        FileProtectionManager() = delete;
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity);
        static Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption);
        static Windows::Foundation::IAsyncOperation<bool> IsContainerAsync(Windows::Storage::IStorageFile const& file);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> UnprotectAsync(Windows::Storage::IStorageItem const& target);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options);
    };
    struct FileRevocationManager
    {
        FileRevocationManager() = delete;
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity);
        static Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem);
        static void Revoke(param::hstring const& enterpriseIdentity);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> GetStatusAsync(Windows::Storage::IStorageItem const& storageItem);
    };
    struct WINRT_EBO FileUnprotectOptions : Windows::Security::EnterpriseData::IFileUnprotectOptions
    {
        FileUnprotectOptions(std::nullptr_t) noexcept {}
        FileUnprotectOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IFileUnprotectOptions(ptr, take_ownership_from_abi) {}
        FileUnprotectOptions(bool audit);
    };
    struct WINRT_EBO ProtectedAccessResumedEventArgs : Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs
    {
        ProtectedAccessResumedEventArgs(std::nullptr_t) noexcept {}
        ProtectedAccessResumedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ProtectedAccessSuspendingEventArgs : Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs
    {
        ProtectedAccessSuspendingEventArgs(std::nullptr_t) noexcept {}
        ProtectedAccessSuspendingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ProtectedContainerExportResult : Windows::Security::EnterpriseData::IProtectedContainerExportResult
    {
        ProtectedContainerExportResult(std::nullptr_t) noexcept {}
        ProtectedContainerExportResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedContainerExportResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ProtectedContainerImportResult : Windows::Security::EnterpriseData::IProtectedContainerImportResult
    {
        ProtectedContainerImportResult(std::nullptr_t) noexcept {}
        ProtectedContainerImportResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedContainerImportResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ProtectedContentRevokedEventArgs : Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs
    {
        ProtectedContentRevokedEventArgs(std::nullptr_t) noexcept {}
        ProtectedContentRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ProtectedFileCreateResult : Windows::Security::EnterpriseData::IProtectedFileCreateResult
    {
        ProtectedFileCreateResult(std::nullptr_t) noexcept {}
        ProtectedFileCreateResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedFileCreateResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ProtectionPolicyAuditInfo : Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo
    {
        ProtectionPolicyAuditInfo(std::nullptr_t) noexcept {}
        ProtectionPolicyAuditInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo(ptr, take_ownership_from_abi) {}
        ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription);
        ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription);
    };
    struct WINRT_EBO ProtectionPolicyManager : Windows::Security::EnterpriseData::IProtectionPolicyManager,
        impl::require<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        ProtectionPolicyManager(std::nullptr_t) noexcept {}
        ProtectionPolicyManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectionPolicyManager(ptr, take_ownership_from_abi) {}
        static bool IsIdentityManaged(param::hstring const& identity);
        static bool TryApplyProcessUIPolicy(param::hstring const& identity);
        static void ClearProcessUIPolicy();
        static Windows::Security::EnterpriseData::ThreadNetworkContext CreateCurrentThreadNetworkContext(param::hstring const& identity);
        static Windows::Foundation::IAsyncOperation<hstring> GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost);
        static void RevokeContent(param::hstring const& identity);
        static Windows::Security::EnterpriseData::ProtectionPolicyManager GetForCurrentView();
        static winrt::event_token ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
        using ProtectedAccessSuspending_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessSuspending>;
        static ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
        static void ProtectedAccessSuspending(winrt::event_token const& token);
        static winrt::event_token ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
        using ProtectedAccessResumed_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessResumed>;
        static ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
        static void ProtectedAccessResumed(winrt::event_token const& token);
        static winrt::event_token ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
        using ProtectedContentRevoked_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedContentRevoked>;
        static ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
        static void ProtectedContentRevoked(winrt::event_token const& token);
        static Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
        static bool HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since);
        static Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
        static Windows::Security::EnterpriseData::EnforcementLevel GetEnforcementLevel(param::hstring const& identity);
        static bool IsUserDecryptionAllowed(param::hstring const& identity);
        static bool IsProtectionUnderLockRequired(param::hstring const& identity);
        static winrt::event_token PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PolicyChanged_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>::remove_PolicyChanged>;
        static PolicyChanged_revoker PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void PolicyChanged(winrt::event_token const& token);
        static bool IsProtectionEnabled();
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
        static void LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static bool IsRoamableProtectionEnabled(param::hstring const& identity);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static Windows::Foundation::IAsyncOperation<bool> IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity);
        static Windows::Foundation::IAsyncOperation<bool> IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName);
        static hstring PrimaryManagedIdentity();
        static hstring GetPrimaryManagedIdentityForIdentity(param::hstring const& identity);
    };
    struct WINRT_EBO ThreadNetworkContext : Windows::Security::EnterpriseData::IThreadNetworkContext,
        impl::require<ThreadNetworkContext, Windows::Foundation::IClosable>
    {
        ThreadNetworkContext(std::nullptr_t) noexcept {}
        ThreadNetworkContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IThreadNetworkContext(ptr, take_ownership_from_abi) {}
    };
}
#endif
