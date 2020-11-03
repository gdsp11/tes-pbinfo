#include <iostream>
#include <math.h>

int32_t main() {
    uint32_t n;
    std::cin >> n;

    uint32_t d = sqrt(n);
    while (d >= 1) {
        if (n % d == 0) {
            std::cout << d << ' ' << n / d;
            break;
        }
        d--;
    }

    return 0;
}
