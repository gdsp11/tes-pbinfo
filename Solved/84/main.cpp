//pbinfo - 84

#include <iostream>
#include <cstring>

char str[11];
char vocals[] = {"aeiouAEIOU"};

int first_vocal(char str[]) {
    int i = 0;
    
    while (str[i]) {
        if (strchr(vocals, str[i]))
            return i;
        i++;
    }

    return -1;
}

int last_cons(char str[]) {
    int i = strlen(str) - 1;

    while (i >= 0) {
        if (!strchr(vocals, str[i]))
            return i;
        i--;
    }

    return -1;
}

int main() {
    std::cin.get(str, 11);

    if (first_vocal(str) != -1 && last_cons(str) != -1) {
        char aux = str[first_vocal(str)];
        str[first_vocal(str)] = str[last_cons(str)];
        str[last_cons(str)] = aux;

        for (int i = 0; i < strlen(str); i++)
            std::cout << str[i];
    }
    else
        std::cout << "IMPOSIBIL";
    
    return 0;
}