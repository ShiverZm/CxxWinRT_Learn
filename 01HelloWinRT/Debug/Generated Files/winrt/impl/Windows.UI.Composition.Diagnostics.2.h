// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_UI_Composition_Diagnostics_2_H
#define WINRT_Windows_UI_Composition_Diagnostics_2_H
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Composition.Diagnostics.1.h"
namespace winrt::Windows::UI::Composition::Diagnostics
{
    struct WINRT_EBO CompositionDebugHeatMaps : Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps
    {
        CompositionDebugHeatMaps(std::nullptr_t) noexcept {}
        CompositionDebugHeatMaps(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CompositionDebugSettings : Windows::UI::Composition::Diagnostics::ICompositionDebugSettings
    {
        CompositionDebugSettings(std::nullptr_t) noexcept {}
        CompositionDebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Diagnostics::ICompositionDebugSettings(ptr, take_ownership_from_abi) {}
        static Windows::UI::Composition::Diagnostics::CompositionDebugSettings TryGetSettings(Windows::UI::Composition::Compositor const& compositor);
    };
}
#endif
