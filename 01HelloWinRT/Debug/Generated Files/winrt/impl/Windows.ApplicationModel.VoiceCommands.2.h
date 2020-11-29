// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_ApplicationModel_VoiceCommands_2_H
#define WINRT_Windows_ApplicationModel_VoiceCommands_2_H
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.ApplicationModel.VoiceCommands.1.h"
namespace winrt::Windows::ApplicationModel::VoiceCommands
{
    struct WINRT_EBO VoiceCommand : Windows::ApplicationModel::VoiceCommands::IVoiceCommand
    {
        VoiceCommand(std::nullptr_t) noexcept {}
        VoiceCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommand(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VoiceCommandCompletedEventArgs : Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs
    {
        VoiceCommandCompletedEventArgs(std::nullptr_t) noexcept {}
        VoiceCommandCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VoiceCommandConfirmationResult : Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult
    {
        VoiceCommandConfirmationResult(std::nullptr_t) noexcept {}
        VoiceCommandConfirmationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VoiceCommandContentTile : Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile
    {
        VoiceCommandContentTile(std::nullptr_t) noexcept {}
        VoiceCommandContentTile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile(ptr, take_ownership_from_abi) {}
        VoiceCommandContentTile();
    };
    struct WINRT_EBO VoiceCommandDefinition : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition
    {
        VoiceCommandDefinition(std::nullptr_t) noexcept {}
        VoiceCommandDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition(ptr, take_ownership_from_abi) {}
    };
    struct VoiceCommandDefinitionManager
    {
        VoiceCommandDefinitionManager() = delete;
        static Windows::Foundation::IAsyncAction InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file);
        static Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> InstalledCommandDefinitions();
    };
    struct WINRT_EBO VoiceCommandDisambiguationResult : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult
    {
        VoiceCommandDisambiguationResult(std::nullptr_t) noexcept {}
        VoiceCommandDisambiguationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VoiceCommandResponse : Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse
    {
        VoiceCommandResponse(std::nullptr_t) noexcept {}
        VoiceCommandResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse(ptr, take_ownership_from_abi) {}
        static uint32_t MaxSupportedVoiceCommandContentTiles();
        static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage);
        static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
        static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage);
        static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
    };
    struct WINRT_EBO VoiceCommandServiceConnection : Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection
    {
        VoiceCommandServiceConnection(std::nullptr_t) noexcept {}
        VoiceCommandServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection(ptr, take_ownership_from_abi) {}
        static Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails);
    };
    struct WINRT_EBO VoiceCommandUserMessage : Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage
    {
        VoiceCommandUserMessage(std::nullptr_t) noexcept {}
        VoiceCommandUserMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage(ptr, take_ownership_from_abi) {}
        VoiceCommandUserMessage();
    };
}
#endif
