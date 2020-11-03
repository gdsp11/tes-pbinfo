#include <iostream>
#include <cstring>

char str[62];
char word1[31];
char word2[31];
char vocals[] = "aeiouAEIOU";

int main() {
    std::cin.get(str, 62);

    int i = 0;
    while (str[i] != ' ') {
        word1[i] = str[i];
        i++;
    }
    word1[i] = '\0';

    int j = 0;
    while (str[i]) {
        word2[j] = str[++i];
        j++;
    }
    word2[j] = '\0';

    for (i = 0; i < strlen(word1); i++) {
        if (strchr(vocals, word1[i]) && strchr(vocals, word2[i])) 
            std::cout << '*';
        else if (!strchr(vocals, word1[i]) && !strchr(vocals, word2[i]))
            std::cout << '#';
        else if ( !(strchr(vocals, word1[i]) && strchr(vocals, word2[i])) )
            std::cout << '?';
    }

    return 0;
}