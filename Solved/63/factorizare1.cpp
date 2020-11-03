#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n; 

    unsigned int pwr = 0, PwrMax = 0, d = 2; 
    unsigned int prime = 0;
    while (n > 1) {
        pwr = 0;

        while (n % d == 0) {
            pwr++;
            n /= d;
        }
        if (pwr >= PwrMax && d > prime) {
            PwrMax = pwr;
            prime = d;
        }
        d++;
        if (d * d > n)
            d = n;
    }
    
    std::cout << prime;

    return 0;
}
