#include <iostream>

int main () {
    uint64_t a, b;
    std::cin >> a >> b;

    for (uint64_t d = 1; d <= std::min(a, b); d++) 
        if (a % d == 0 && b % d == 0)
            std::cout << d << ' ';

    return 0;
}
