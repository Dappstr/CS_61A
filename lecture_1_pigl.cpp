#include <iostream>
#include <string>

bool is_vowel(char c) {
    switch (c) {
        case 'a':
        [[fallthrough]]case 'e':
        [[fallthrough]]case 'i':
        [[fallthrough]]case 'o':
        [[fallthrough]]case 'u':
            return true;
    }
    return false;
}

std::string pigl(const std::string& word, const size_t index) {
    if(is_vowel(word.at(index))) {
        return (word.substr(index, word.size())) + word.substr(0, index) + "ay";
    }
    else {
        return pigl(word, index + 1);
    }
}

int main() {
    std::cout << pigl("scheme", 0);
}