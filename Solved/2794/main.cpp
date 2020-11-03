#include <iostream>
#include <cstring>

char str[101];
char codeword[101];
int init_code = 0;
int part_code[100];
int counter = 0;

void code_break(int init_code) {
    int aux = init_code;
    int k = strlen(str) - 1;

    while (aux && k) {
        part_code[k] = init_code % 10;
        init_code /= 10;
        k--;
        counter++;
    }
}

int main() {
    std::cin.get(str, 101);
    std::cin >> init_code;

    code_break(init_code);

    if (counter == strlen(str) - 1) {
        int i = strlen(str) - 1;
        while (i > 0) {
            if (part_code[i] %2 == 0) {
                std::cout << str[i];
            }

            i--;
        }

        std::cout << str[0];

        for (unsigned int i = 0; i < strlen(str); i++) {
            if (part_code[i] %2 != 0) {
                std::cout << str[i];
            }
        }
    }
    else 
        std::cout << "cod incorect";
    return 0;
}