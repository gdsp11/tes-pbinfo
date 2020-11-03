#include <iostream>

uint32_t DivCount(uint32_t number) {
    uint16_t div = 0;
    uint16_t d = 2;
    for (d = 2; d * d < number; d++) 
        if (number % d == 0)
            div++;
    div *= 2;
    if (d * d == number)
        div++;
    return div;
}

int32_t main() {
    uint32_t n;
    std::cin >> n;
    
    uint32_t MaxDiv = 0, MaxNumber = 0;
    for (uint32_t i = 1; i <= n; i++) {
        if (DivCount(i) > MaxDiv) {
            MaxDiv = DivCount(i);
            MaxNumber = i;
        }
    }
    std::cout << MaxNumber;

    return 0;
}
