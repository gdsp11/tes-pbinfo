//pbinfo - #97 - 100pct

#include <iostream>
#include <cstring>
#include <algorithm>

char init_str[21];
char word1[21], word2[21];

void break_str(char init_str[]) {
    unsigned short i = 0;
    
    while (init_str[i] != ' ') {
        word1[i] = init_str[i];
        i++;
    }

    i++;

    unsigned short j = 0;
    while (init_str[i]) {
        word2[j] = init_str[i];
        i++;
        j++;
    }
}

int main() {
    std::cin.get(init_str, 21);

    break_str(init_str);

    std::sort(word1, word1 + strlen(word1));
    std::sort(word2, word2 + strlen(word2));

    if (strcmp(word1, word2) == 0)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}