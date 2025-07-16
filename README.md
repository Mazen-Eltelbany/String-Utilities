# " String Utilities - C++ Class "  

 A C++ class `clsString` that encapsulates multiple string manipulation utilities, including:

- Counting words, letters, specific characters
- Converting to lowercase/uppercase
- Reversing word order
- Trimming and splitting
- Punctuation removal
- String replacements
- Digit detection

## How to Use

Include `clsString.h` and create a `clsString` object:

```cpp
#include "clsString.h"

int main() {
    clsString name("Hello World!");
    cout << name.upperallstring(); // Output: HELLO WORLD!
}
```