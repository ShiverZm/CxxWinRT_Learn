// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_0_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_0_H
namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop
{
    enum class DragDropModifiers : uint32_t
    {
        None = 0,
        Shift = 0x1,
        Control = 0x2,
        Alt = 0x4,
        LeftButton = 0x8,
        MiddleButton = 0x10,
        RightButton = 0x20,
    };
}
namespace winrt::impl
{
    template<> struct is_enum_flag<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers> : std::true_type
    {
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.DragDropModifiers" };
    };
}
#endif
