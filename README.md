# Word Counter - C++ Word Counter

A simple command-line tool written in C++ that counts the number of words in a given text and checks if it meets a target word count (default: 300 words).
````
## Features

- Supports multi-line text input
- Automatically counts total words in the text
- Compares against a target word count (300)
- Displays whether the requirement is met or how many more words are needed

## Requirements

- C++11 or higher compiler (GCC, Clang, MSVC)
- Standard libraries: `<iostream>`, `<string>`, `<sstream>`

## Compilation & Running

### Compile

```bash
g++ -o word_counter word_counter.cpp -std=c++11
