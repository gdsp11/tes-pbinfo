//pbinfo - #85

#include <iostream>
#include <cstring>

char str[101];
char vocal[] = {"aeiouAEIOU"};

bool hasvocal(char str[]) {
    unsigned int j = 0;
    while (str[j]) {
        if (strchr(vocal, str[j])) {
            return true;
        }
        j++;
    }

    return false;
}

int main () {
    std::cin.get(str, 101);

    if (hasvocal(str)) {
        unsigned int i = 0;
        while (str[i]) {
            std::cout << str[i];
            if (strchr(vocal, str[i])) {
                std::cout << '*';
            }
            i++;
        }
    }
    else
        std::cout << "FARA VOCALE";
    return 0;
}