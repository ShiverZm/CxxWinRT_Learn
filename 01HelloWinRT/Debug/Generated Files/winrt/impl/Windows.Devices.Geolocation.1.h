// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Devices_Geolocation_1_H
#define WINRT_Windows_Devices_Geolocation_1_H
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
namespace winrt::Windows::Devices::Geolocation
{
    struct WINRT_EBO ICivicAddress :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICivicAddress>
    {
        ICivicAddress(std::nullptr_t = nullptr) noexcept {}
        ICivicAddress(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeoboundingBox :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeoboundingBox>,
        impl::require<Windows::Devices::Geolocation::IGeoboundingBox, Windows::Devices::Geolocation::IGeoshape>
    {
        IGeoboundingBox(std::nullptr_t = nullptr) noexcept {}
        IGeoboundingBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeoboundingBoxFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeoboundingBoxFactory>
    {
        IGeoboundingBoxFactory(std::nullptr_t = nullptr) noexcept {}
        IGeoboundingBoxFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeoboundingBoxStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeoboundingBoxStatics>
    {
        IGeoboundingBoxStatics(std::nullptr_t = nullptr) noexcept {}
        IGeoboundingBoxStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocircle :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocircle>,
        impl::require<Windows::Devices::Geolocation::IGeocircle, Windows::Devices::Geolocation::IGeoshape>
    {
        IGeocircle(std::nullptr_t = nullptr) noexcept {}
        IGeocircle(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocircleFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocircleFactory>
    {
        IGeocircleFactory(std::nullptr_t = nullptr) noexcept {}
        IGeocircleFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocoordinate :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinate>
    {
        IGeocoordinate(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocoordinateSatelliteData :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateSatelliteData>
    {
        IGeocoordinateSatelliteData(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateSatelliteData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocoordinateWithPoint :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateWithPoint>
    {
        IGeocoordinateWithPoint(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateWithPoint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocoordinateWithPositionData :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateWithPositionData>,
        impl::require<Windows::Devices::Geolocation::IGeocoordinateWithPositionData, Windows::Devices::Geolocation::IGeocoordinate>
    {
        IGeocoordinateWithPositionData(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateWithPositionData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeocoordinateWithPositionSourceTimestamp :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateWithPositionSourceTimestamp>
    {
        IGeocoordinateWithPositionSourceTimestamp(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateWithPositionSourceTimestamp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeolocator :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocator>
    {
        IGeolocator(std::nullptr_t = nullptr) noexcept {}
        IGeolocator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeolocator2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocator2>
    {
        IGeolocator2(std::nullptr_t = nullptr) noexcept {}
        IGeolocator2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeolocatorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocatorStatics>
    {
        IGeolocatorStatics(std::nullptr_t = nullptr) noexcept {}
        IGeolocatorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeolocatorStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocatorStatics2>
    {
        IGeolocatorStatics2(std::nullptr_t = nullptr) noexcept {}
        IGeolocatorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeolocatorWithScalarAccuracy :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocatorWithScalarAccuracy>,
        impl::require<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy, Windows::Devices::Geolocation::IGeolocator>
    {
        IGeolocatorWithScalarAccuracy(std::nullptr_t = nullptr) noexcept {}
        IGeolocatorWithScalarAccuracy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeopath :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeopath>,
        impl::require<Windows::Devices::Geolocation::IGeopath, Windows::Devices::Geolocation::IGeoshape>
    {
        IGeopath(std::nullptr_t = nullptr) noexcept {}
        IGeopath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeopathFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeopathFactory>
    {
        IGeopathFactory(std::nullptr_t = nullptr) noexcept {}
        IGeopathFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeopoint :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeopoint>,
        impl::require<Windows::Devices::Geolocation::IGeopoint, Windows::Devices::Geolocation::IGeoshape>
    {
        IGeopoint(std::nullptr_t = nullptr) noexcept {}
        IGeopoint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeopointFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeopointFactory>
    {
        IGeopointFactory(std::nullptr_t = nullptr) noexcept {}
        IGeopointFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeoposition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeoposition>
    {
        IGeoposition(std::nullptr_t = nullptr) noexcept {}
        IGeoposition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeoposition2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeoposition2>,
        impl::require<Windows::Devices::Geolocation::IGeoposition2, Windows::Devices::Geolocation::IGeoposition>
    {
        IGeoposition2(std::nullptr_t = nullptr) noexcept {}
        IGeoposition2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeoshape :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeoshape>
    {
        IGeoshape(std::nullptr_t = nullptr) noexcept {}
        IGeoshape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeovisit :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisit>
    {
        IGeovisit(std::nullptr_t = nullptr) noexcept {}
        IGeovisit(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeovisitMonitor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitMonitor>
    {
        IGeovisitMonitor(std::nullptr_t = nullptr) noexcept {}
        IGeovisitMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeovisitMonitorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitMonitorStatics>
    {
        IGeovisitMonitorStatics(std::nullptr_t = nullptr) noexcept {}
        IGeovisitMonitorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeovisitStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitStateChangedEventArgs>
    {
        IGeovisitStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGeovisitStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGeovisitTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitTriggerDetails>
    {
        IGeovisitTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IGeovisitTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IPositionChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPositionChangedEventArgs>
    {
        IPositionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPositionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStatusChangedEventArgs>
    {
        IStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVenueData :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVenueData>
    {
        IVenueData(std::nullptr_t = nullptr) noexcept {}
        IVenueData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
