#include <iostream>

int n;

int main() {
    std::cin >> n;

    unsigned int d = 0, s = 0;
    for (d = 1; d*d < n; d++) {
        if (n % d == 0) {
            if (d % 2 == 1)
                s += d;
            if ( (n / d) % 2 == 1)
                s += n / d;
        }
    }
    if (d * d == n && (d * d) % 2 == 1)
        s += d;

    std::cout << s;

    return 0;
}
