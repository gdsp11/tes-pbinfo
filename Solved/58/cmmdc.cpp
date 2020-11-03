#include <iostream>

int32_t main() {
    uint32_t a, b;
    std::cin >> a >> b;
    
    uint32_t r = 0;
    if (a != 0 && b != 0)
        while (b) {
            r = a % b;
            a = b;
            b = r;
        }
    else if (a == 0 && b == 0) {
        std::cout << -1;
        return 0;
    }
    else if (a == 0 && b != 0) {
        std::cout << b;
        return 0;
    }
    else if (a != 0 && b == 0) {
        std::cout << a;
        return 0;
    }
    std::cout << a;

    return 0;
}
