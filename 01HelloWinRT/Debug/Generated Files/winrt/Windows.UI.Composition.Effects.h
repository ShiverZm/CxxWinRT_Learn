// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_UI_Composition_Effects_H
#define WINRT_Windows_UI_Composition_Effects_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190404.8"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Composition.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.Composition.Effects.2.h"
namespace winrt::impl
{
    template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::AmbientAmount() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_AmbientAmount(&value));
        return value;
    }
    template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::AmbientAmount(float value) const
    {
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_AmbientAmount(value));
    }
    template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::DiffuseAmount() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_DiffuseAmount(&value));
        return value;
    }
    template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::DiffuseAmount(float value) const
    {
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_DiffuseAmount(value));
    }
    template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::NormalMapSource() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_NormalMapSource(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_NormalMapSource(get_abi(value)));
    }
    template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularAmount() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_SpecularAmount(&value));
        return value;
    }
    template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularAmount(float value) const
    {
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_SpecularAmount(value));
    }
    template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularShine() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_SpecularShine(&value));
        return value;
    }
    template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularShine(float value) const
    {
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_SpecularShine(value));
    }
    template <typename D> Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel consume_Windows_UI_Composition_Effects_ISceneLightingEffect2<D>::ReflectanceModel() const
    {
        Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel value;
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect2)->get_ReflectanceModel(put_abi(value)));
        return value;
    }
    template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect2<D>::ReflectanceModel(Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect2)->put_ReflectanceModel(get_abi(value)));
    }
    template <typename D>
    struct produce<D, Windows::UI::Composition::Effects::ISceneLightingEffect> : produce_base<D, Windows::UI::Composition::Effects::ISceneLightingEffect>
    {
        int32_t WINRT_CALL get_AmbientAmount(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().AmbientAmount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_AmbientAmount(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AmbientAmount(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DiffuseAmount(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DiffuseAmount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_DiffuseAmount(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiffuseAmount(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_NormalMapSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Effects::IGraphicsEffectSource>(this->shim().NormalMapSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_NormalMapSource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalMapSource(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SpecularAmount(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SpecularAmount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_SpecularAmount(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularAmount(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SpecularShine(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SpecularShine());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_SpecularShine(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularShine(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Effects::ISceneLightingEffect2> : produce_base<D, Windows::UI::Composition::Effects::ISceneLightingEffect2>
    {
        int32_t WINRT_CALL get_ReflectanceModel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel>(this->shim().ReflectanceModel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_ReflectanceModel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReflectanceModel(*reinterpret_cast<Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Composition::Effects
{
    inline SceneLightingEffect::SceneLightingEffect() :
        SceneLightingEffect(impl::call_factory<SceneLightingEffect>([](auto&& f) { return f.template ActivateInstance<SceneLightingEffect>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect> {};
    template<> struct hash<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect2> {};
    template<> struct hash<winrt::Windows::UI::Composition::Effects::SceneLightingEffect> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Effects::SceneLightingEffect> {};
}
#endif