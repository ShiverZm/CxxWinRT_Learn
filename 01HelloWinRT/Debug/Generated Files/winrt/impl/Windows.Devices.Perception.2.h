// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Perception_2_H
#define WINRT_Windows_Devices_Perception_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Perception.1.h"
namespace winrt::Windows::Devices::Perception
{
    struct KnownCameraIntrinsicsProperties
    {
        KnownCameraIntrinsicsProperties() = delete;
        static hstring FocalLength();
        static hstring PrincipalPoint();
        static hstring RadialDistortion();
        static hstring TangentialDistortion();
    };
    struct KnownPerceptionColorFrameSourceProperties
    {
        KnownPerceptionColorFrameSourceProperties() = delete;
        static hstring Exposure();
        static hstring AutoExposureEnabled();
        static hstring ExposureCompensation();
    };
    struct KnownPerceptionDepthFrameSourceProperties
    {
        KnownPerceptionDepthFrameSourceProperties() = delete;
        static hstring MinDepth();
        static hstring MaxDepth();
    };
    struct KnownPerceptionFrameSourceProperties
    {
        KnownPerceptionFrameSourceProperties() = delete;
        static hstring Id();
        static hstring PhysicalDeviceIds();
        static hstring FrameKind();
        static hstring DeviceModelVersion();
        static hstring EnclosureLocation();
        static hstring DeviceId();
    };
    struct KnownPerceptionInfraredFrameSourceProperties
    {
        KnownPerceptionInfraredFrameSourceProperties() = delete;
        static hstring Exposure();
        static hstring AutoExposureEnabled();
        static hstring ExposureCompensation();
        static hstring ActiveIlluminationEnabled();
        static hstring AmbientSubtractionEnabled();
        static hstring StructureLightPatternEnabled();
        static hstring InterleavedIlluminationEnabled();
    };
    struct KnownPerceptionVideoFrameSourceProperties
    {
        KnownPerceptionVideoFrameSourceProperties() = delete;
        static hstring VideoProfile();
        static hstring SupportedVideoProfiles();
        static hstring AvailableVideoProfiles();
        static hstring IsMirrored();
        static hstring CameraIntrinsics();
    };
    struct KnownPerceptionVideoProfileProperties
    {
        KnownPerceptionVideoProfileProperties() = delete;
        static hstring BitmapPixelFormat();
        static hstring BitmapAlphaMode();
        static hstring Width();
        static hstring Height();
        static hstring FrameDuration();
    };
    struct WINRT_EBO PerceptionColorFrame : Windows::Devices::Perception::IPerceptionColorFrame
    {
        PerceptionColorFrame(std::nullptr_t) noexcept {}
        PerceptionColorFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionColorFrameArrivedEventArgs : Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs
    {
        PerceptionColorFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        PerceptionColorFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionColorFrameReader : Windows::Devices::Perception::IPerceptionColorFrameReader
    {
        PerceptionColorFrameReader(std::nullptr_t) noexcept {}
        PerceptionColorFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrameReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionColorFrameSource : Windows::Devices::Perception::IPerceptionColorFrameSource,
        impl::require<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSource2>
    {
        PerceptionColorFrameSource(std::nullptr_t) noexcept {}
        PerceptionColorFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrameSource(ptr, take_ownership_from_abi) {}
        static Windows::Devices::Perception::PerceptionColorFrameSourceWatcher CreateWatcher();
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> FindAllAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> FromIdAsync(param::hstring const& id);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync();
    };
    struct WINRT_EBO PerceptionColorFrameSourceAddedEventArgs : Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs
    {
        PerceptionColorFrameSourceAddedEventArgs(std::nullptr_t) noexcept {}
        PerceptionColorFrameSourceAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionColorFrameSourceRemovedEventArgs : Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs
    {
        PerceptionColorFrameSourceRemovedEventArgs(std::nullptr_t) noexcept {}
        PerceptionColorFrameSourceRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionColorFrameSourceWatcher : Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher
    {
        PerceptionColorFrameSourceWatcher(std::nullptr_t) noexcept {}
        PerceptionColorFrameSourceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionControlSession : Windows::Devices::Perception::IPerceptionControlSession
    {
        PerceptionControlSession(std::nullptr_t) noexcept {}
        PerceptionControlSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionControlSession(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthCorrelatedCameraIntrinsics : Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics
    {
        PerceptionDepthCorrelatedCameraIntrinsics(std::nullptr_t) noexcept {}
        PerceptionDepthCorrelatedCameraIntrinsics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthCorrelatedCoordinateMapper : Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper
    {
        PerceptionDepthCorrelatedCoordinateMapper(std::nullptr_t) noexcept {}
        PerceptionDepthCorrelatedCoordinateMapper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthFrame : Windows::Devices::Perception::IPerceptionDepthFrame
    {
        PerceptionDepthFrame(std::nullptr_t) noexcept {}
        PerceptionDepthFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthFrameArrivedEventArgs : Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs
    {
        PerceptionDepthFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        PerceptionDepthFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthFrameReader : Windows::Devices::Perception::IPerceptionDepthFrameReader
    {
        PerceptionDepthFrameReader(std::nullptr_t) noexcept {}
        PerceptionDepthFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrameReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthFrameSource : Windows::Devices::Perception::IPerceptionDepthFrameSource,
        impl::require<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSource2>
    {
        PerceptionDepthFrameSource(std::nullptr_t) noexcept {}
        PerceptionDepthFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrameSource(ptr, take_ownership_from_abi) {}
        static Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher CreateWatcher();
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> FindAllAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> FromIdAsync(param::hstring const& id);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync();
    };
    struct WINRT_EBO PerceptionDepthFrameSourceAddedEventArgs : Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs
    {
        PerceptionDepthFrameSourceAddedEventArgs(std::nullptr_t) noexcept {}
        PerceptionDepthFrameSourceAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthFrameSourceRemovedEventArgs : Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs
    {
        PerceptionDepthFrameSourceRemovedEventArgs(std::nullptr_t) noexcept {}
        PerceptionDepthFrameSourceRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionDepthFrameSourceWatcher : Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher
    {
        PerceptionDepthFrameSourceWatcher(std::nullptr_t) noexcept {}
        PerceptionDepthFrameSourceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionFrameSourcePropertiesChangedEventArgs : Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs
    {
        PerceptionFrameSourcePropertiesChangedEventArgs(std::nullptr_t) noexcept {}
        PerceptionFrameSourcePropertiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionFrameSourcePropertyChangeResult : Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult
    {
        PerceptionFrameSourcePropertyChangeResult(std::nullptr_t) noexcept {}
        PerceptionFrameSourcePropertyChangeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionInfraredFrame : Windows::Devices::Perception::IPerceptionInfraredFrame
    {
        PerceptionInfraredFrame(std::nullptr_t) noexcept {}
        PerceptionInfraredFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionInfraredFrameArrivedEventArgs : Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs
    {
        PerceptionInfraredFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        PerceptionInfraredFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionInfraredFrameReader : Windows::Devices::Perception::IPerceptionInfraredFrameReader
    {
        PerceptionInfraredFrameReader(std::nullptr_t) noexcept {}
        PerceptionInfraredFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrameReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionInfraredFrameSource : Windows::Devices::Perception::IPerceptionInfraredFrameSource,
        impl::require<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
    {
        PerceptionInfraredFrameSource(std::nullptr_t) noexcept {}
        PerceptionInfraredFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrameSource(ptr, take_ownership_from_abi) {}
        static Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher CreateWatcher();
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> FindAllAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> FromIdAsync(param::hstring const& id);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync();
    };
    struct WINRT_EBO PerceptionInfraredFrameSourceAddedEventArgs : Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs
    {
        PerceptionInfraredFrameSourceAddedEventArgs(std::nullptr_t) noexcept {}
        PerceptionInfraredFrameSourceAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionInfraredFrameSourceRemovedEventArgs : Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs
    {
        PerceptionInfraredFrameSourceRemovedEventArgs(std::nullptr_t) noexcept {}
        PerceptionInfraredFrameSourceRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionInfraredFrameSourceWatcher : Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher
    {
        PerceptionInfraredFrameSourceWatcher(std::nullptr_t) noexcept {}
        PerceptionInfraredFrameSourceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PerceptionVideoProfile : Windows::Devices::Perception::IPerceptionVideoProfile
    {
        PerceptionVideoProfile(std::nullptr_t) noexcept {}
        PerceptionVideoProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::IPerceptionVideoProfile(ptr, take_ownership_from_abi) {}
    };
}
#endif