// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Gaming_Input_ForceFeedback_2_H
#define WINRT_Windows_Gaming_Input_ForceFeedback_2_H
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.1.h"
namespace winrt::Windows::Gaming::Input::ForceFeedback
{
    struct WINRT_EBO ConditionForceEffect : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
        impl::require<ConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        ConditionForceEffect(std::nullptr_t) noexcept {}
        ConditionForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect(ptr, take_ownership_from_abi) {}
        ConditionForceEffect(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind);
    };
    struct WINRT_EBO ConstantForceEffect : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
        impl::require<ConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        ConstantForceEffect(std::nullptr_t) noexcept {}
        ConstantForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect(ptr, take_ownership_from_abi) {}
        ConstantForceEffect();
    };
    struct WINRT_EBO ForceFeedbackMotor : Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor
    {
        ForceFeedbackMotor(std::nullptr_t) noexcept {}
        ForceFeedbackMotor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PeriodicForceEffect : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
        impl::require<PeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        PeriodicForceEffect(std::nullptr_t) noexcept {}
        PeriodicForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect(ptr, take_ownership_from_abi) {}
        PeriodicForceEffect(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind);
    };
    struct WINRT_EBO RampForceEffect : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
        impl::require<RampForceEffect, Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        RampForceEffect(std::nullptr_t) noexcept {}
        RampForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect(ptr, take_ownership_from_abi) {}
        RampForceEffect();
    };
}
#endif
