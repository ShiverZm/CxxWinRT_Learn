// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Media_Playlists_1_H
#define WINRT_Windows_Media_Playlists_1_H
#include "winrt/impl/Windows.Media.Playlists.0.h"
namespace winrt::Windows::Media::Playlists
{
    struct WINRT_EBO IPlaylist :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaylist>
    {
        IPlaylist(std::nullptr_t = nullptr) noexcept {}
        IPlaylist(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IPlaylistStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaylistStatics>
    {
        IPlaylistStatics(std::nullptr_t = nullptr) noexcept {}
        IPlaylistStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif