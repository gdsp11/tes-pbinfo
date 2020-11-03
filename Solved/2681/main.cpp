#include <iostream>
#include <cstring>

char str[256];

bool letter_presence(char word[], int ind1, int ind2) {         //checks if the array contains at least 1 letter
    for (unsigned int z = ind1; z <= ind2; z++) {
        if ( (word[z] >= 'a' && word[z] <= 'z') || (word[z] >= 'A' && word[z] <= 'Z') )
            return 1;
    }

    return 0;
}

void print_reverse(char word[], int ind1, int ind2) {           //prints the word in reverse
    unsigned int z = ind2;
    while (z >= ind1) {
        std::cout << word[z];
        z--;
    }
}

int main() {
    std::cin.get(str, 256);

    for (unsigned int i = 0; i < strlen(str); i++) {
        std::cout << "//" << i << "\\" << '\n';
        if (str[i] == ' ') {
            std::cout << str[i] << '\n';
        }
        else if (str[i] != ' ') {
            unsigned int j = i;

            while (str[i] && i < strlen(str) && str[i] != ' ') {
                i++;
                std::cout << "|| " << i << "/" << j << " ||";               ///
            }
            std::cout << '\n';                                              ///

            if (letter_presence(str, j, i-1)) {
                print_reverse(str, j, i-1);
            }
            else {
                for (unsigned int k = j; k <= i; k++) {
                    std::cout << str[k];
                }
            }
        }
    }

    return 0;
}