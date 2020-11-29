// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Web_UI_Interop_H
#define WINRT_Windows_Web_UI_Interop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190404.8"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Web.UI.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Web.UI.2.h"
#include "winrt/impl/Windows.Web.UI.Interop.2.h"
namespace winrt::impl
{
    template <typename D> Windows::UI::Core::CoreAcceleratorKeyEventType consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::EventType() const
    {
        Windows::UI::Core::CoreAcceleratorKeyEventType value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_EventType(put_abi(value)));
        return value;
    }
    template <typename D> Windows::System::VirtualKey consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::VirtualKey() const
    {
        Windows::System::VirtualKey value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_VirtualKey(put_abi(value)));
        return value;
    }
    template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::KeyStatus() const
    {
        Windows::UI::Core::CorePhysicalKeyStatus value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_KeyStatus(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::RoutingStage() const
    {
        Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_RoutingStage(put_abi(value)));
        return value;
    }
    template <typename D> bool consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::Handled() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_Handled(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::Handled(bool value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->put_Handled(value));
    }
    template <typename D> Windows::Web::UI::Interop::WebViewControlMoveFocusReason consume_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs<D>::Reason() const
    {
        Windows::Web::UI::Interop::WebViewControlMoveFocusReason value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs)->get_Reason(put_abi(value)));
        return value;
    }
    template <typename D> uint32_t consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessId() const
    {
        uint32_t value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->get_ProcessId(&value));
        return value;
    }
    template <typename D> hstring consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::EnterpriseId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->get_EnterpriseId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> bool consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::IsPrivateNetworkClientServerCapabilityEnabled() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->get_IsPrivateNetworkClientServerCapabilityEnabled(&value));
        return value;
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Web::UI::Interop::WebViewControl> consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect const& bounds) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->CreateWebViewControlAsync(hostWindowHandle, get_abi(bounds), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::UI::Interop::WebViewControl> consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::GetWebViewControls() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->GetWebViewControls(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::Terminate() const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->Terminate());
    }
    template <typename D> winrt::event_token consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->add_ProcessExited(get_abi(handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited_revoker consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ProcessExited_revoker>(this, ProcessExited(handler));
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->remove_ProcessExited(get_abi(token)));
    }
    template <typename D> Windows::Web::UI::Interop::WebViewControlProcess consume_Windows_Web_UI_Interop_IWebViewControlProcessFactory<D>::CreateWithOptions(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessFactory)->CreateWithOptions(get_abi(processOptions), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::EnterpriseId(param::hstring const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->put_EnterpriseId(get_abi(value)));
    }
    template <typename D> hstring consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::EnterpriseId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->get_EnterpriseId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->put_PrivateNetworkClientServerCapability(get_abi(value)));
    }
    template <typename D> Windows::Web::UI::Interop::WebViewControlProcessCapabilityState consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::PrivateNetworkClientServerCapability() const
    {
        Windows::Web::UI::Interop::WebViewControlProcessCapabilityState value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->get_PrivateNetworkClientServerCapability(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Web::UI::Interop::WebViewControlProcess consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Process() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_Process(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Scale(double value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->put_Scale(value));
    }
    template <typename D> double consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Scale() const
    {
        double value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_Scale(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Bounds(Windows::Foundation::Rect const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->put_Bounds(get_abi(value)));
    }
    template <typename D> Windows::Foundation::Rect consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Bounds() const
    {
        Windows::Foundation::Rect value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_Bounds(put_abi(value)));
        return value;
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::IsVisible(bool value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->put_IsVisible(value));
    }
    template <typename D> bool consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::IsVisible() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_IsVisible(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Close() const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->Close());
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocus(Windows::Web::UI::Interop::WebViewControlMoveFocusReason const& reason) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->MoveFocus(get_abi(reason)));
    }
    template <typename D> winrt::event_token consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->add_MoveFocusRequested(get_abi(handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested_revoker consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MoveFocusRequested_revoker>(this, MoveFocusRequested(handler));
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->remove_MoveFocusRequested(get_abi(token)));
    }
    template <typename D> winrt::event_token consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->add_AcceleratorKeyPressed(get_abi(handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed_revoker consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AcceleratorKeyPressed_revoker>(this, AcceleratorKeyPressed(handler));
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->remove_AcceleratorKeyPressed(get_abi(token)));
    }
    template <typename D> winrt::event_token consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::GotFocus(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite2)->add_GotFocus(get_abi(handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::GotFocus_revoker consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::GotFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, GotFocus_revoker>(this, GotFocus(handler));
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::GotFocus(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite2)->remove_GotFocus(get_abi(token)));
    }
    template <typename D> winrt::event_token consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::LostFocus(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite2)->add_LostFocus(get_abi(handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::LostFocus_revoker consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::LostFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, LostFocus_revoker>(this, LostFocus(handler));
    }
    template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>::LostFocus(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite2)->remove_LostFocus(get_abi(token)));
    }
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
    {
        int32_t WINRT_CALL get_EventType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreAcceleratorKeyEventType>(this->shim().EventType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_VirtualKey(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().VirtualKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus* value) noexcept final try
        {
            zero_abi<Windows::UI::Core::CorePhysicalKeyStatus>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CorePhysicalKeyStatus>(this->shim().KeyStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_RoutingStage(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage>(this->shim().RoutingStage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Handled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_Handled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
    {
        int32_t WINRT_CALL get_Reason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlMoveFocusReason>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlProcess> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlProcess>
    {
        int32_t WINRT_CALL get_ProcessId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ProcessId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_EnterpriseId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_IsPrivateNetworkClientServerCapabilityEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrivateNetworkClientServerCapabilityEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect bounds, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Web::UI::Interop::WebViewControl>>(this->shim().CreateWebViewControlAsync(hostWindowHandle, *reinterpret_cast<Windows::Foundation::Rect const*>(&bounds)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetWebViewControls(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Web::UI::Interop::WebViewControl>>(this->shim().GetWebViewControls());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL Terminate() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Terminate();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL add_ProcessExited(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ProcessExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_ProcessExited(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessExited(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlProcessFactory> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlProcessFactory>
    {
        int32_t WINRT_CALL CreateWithOptions(void* processOptions, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::UI::Interop::WebViewControlProcess>(this->shim().CreateWithOptions(*reinterpret_cast<Windows::Web::UI::Interop::WebViewControlProcessOptions const*>(&processOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlProcessOptions> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlProcessOptions>
    {
        int32_t WINRT_CALL put_EnterpriseId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterpriseId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_EnterpriseId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_PrivateNetworkClientServerCapability(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrivateNetworkClientServerCapability(*reinterpret_cast<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_PrivateNetworkClientServerCapability(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState>(this->shim().PrivateNetworkClientServerCapability());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlSite> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlSite>
    {
        int32_t WINRT_CALL get_Process(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlProcess>(this->shim().Process());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_Scale(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Scale(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Scale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_Bounds(Windows::Foundation::Rect value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Bounds(Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Bounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_IsVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_IsVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL Close() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL MoveFocus(int32_t reason) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveFocus(*reinterpret_cast<Windows::Web::UI::Interop::WebViewControlMoveFocusReason const*>(&reason));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL add_MoveFocusRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MoveFocusRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_MoveFocusRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveFocusRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t WINRT_CALL add_AcceleratorKeyPressed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AcceleratorKeyPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_AcceleratorKeyPressed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceleratorKeyPressed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Web::UI::Interop::IWebViewControlSite2> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        int32_t WINRT_CALL add_GotFocus(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GotFocus(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_GotFocus(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GotFocus(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t WINRT_CALL add_LostFocus(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().LostFocus(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_LostFocus(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LostFocus(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
}
namespace winrt::Windows::Web::UI::Interop
{
    inline WebViewControlProcess::WebViewControlProcess() :
        WebViewControlProcess(impl::call_factory<WebViewControlProcess>([](auto&& f) { return f.template ActivateInstance<WebViewControlProcess>(); }))
    {
    }
    inline WebViewControlProcess::WebViewControlProcess(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions) :
        WebViewControlProcess(impl::call_factory<WebViewControlProcess, Windows::Web::UI::Interop::IWebViewControlProcessFactory>([&](auto&& f) { return f.CreateWithOptions(processOptions); }))
    {
    }
    inline WebViewControlProcessOptions::WebViewControlProcessOptions() :
        WebViewControlProcessOptions(impl::call_factory<WebViewControlProcessOptions>([](auto&& f) { return f.template ActivateInstance<WebViewControlProcessOptions>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlProcess> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlProcess> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlProcessFactory> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlProcessFactory> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlProcessOptions> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlProcessOptions> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlSite> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlSite> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlSite2> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlSite2> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControl> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControl> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlProcess> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlProcess> {};
    template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlProcessOptions> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlProcessOptions> {};
}
#endif
