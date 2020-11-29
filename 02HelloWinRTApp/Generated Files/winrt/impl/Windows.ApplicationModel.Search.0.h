// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201026.4

#ifndef WINRT_Windows_ApplicationModel_Search_0_H
#define WINRT_Windows_ApplicationModel_Search_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFolder;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search
{
    struct ILocalContentSuggestionSettings;
    struct ISearchPaneQueryLinguisticDetails;
    struct ISearchQueryLinguisticDetails;
    struct ISearchQueryLinguisticDetailsFactory;
    struct ISearchSuggestionCollection;
    struct ISearchSuggestionsRequest;
    struct ISearchSuggestionsRequestDeferral;
    struct LocalContentSuggestionSettings;
    struct SearchPaneQueryLinguisticDetails;
    struct SearchQueryLinguisticDetails;
    struct SearchSuggestionCollection;
    struct SearchSuggestionsRequest;
    struct SearchSuggestionsRequestDeferral;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::LocalContentSuggestionSettings> = L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::SearchSuggestionCollection> = L"Windows.ApplicationModel.Search.SearchSuggestionCollection";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::SearchSuggestionsRequest> = L"Windows.ApplicationModel.Search.SearchSuggestionsRequest";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> = L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> = L"Windows.ApplicationModel.Search.ILocalContentSuggestionSettings";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.ISearchPaneQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> = L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetailsFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ISearchSuggestionCollection> = L"Windows.ApplicationModel.Search.ISearchSuggestionCollection";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ISearchSuggestionsRequest> = L"Windows.ApplicationModel.Search.ISearchSuggestionsRequest";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> = L"Windows.ApplicationModel.Search.ISearchSuggestionsRequestDeferral";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ 0xEEAEB062,0x743D,0x456E,{ 0x84,0xA3,0x23,0xF0,0x6F,0x2D,0x15,0xD7 } }; // EEAEB062-743D-456E-84A3-23F06F2D15D7
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ 0x82FB460E,0x0940,0x4B6D,{ 0xB8,0xD0,0x64,0x2B,0x30,0x98,0x9E,0x15 } }; // 82FB460E-0940-4B6D-B8D0-642B30989E15
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ 0x46A1205B,0x69C9,0x4745,{ 0xB7,0x2F,0xA8,0xA4,0xFC,0x8F,0x24,0xAE } }; // 46A1205B-69C9-4745-B72F-A8A4FC8F24AE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ 0xCAC6C3B8,0x3C64,0x4DFD,{ 0xAD,0x9F,0x47,0x9E,0x4D,0x40,0x65,0xA4 } }; // CAC6C3B8-3C64-4DFD-AD9F-479E4D4065A4
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ 0x323A8A4B,0xFBEA,0x4446,{ 0xAB,0xBC,0x3D,0xA7,0x91,0x5F,0xDD,0x3A } }; // 323A8A4B-FBEA-4446-ABBC-3DA7915FDD3A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ 0x4E4E26A7,0x44E5,0x4039,{ 0x90,0x99,0x60,0x00,0xEA,0xD1,0xF0,0xC6 } }; // 4E4E26A7-44E5-4039-9099-6000EAD1F0C6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ 0xB71598A9,0xC065,0x456D,{ 0xA8,0x45,0x1E,0xCC,0xEC,0x5D,0xC2,0x8B } }; // B71598A9-C065-456D-A845-1ECCEC5DC28B
    template <> struct default_interface<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = Windows::ApplicationModel::Search::ILocalContentSuggestionSettings; };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionCollection; };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequest; };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral; };
    template <> struct abi<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Locations(void**) noexcept = 0;
            virtual int32_t __stdcall put_AqsFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_AqsFilter(void**) noexcept = 0;
            virtual int32_t __stdcall get_PropertiesToMatch(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryTextAlternatives(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionStart(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryTextAlternatives(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionStart(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall AppendQuerySuggestion(void*) noexcept = 0;
            virtual int32_t __stdcall AppendQuerySuggestions(void*) noexcept = 0;
            virtual int32_t __stdcall AppendResultSuggestion(void*, void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall AppendSearchSeparator(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SearchSuggestionCollection(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings
    {
        WINRT_IMPL_AUTO(void) Enabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder>) Locations() const;
        WINRT_IMPL_AUTO(void) AqsFilter(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AqsFilter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) PropertiesToMatch() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) QueryTextAlternatives() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) QueryTextCompositionStart() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) QueryTextCompositionLength() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) QueryTextAlternatives() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) QueryTextCompositionStart() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) QueryTextCompositionLength() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Search::SearchQueryLinguisticDetails) CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Size() const;
        WINRT_IMPL_AUTO(void) AppendQuerySuggestion(param::hstring const& text) const;
        WINRT_IMPL_AUTO(void) AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const;
        WINRT_IMPL_AUTO(void) AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const;
        WINRT_IMPL_AUTO(void) AppendSearchSeparator(param::hstring const& label) const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Search::SearchSuggestionCollection) SearchSuggestionCollection() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>;
    };
}
#endif
