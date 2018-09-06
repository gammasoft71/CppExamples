#include <iostream>
#include <string>

using namespace std;

struct abstract {
  virtual ~abstract() {}
};

class TextReader : public abstract {
public:
  virtual int ReadByte() = 0;
  
  string ReadLine() {
    string line;
    for (int b = ReadByte(); b != -1 && b != '\n'; b = ReadByte())
      line += static_cast<char32_t>(b);
    return line;
  }
  
  string ReadText() {
    string text;
    for (int b = ReadByte(); b != -1; b = ReadByte())
      text += static_cast<char32_t>(b);
    return text;
  }
};

class StringReader : public TextReader {
public:
  StringReader(const string& value) : iterator(value.begin()), end(value.end()) {}
  
  int ReadByte() override {
    if (this->iterator == this->end)
      return -1;
    int value = *this->iterator;
    ++this->iterator;
    return value;
  }
  
private:
  string::const_iterator iterator;
  string::const_iterator end;
};

int main(int argc, char* argv[]) {
  string text = "Line 1\nLine 2\nLine 3";
  
  StringReader sr(text);
  cout << sr.ReadLine() << endl;
}

// This code produces the following output:
//
// Line 1
