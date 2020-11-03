//pbinfo - 890

/*
aA - 0
eE - 1
iI - 2
oO - 3
uU - 4
*/

#include <iostream>
#include <cstring>

char str[256];

    unsigned int freq[4] = {0}, max_freq = 0, ind = 0;
int main() {
    std::cin.get(str, 256);


    for (unsigned int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A')
            freq[0]++;
        else if (str[i] == 'e' || str[i] == 'E')
            freq[1]++;
        else if (str[i] == 'i' || str[i] == 'I')
            freq[2]++;
        else if (str[i] == 'o' || str[i] == 'O')
            freq[3]++;
        else if (str[i] == 'u' || str[i] == 'U')
            freq[4]++;
    }

    for (unsigned int i = 0; i < 5; i++)
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            ind = i;
        }

    switch (ind) {
        case 0:
            std::cout << 'A';
            break;
        case 1:
            std::cout << 'E';
            break;
        case 2:
            std::cout << 'I';
            break;
        case 3:
            std::cout << 'O';
            break;
        case 4:
            std::cout << 'U';
            break;
    
        default:
            break;
    }

    return 0;
}