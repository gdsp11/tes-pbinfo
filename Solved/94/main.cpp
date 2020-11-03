//pbinfo - #94 - 100pct

#include <iostream>
#include <cstring>

char str[21];
char vocals[] = "aeiou";

int main() {
    std::cin.get(str, 21);

    unsigned short i = 0;
    while (str[i]) {
        if (!strchr(vocals, str[i])) {
            std::cout << str[i];
        }
        i++;
    }

    return 0;
}