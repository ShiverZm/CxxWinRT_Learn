// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Media_Effects_1_H
#define WINRT_Windows_Media_Effects_1_H
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
namespace winrt::Windows::Media::Effects
{
    struct WINRT_EBO IAudioCaptureEffectsManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioCaptureEffectsManager>
    {
        IAudioCaptureEffectsManager(std::nullptr_t = nullptr) noexcept {}
        IAudioCaptureEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffect>
    {
        IAudioEffect(std::nullptr_t = nullptr) noexcept {}
        IAudioEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectDefinition>
    {
        IAudioEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IAudioEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectDefinitionFactory>
    {
        IAudioEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioEffectsManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectsManagerStatics>
    {
        IAudioEffectsManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IAudioEffectsManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioRenderEffectsManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRenderEffectsManager>
    {
        IAudioRenderEffectsManager(std::nullptr_t = nullptr) noexcept {}
        IAudioRenderEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAudioRenderEffectsManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRenderEffectsManager2>
    {
        IAudioRenderEffectsManager2(std::nullptr_t = nullptr) noexcept {}
        IAudioRenderEffectsManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IBasicAudioEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicAudioEffect>,
        impl::require<Windows::Media::Effects::IBasicAudioEffect, Windows::Media::IMediaExtension>
    {
        IBasicAudioEffect(std::nullptr_t = nullptr) noexcept {}
        IBasicAudioEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IBasicVideoEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicVideoEffect>,
        impl::require<Windows::Media::Effects::IBasicVideoEffect, Windows::Media::IMediaExtension>
    {
        IBasicVideoEffect(std::nullptr_t = nullptr) noexcept {}
        IBasicVideoEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICompositeVideoFrameContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompositeVideoFrameContext>
    {
        ICompositeVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
        ICompositeVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IProcessAudioFrameContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProcessAudioFrameContext>
    {
        IProcessAudioFrameContext(std::nullptr_t = nullptr) noexcept {}
        IProcessAudioFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IProcessVideoFrameContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProcessVideoFrameContext>
    {
        IProcessVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
        IProcessVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISlowMotionEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISlowMotionEffectDefinition>,
        impl::require<Windows::Media::Effects::ISlowMotionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
    {
        ISlowMotionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        ISlowMotionEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoCompositor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositor>,
        impl::require<Windows::Media::Effects::IVideoCompositor, Windows::Media::IMediaExtension>
    {
        IVideoCompositor(std::nullptr_t = nullptr) noexcept {}
        IVideoCompositor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoCompositorDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositorDefinition>
    {
        IVideoCompositorDefinition(std::nullptr_t = nullptr) noexcept {}
        IVideoCompositorDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoCompositorDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositorDefinitionFactory>
    {
        IVideoCompositorDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoCompositorDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectDefinition>
    {
        IVideoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IVideoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectDefinitionFactory>
    {
        IVideoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoTransformEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformEffectDefinition>,
        impl::require<Windows::Media::Effects::IVideoTransformEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
    {
        IVideoTransformEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IVideoTransformEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoTransformEffectDefinition2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformEffectDefinition2>
    {
        IVideoTransformEffectDefinition2(std::nullptr_t = nullptr) noexcept {}
        IVideoTransformEffectDefinition2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVideoTransformSphericalProjection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformSphericalProjection>
    {
        IVideoTransformSphericalProjection(std::nullptr_t = nullptr) noexcept {}
        IVideoTransformSphericalProjection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
