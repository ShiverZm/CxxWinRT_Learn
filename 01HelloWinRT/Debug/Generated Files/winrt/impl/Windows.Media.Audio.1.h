// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Media_Audio_1_H
#define WINRT_Windows_Media_Audio_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.Audio.0.h"
namespace winrt::Windows::Media::Audio
{
    struct WINRT_EBO IAudioDeviceInputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioDeviceInputNode>,
        impl::require<Windows::Media::Audio::IAudioDeviceInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
    {
        IAudioDeviceInputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioDeviceInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioDeviceOutputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioDeviceOutputNode>,
        impl::require<Windows::Media::Audio::IAudioDeviceOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
    {
        IAudioDeviceOutputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioDeviceOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioFileInputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFileInputNode>,
        impl::require<Windows::Media::Audio::IAudioFileInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
    {
        IAudioFileInputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioFileInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioFileOutputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFileOutputNode>,
        impl::require<Windows::Media::Audio::IAudioFileOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
    {
        IAudioFileOutputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioFileOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioFrameCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrameCompletedEventArgs>
    {
        IAudioFrameCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAudioFrameCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioFrameInputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrameInputNode>,
        impl::require<Windows::Media::Audio::IAudioFrameInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
    {
        IAudioFrameInputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioFrameInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioFrameOutputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrameOutputNode>,
        impl::require<Windows::Media::Audio::IAudioFrameOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
    {
        IAudioFrameOutputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioFrameOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraph :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraph>,
        impl::require<Windows::Media::Audio::IAudioGraph, Windows::Foundation::IClosable>
    {
        IAudioGraph(std::nullptr_t = nullptr) noexcept {}
        IAudioGraph(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraph2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraph2>,
        impl::require<Windows::Media::Audio::IAudioGraph2, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioGraph>
    {
        IAudioGraph2(std::nullptr_t = nullptr) noexcept {}
        IAudioGraph2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IAudioGraph2, IAudioGraph2>::CreateDeviceInputNodeAsync;
        using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateDeviceInputNodeAsync;
        using impl::consume_t<IAudioGraph2, IAudioGraph2>::CreateFileInputNodeAsync;
        using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateFileInputNodeAsync;
        using impl::consume_t<IAudioGraph2, IAudioGraph2>::CreateFrameInputNode;
        using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateFrameInputNode;
        using impl::consume_t<IAudioGraph2, IAudioGraph2>::CreateSubmixNode;
        using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateSubmixNode;
    };
    struct WINRT_EBO IAudioGraph3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraph3>
    {
        IAudioGraph3(std::nullptr_t = nullptr) noexcept {}
        IAudioGraph3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraphConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraphConnection>
    {
        IAudioGraphConnection(std::nullptr_t = nullptr) noexcept {}
        IAudioGraphConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraphSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraphSettings>
    {
        IAudioGraphSettings(std::nullptr_t = nullptr) noexcept {}
        IAudioGraphSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraphSettings2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraphSettings2>
    {
        IAudioGraphSettings2(std::nullptr_t = nullptr) noexcept {}
        IAudioGraphSettings2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraphSettingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraphSettingsFactory>
    {
        IAudioGraphSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioGraphSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraphStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraphStatics>
    {
        IAudioGraphStatics(std::nullptr_t = nullptr) noexcept {}
        IAudioGraphStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioGraphUnrecoverableErrorOccurredEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        IAudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAudioGraphUnrecoverableErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioInputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioInputNode>,
        impl::require<Windows::Media::Audio::IAudioInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
    {
        IAudioInputNode(std::nullptr_t = nullptr) noexcept {}
        IAudioInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioInputNode2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioInputNode2>,
        impl::require<Windows::Media::Audio::IAudioInputNode2, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
    {
        IAudioInputNode2(std::nullptr_t = nullptr) noexcept {}
        IAudioInputNode2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNode>,
        impl::require<Windows::Media::Audio::IAudioNode, Windows::Foundation::IClosable>
    {
        IAudioNode(std::nullptr_t = nullptr) noexcept {}
        IAudioNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitter>
    {
        IAudioNodeEmitter(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitter2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitter2>
    {
        IAudioNodeEmitter2(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitter2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterConeProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterConeProperties>
    {
        IAudioNodeEmitterConeProperties(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterConeProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterDecayModel :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterDecayModel>
    {
        IAudioNodeEmitterDecayModel(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterDecayModel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterDecayModelStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterDecayModelStatics>
    {
        IAudioNodeEmitterDecayModelStatics(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterDecayModelStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterFactory>
    {
        IAudioNodeEmitterFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterNaturalDecayModelProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterNaturalDecayModelProperties>
    {
        IAudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterNaturalDecayModelProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterShape :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterShape>
    {
        IAudioNodeEmitterShape(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterShape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeEmitterShapeStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeEmitterShapeStatics>
    {
        IAudioNodeEmitterShapeStatics(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeEmitterShapeStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeListener :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeListener>
    {
        IAudioNodeListener(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioNodeWithListener :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioNodeWithListener>,
        impl::require<Windows::Media::Audio::IAudioNodeWithListener, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
    {
        IAudioNodeWithListener(std::nullptr_t = nullptr) noexcept {}
        IAudioNodeWithListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioStateMonitor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioStateMonitor>
    {
        IAudioStateMonitor(std::nullptr_t = nullptr) noexcept {}
        IAudioStateMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioStateMonitorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioStateMonitorStatics>
    {
        IAudioStateMonitorStatics(std::nullptr_t = nullptr) noexcept {}
        IAudioStateMonitorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioDeviceInputNodeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioDeviceInputNodeResult>
    {
        ICreateAudioDeviceInputNodeResult(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioDeviceInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioDeviceInputNodeResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioDeviceInputNodeResult2>
    {
        ICreateAudioDeviceInputNodeResult2(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioDeviceInputNodeResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioDeviceOutputNodeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioDeviceOutputNodeResult>
    {
        ICreateAudioDeviceOutputNodeResult(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioDeviceOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioDeviceOutputNodeResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioDeviceOutputNodeResult2>
    {
        ICreateAudioDeviceOutputNodeResult2(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioDeviceOutputNodeResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioFileInputNodeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioFileInputNodeResult>
    {
        ICreateAudioFileInputNodeResult(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioFileInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioFileInputNodeResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioFileInputNodeResult2>
    {
        ICreateAudioFileInputNodeResult2(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioFileInputNodeResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioFileOutputNodeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioFileOutputNodeResult>
    {
        ICreateAudioFileOutputNodeResult(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioFileOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioFileOutputNodeResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioFileOutputNodeResult2>
    {
        ICreateAudioFileOutputNodeResult2(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioFileOutputNodeResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioGraphResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioGraphResult>
    {
        ICreateAudioGraphResult(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioGraphResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateAudioGraphResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateAudioGraphResult2>
    {
        ICreateAudioGraphResult2(std::nullptr_t = nullptr) noexcept {}
        ICreateAudioGraphResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateMediaSourceAudioInputNodeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateMediaSourceAudioInputNodeResult>
    {
        ICreateMediaSourceAudioInputNodeResult(std::nullptr_t = nullptr) noexcept {}
        ICreateMediaSourceAudioInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICreateMediaSourceAudioInputNodeResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICreateMediaSourceAudioInputNodeResult2>
    {
        ICreateMediaSourceAudioInputNodeResult2(std::nullptr_t = nullptr) noexcept {}
        ICreateMediaSourceAudioInputNodeResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IEchoEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEchoEffectDefinition>,
        impl::require<Windows::Media::Audio::IEchoEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
    {
        IEchoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IEchoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IEchoEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEchoEffectDefinitionFactory>
    {
        IEchoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IEchoEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IEqualizerBand :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEqualizerBand>
    {
        IEqualizerBand(std::nullptr_t = nullptr) noexcept {}
        IEqualizerBand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IEqualizerEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEqualizerEffectDefinition>,
        impl::require<Windows::Media::Audio::IEqualizerEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
    {
        IEqualizerEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IEqualizerEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IEqualizerEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEqualizerEffectDefinitionFactory>
    {
        IEqualizerEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IEqualizerEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IFrameInputNodeQuantumStartedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFrameInputNodeQuantumStartedEventArgs>
    {
        IFrameInputNodeQuantumStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFrameInputNodeQuantumStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILimiterEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILimiterEffectDefinition>,
        impl::require<Windows::Media::Audio::ILimiterEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
    {
        ILimiterEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        ILimiterEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILimiterEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILimiterEffectDefinitionFactory>
    {
        ILimiterEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        ILimiterEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMediaSourceAudioInputNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceAudioInputNode>,
        impl::require<Windows::Media::Audio::IMediaSourceAudioInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioInputNode2, Windows::Media::Audio::IAudioNode>
    {
        IMediaSourceAudioInputNode(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceAudioInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IReverbEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IReverbEffectDefinition>,
        impl::require<Windows::Media::Audio::IReverbEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
    {
        IReverbEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IReverbEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IReverbEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IReverbEffectDefinitionFactory>
    {
        IReverbEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IReverbEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISetDefaultSpatialAudioFormatResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISetDefaultSpatialAudioFormatResult>
    {
        ISetDefaultSpatialAudioFormatResult(std::nullptr_t = nullptr) noexcept {}
        ISetDefaultSpatialAudioFormatResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISpatialAudioDeviceConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialAudioDeviceConfiguration>
    {
        ISpatialAudioDeviceConfiguration(std::nullptr_t = nullptr) noexcept {}
        ISpatialAudioDeviceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISpatialAudioDeviceConfigurationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialAudioDeviceConfigurationStatics>
    {
        ISpatialAudioDeviceConfigurationStatics(std::nullptr_t = nullptr) noexcept {}
        ISpatialAudioDeviceConfigurationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISpatialAudioFormatConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialAudioFormatConfiguration>
    {
        ISpatialAudioFormatConfiguration(std::nullptr_t = nullptr) noexcept {}
        ISpatialAudioFormatConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISpatialAudioFormatConfigurationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialAudioFormatConfigurationStatics>
    {
        ISpatialAudioFormatConfigurationStatics(std::nullptr_t = nullptr) noexcept {}
        ISpatialAudioFormatConfigurationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISpatialAudioFormatSubtypeStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialAudioFormatSubtypeStatics>
    {
        ISpatialAudioFormatSubtypeStatics(std::nullptr_t = nullptr) noexcept {}
        ISpatialAudioFormatSubtypeStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
