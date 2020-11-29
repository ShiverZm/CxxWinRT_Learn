// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190404.8

#ifndef WINRT_Windows_Media_Ocr_2_H
#define WINRT_Windows_Media_Ocr_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Media.Ocr.1.h"
namespace winrt::Windows::Media::Ocr
{
    struct WINRT_EBO OcrEngine : Windows::Media::Ocr::IOcrEngine
    {
        OcrEngine(std::nullptr_t) noexcept {}
        OcrEngine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrEngine(ptr, take_ownership_from_abi) {}
        static uint32_t MaxImageDimension();
        static Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> AvailableRecognizerLanguages();
        static bool IsLanguageSupported(Windows::Globalization::Language const& language);
        static Windows::Media::Ocr::OcrEngine TryCreateFromLanguage(Windows::Globalization::Language const& language);
        static Windows::Media::Ocr::OcrEngine TryCreateFromUserProfileLanguages();
    };
    struct WINRT_EBO OcrLine : Windows::Media::Ocr::IOcrLine
    {
        OcrLine(std::nullptr_t) noexcept {}
        OcrLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrLine(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO OcrResult : Windows::Media::Ocr::IOcrResult
    {
        OcrResult(std::nullptr_t) noexcept {}
        OcrResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO OcrWord : Windows::Media::Ocr::IOcrWord
    {
        OcrWord(std::nullptr_t) noexcept {}
        OcrWord(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrWord(ptr, take_ownership_from_abi) {}
    };
}
#endif
