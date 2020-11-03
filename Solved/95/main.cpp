//pbinfo - #95 - 100pct

#include <iostream>
#include <cstring>

char str[256];
char vocals[] = "aeiou";

int main() {
    std::cin.get(str, 256);

    unsigned int pair_count;
    for (unsigned int i = 0; i < strlen(str) - 1; i++) {
        if (strchr(vocals, str[i]) && strchr(vocals, str[i + 1])) {
            pair_count++;
        }
    }

    std::cout << pair_count;

    return 0; 
}