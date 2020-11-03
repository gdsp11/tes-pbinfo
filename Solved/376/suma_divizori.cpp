#include <iostream>

int n;

int main () {

    std::cin >> n;

    unsigned int d = 0;
    uint64_t s = 0;
    for (d = 1; d*d < n; d++) {
        if (n % d == 0) {
            s += d + n/d;
        }
    }
    if (d * d == n)
        s += d;

    std::cout << s;

    return 0;
}
