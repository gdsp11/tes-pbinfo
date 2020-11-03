//pbinfo - 2828

#include <iostream>
#include <cstring>

char str[101];

int main() {
    std::cin.get(str, 101);

    unsigned int i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            std::cout << str[i];
        while (str[i] != ' ' && str[i])
            i++;
        while (str[i] == ' ')
            i++;
    }
    return 0;
}
