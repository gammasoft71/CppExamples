#include <iostream>
#include <string>

#if WIN32
#include <Windows.h>
#else
int SetConsoleOutputCP(int codePage) {return 1;}
#endif

using namespace std;
using namespace string_literals;

auto main(int argc, char* argv[]) -> int {
  auto arabic = "\u0627\u0644\u0643\u0644\u0645\u0629 \u0627\u0644\u0639\u0631\u0628\u064A\u0629"s;
  auto tradChinese = "\u4E2D\u570B\u7684\u6F22\u5B57"s;
  auto simplChinese = "\u6C49\u8BED"s;
  auto french = "Langue fran\u00E7aise"s;
  auto greek = "\u0395\u03BB\u03BB\u03B7\u03BD\u03B9\u03BA\u03AE \u03B3\u03BB\u03CE\u03C3\u03C3\u03B1"s;
  auto hebrew = "\u05DB\u05EA\u05D1 \u05E2\u05D1\u05E8\u05D9\u05EA"s;
  auto hindi = "\u0939\u093f\u0928\u094d\u0926\u0940 \u092d\u093e\u0937\u093e"s;
  auto icelandic = "\u00CDslenska"s;
  auto japanese = "\u65E5\u672C\u8A9E\u306E\u3072\u3089\u304C\u306A, \u6F22\u5B57\u3068\u30AB\u30BF\u30AB\u30CA"s;
  auto korean = "\uB300\uD55C\uBBFC\uAD6D\uC758 \uD55C\uAE00"s;
  auto russian = "\u0420\u0443\u0441\u0441\u043A\u0438\u0439 \u044F\u0437\u044B\u043A"s;
  
  SetConsoleOutputCP(65001);
  cout << "Arabic:         " << arabic << endl;
  cout << "Trad. Chinese:  " << tradChinese << endl;
  cout << "Simpl. Chinese: " << simplChinese << endl;
  cout << "French:         " << french << endl;
  cout << "Greek:          " << greek << endl;
  cout << "Hebrew:         " << hebrew << endl;
  cout << "Hindi:          " << hindi << endl;
  cout << "Icelandic:      " << icelandic << endl;
  cout << "Japanese:       " << japanese << endl;
  cout << "Korean:         " << korean << endl;
  cout << "Russian:        " << russian << endl;
}

// This code produces the following output:
//
// Arabic:         الكلمة العربية
// Trad. Chinese:  中國的漢字
// Simpl. Chinese: 汉语
// French:         Langue française
// Greek:          Ελληνική γλώσσα
// Hebrew:         כתב עברית
// Hindi:          हिन्दी भाषा
// Icelandic:      Íslenska
// Japanese:       日本語のひらがな, 漢字とカタカナ
// Korean:         대한민국의 한글
// Russian:        Русский язык
