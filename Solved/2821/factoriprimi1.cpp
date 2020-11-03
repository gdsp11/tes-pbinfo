#include <iostream>

int32_t main() {
    uint32_t n;
    std::cin >> n;

    uint32_t d = 2, nr = 1;
    while (n > 1) {
        uint32_t p = 0;
        while (n % d == 0) {
            n /= d;
            p++;
        }
        if (p)
            nr *= d;
        d++;
        if (d * d > n)
            d = n;
    }
    std::cout << nr;

    return 0;
}
