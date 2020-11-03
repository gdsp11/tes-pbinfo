#include <iostream>
#include <cstring>

char str[42];
char name[21];
char surname[21];
char vocals[] = "aeiouAEIOU";

int main() {
    std::cin.get(str, 42);

    int i = 0;
    while (str[i] != ' ') {
        surname[i] = str[i];
        i++;
    }
    surname[i] = '\0';

    int j = 0;
    while (str[i]) {
        name[j] = str[++i];
        j++;
    }
    name[j] = '\0';

    for (i = 0; i < strlen(name); i++) {
        if (!strchr(vocals, name[i]))
            std::cout << name[i];
    }
    std::cout << ' ';
    std::cout << surname;

    return 0;
}