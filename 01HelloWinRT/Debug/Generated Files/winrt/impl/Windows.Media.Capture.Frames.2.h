// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Media_Capture_Frames_2_H
#define WINRT_Windows_Media_Capture_Frames_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Capture.Frames.1.h"
namespace winrt::Windows::Media::Capture::Frames
{
    struct WINRT_EBO AudioMediaFrame : Windows::Media::Capture::Frames::IAudioMediaFrame
    {
        AudioMediaFrame(std::nullptr_t) noexcept {}
        AudioMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IAudioMediaFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO BufferMediaFrame : Windows::Media::Capture::Frames::IBufferMediaFrame
    {
        BufferMediaFrame(std::nullptr_t) noexcept {}
        BufferMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IBufferMediaFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO DepthMediaFrame : Windows::Media::Capture::Frames::IDepthMediaFrame,
        impl::require<DepthMediaFrame, Windows::Media::Capture::Frames::IDepthMediaFrame2>
    {
        DepthMediaFrame(std::nullptr_t) noexcept {}
        DepthMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IDepthMediaFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO DepthMediaFrameFormat : Windows::Media::Capture::Frames::IDepthMediaFrameFormat
    {
        DepthMediaFrameFormat(std::nullptr_t) noexcept {}
        DepthMediaFrameFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IDepthMediaFrameFormat(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO InfraredMediaFrame : Windows::Media::Capture::Frames::IInfraredMediaFrame
    {
        InfraredMediaFrame(std::nullptr_t) noexcept {}
        InfraredMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IInfraredMediaFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameArrivedEventArgs : Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs
    {
        MediaFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        MediaFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameFormat : Windows::Media::Capture::Frames::IMediaFrameFormat,
        impl::require<MediaFrameFormat, Windows::Media::Capture::Frames::IMediaFrameFormat2>
    {
        MediaFrameFormat(std::nullptr_t) noexcept {}
        MediaFrameFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameFormat(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameReader : Windows::Media::Capture::Frames::IMediaFrameReader,
        impl::require<MediaFrameReader, Windows::Media::Capture::Frames::IMediaFrameReader2>
    {
        MediaFrameReader(std::nullptr_t) noexcept {}
        MediaFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameReference : Windows::Media::Capture::Frames::IMediaFrameReference,
        impl::require<MediaFrameReference, Windows::Media::Capture::Frames::IMediaFrameReference2>
    {
        MediaFrameReference(std::nullptr_t) noexcept {}
        MediaFrameReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameReference(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameSource : Windows::Media::Capture::Frames::IMediaFrameSource
    {
        MediaFrameSource(std::nullptr_t) noexcept {}
        MediaFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameSource(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameSourceController : Windows::Media::Capture::Frames::IMediaFrameSourceController,
        impl::require<MediaFrameSourceController, Windows::Media::Capture::Frames::IMediaFrameSourceController2, Windows::Media::Capture::Frames::IMediaFrameSourceController3>
    {
        MediaFrameSourceController(std::nullptr_t) noexcept {}
        MediaFrameSourceController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameSourceController(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameSourceGetPropertyResult : Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult
    {
        MediaFrameSourceGetPropertyResult(std::nullptr_t) noexcept {}
        MediaFrameSourceGetPropertyResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaFrameSourceGroup : Windows::Media::Capture::Frames::IMediaFrameSourceGroup
    {
        MediaFrameSourceGroup(std::nullptr_t) noexcept {}
        MediaFrameSourceGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameSourceGroup(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> FindAllAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> FromIdAsync(param::hstring const& id);
        static hstring GetDeviceSelector();
    };
    struct WINRT_EBO MediaFrameSourceInfo : Windows::Media::Capture::Frames::IMediaFrameSourceInfo,
        impl::require<MediaFrameSourceInfo, Windows::Media::Capture::Frames::IMediaFrameSourceInfo2>
    {
        MediaFrameSourceInfo(std::nullptr_t) noexcept {}
        MediaFrameSourceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMediaFrameSourceInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MultiSourceMediaFrameArrivedEventArgs : Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs
    {
        MultiSourceMediaFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        MultiSourceMediaFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MultiSourceMediaFrameReader : Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader,
        impl::require<MultiSourceMediaFrameReader, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2>
    {
        MultiSourceMediaFrameReader(std::nullptr_t) noexcept {}
        MultiSourceMediaFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MultiSourceMediaFrameReference : Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference
    {
        MultiSourceMediaFrameReference(std::nullptr_t) noexcept {}
        MultiSourceMediaFrameReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoMediaFrame : Windows::Media::Capture::Frames::IVideoMediaFrame
    {
        VideoMediaFrame(std::nullptr_t) noexcept {}
        VideoMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IVideoMediaFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoMediaFrameFormat : Windows::Media::Capture::Frames::IVideoMediaFrameFormat
    {
        VideoMediaFrameFormat(std::nullptr_t) noexcept {}
        VideoMediaFrameFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Frames::IVideoMediaFrameFormat(ptr, take_ownership_from_abi) {}
    };
}
#endif