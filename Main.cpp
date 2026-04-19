// Filename: word_counter.cpp
// Description: Counts words and checks against a target length.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string text, word;
    int word_count = 0;
    
    cout << "=== Word Counter ===" << endl;
    cout << "Paste your text (type 'END' on a new line to finish):" << endl;
    
    // Read multi-line input
    string full_text;
    while (getline(cin, text)) {
        if (text == "END") break;
        full_text += text + " ";
    }
    
    // Count words
    stringstream ss(full_text);
    while (ss >> word) {
        word_count++;
    }
    
    cout << "\nTotal words: " << word_count << endl;
    int target = 300;
    if (word_count >= target) {
        cout << "Meets the " << target << "-word requirement." << endl;
    } else {
        cout << "Needs " << (target - word_count) << " more words to reach " << target << "." << endl;
    }
    
    return 0;
}
