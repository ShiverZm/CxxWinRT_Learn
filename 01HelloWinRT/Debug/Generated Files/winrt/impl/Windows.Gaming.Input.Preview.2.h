// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Gaming_Input_Preview_2_H
#define WINRT_Windows_Gaming_Input_Preview_2_H
#include "winrt/impl/Windows.Gaming.Input.Custom.1.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.1.h"
namespace winrt::Windows::Gaming::Input::Preview
{
    struct GameControllerProviderInfo
    {
        GameControllerProviderInfo() = delete;
        static hstring GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
        static hstring GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
    };
}
#endif
