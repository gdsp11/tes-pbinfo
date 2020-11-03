#include <iostream>
#include <cstring>

char str[11];

int main() {
    std::cin.get(str, 11);

    for (int i = strlen(str) - 1; i > 0; i--) {
        for (int j = 0; j < i; j++)
            std::cout << str[j];
        std::cout << '\n';
    }

    for (int i = 0; i < strlen(str); i++) {
        for (int j = i; j < strlen(str); j++)
            std::cout << str[j];
        std::cout << '\n';
    }

    return 0;
}