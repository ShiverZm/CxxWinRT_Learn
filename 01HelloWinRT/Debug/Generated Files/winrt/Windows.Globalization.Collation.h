// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Globalization_Collation_H
#define WINRT_Windows_Globalization_Collation_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190404.8"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Globalization.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Globalization.Collation.2.h"
namespace winrt::impl
{
    template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGrouping<D>::First() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGrouping)->get_First(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGrouping<D>::Label() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGrouping)->get_Label(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGroupings<D>::Lookup(param::hstring const& text) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGroupings)->Lookup(get_abi(text), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Globalization::Collation::CharacterGroupings consume_Windows_Globalization_Collation_ICharacterGroupingsFactory<D>::Create(param::hstring const& language) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGroupingsFactory)->Create(get_abi(language), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Globalization::Collation::ICharacterGrouping> : produce_base<D, Windows::Globalization::Collation::ICharacterGrouping>
    {
        int32_t WINRT_CALL get_First(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().First());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Label(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Globalization::Collation::ICharacterGroupings> : produce_base<D, Windows::Globalization::Collation::ICharacterGroupings>
    {
        int32_t WINRT_CALL Lookup(void* text, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().Lookup(*reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Globalization::Collation::ICharacterGroupingsFactory> : produce_base<D, Windows::Globalization::Collation::ICharacterGroupingsFactory>
    {
        int32_t WINRT_CALL Create(void* language, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Globalization::Collation::CharacterGroupings>(this->shim().Create(*reinterpret_cast<hstring const*>(&language)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Globalization::Collation
{
    inline CharacterGroupings::CharacterGroupings() :
        CharacterGroupings(impl::call_factory<CharacterGroupings>([](auto&& f) { return f.template ActivateInstance<CharacterGroupings>(); }))
    {
    }
    inline CharacterGroupings::CharacterGroupings(param::hstring const& language) :
        CharacterGroupings(impl::call_factory<CharacterGroupings, Windows::Globalization::Collation::ICharacterGroupingsFactory>([&](auto&& f) { return f.Create(language); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGrouping> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::ICharacterGrouping> {};
    template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGroupings> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::ICharacterGroupings> {};
    template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory> {};
    template<> struct hash<winrt::Windows::Globalization::Collation::CharacterGrouping> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::CharacterGrouping> {};
    template<> struct hash<winrt::Windows::Globalization::Collation::CharacterGroupings> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::CharacterGroupings> {};
}
#endif
