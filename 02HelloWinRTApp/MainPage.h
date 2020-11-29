﻿#pragma once

#include "MainPage.g.h"

namespace winrt::_02HelloWinRTApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void inputButton_Click(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& e);

        //void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::_02HelloWinRTApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}