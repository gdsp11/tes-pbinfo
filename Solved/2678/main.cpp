//pbinfo - #2678 - 100pct

#include <iostream>
#include <cstring>

char str[256];

int main() {
    std::cin.get(str, 256);

    unsigned int sum = 0;
    for (unsigned int i = 0; i < strlen(str); i++) {
        unsigned int nr = 0;

        while (str[i] >= '0' && str[i] <= '9') {
            nr = nr * 10 +  (int)(str[i] - 48);
            i++;
        }

        sum += nr;
    }
    std::cout << sum;

    return 0;
}