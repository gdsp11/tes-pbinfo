#include <iostream>

int32_t main() {
    uint32_t n, m;
    std::cin >> n >> m;
    
    uint32_t d = 2;
    bool ok = true;
    while (n > 1 && m > 1) {
        if ((n % d == 0 && m % d != 0) || (n % d != 0 && m % d == 0)) {
            ok = false;
            break;
        }

        while (n % d == 0)
            n /= d;
        while (m % d == 0)
            m /= d;
        
        d++;
    }
    if (ok)
        std::cout << "DA";
    else
        std::cout << "NU";

    return 0;
}
