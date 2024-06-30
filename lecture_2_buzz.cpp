#include <iostream>
#include <string>

bool contains_seven(int num) {
    while(num > 0) {
        if(num % 10 == 7) {
            return true;
        }
        num /= 10;
    }
    return false;
}

std::string buzz(const int n) {
    if(n % 7 == 0) {
        return "buzz";
    }
    else if(contains_seven(n)) {
        return "buzz";
    }
    else {
        return std::to_string(n);
    }
}

int main() {
    int n { 14 };
    std::cout << buzz(14);
}