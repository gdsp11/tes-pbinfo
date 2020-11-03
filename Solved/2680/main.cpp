//pbinfo - #2680 - 100pct

#include <iostream>
#include <cstring>

char str[256];
char signs[] = ".,!?";
unsigned short n;

int main() {
    std::cin >> n;

    std::cin.get();
    for (unsigned short i = 0; i < n; i++) {
        std::cin.getline(str, 256);

        for (unsigned int j = 0; j < strlen(str) - 1; j++) {
            if (!strchr(signs, str[j]))
                std::cout << str[j];
        }
        std::cout << str[strlen(str) - 1] << '\n';
    }

    return 0;
}