#include <iostream>
#include <cstring>

char str[1001];

int main() {
    std::cin.get(str, 1001);

    unsigned int n;
    std::cin >> n;

    
    std::cout << str;
    unsigned int len = strlen(str);
    unsigned int k;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        if (k % 2 == 0) {
            for (int j = 0; j < k; j++){
                str[len++] = str[j];
            }
        }
        else if (k % 2 != 0) {
            for (int j = k - 1; j >= 0; j--) {
                str[len++] = str[j];
            }
        }
    }
    str[len] = '\0';

    std::cout << str;

    return 0;
}