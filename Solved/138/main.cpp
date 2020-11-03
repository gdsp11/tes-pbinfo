#include <iostream>
#include <cstring>

char str[256];

int main() {
    std::cin.get(str, 256);

    int v[26] = {0};
    for (unsigned int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') 
            v[str[i] - 'a']++;
    }

    unsigned int maxx = 0;
    unsigned int ind;
    for (unsigned int i = 0; i < 26; i++) {
        if (v[i] > maxx) {
            maxx = v[i];
            ind = i;
        }
    }

    std::cout << (char)(ind + 'a');

    return 0;
}