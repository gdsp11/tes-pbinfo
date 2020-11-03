#include <iostream>

int32_t main() {
    uint16_t n;
    std::cin >> n;
    
    uint32_t MaxNumber = 0, MaxPower = 0;
    for (uint16_t i = 0; i < n; i++) {
        uint32_t x;
        std::cin >> x;
        
        uint32_t d = 2;
        while (x > 1) {
            while (x % d == 0) {
                x /= d;

                if (d > MaxNumber) {
                    MaxNumber = d;
                    MaxPower = 0;
                }
                if (d == MaxNumber)
                    MaxPower++;
            }
            if (d * d <= x)
            	d++;
            else
                d = x;
        }
    }
    
    std::cout << MaxNumber << ' ' << MaxPower;

    return 0;
}
