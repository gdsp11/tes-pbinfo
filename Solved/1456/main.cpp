//pbinfo - 1456

#include <iostream>
#include <cstring>

int main() {
    char bad_letter[] = "aeou";     //list of forbidden letters
    char str[101];
    bool ok;

    std::cin.get(str, 101);

    for (unsigned int i = 0; i < strlen(str); i++) {
        if (strchr(bad_letter, str[i])) {
            std::cout << "NU";
            return 0;
        }
        if (!strchr(bad_letter, str[i]) && str[i] != 'i') {
            ok = true;
        }
    }
    if (ok == true)
        std::cout << "DA";
    else
        std::cout << "NU";
    return 0;
}