#include <iostream>

long long PrimeCount(unsigned long long x) {
    int count = 0;
    unsigned int d = 2;
    while (x > 1) {
        if (x % d == 0) {
            count++;
        
            while (x % d == 0)
                x /= d;
        }
        if (d*d <= x)
            d++;
        else 
            d = x;
    }

    return count;
}

int main() {
    unsigned int n;
    std::cin >> n;
    
    int MaxCount = -1;
    unsigned long long x, MinNr = INT64_MAX;
    for (unsigned int i = 0; i < n; i++) {
        std::cin >> x;
        if (PrimeCount(x) > MaxCount) {
            MaxCount = PrimeCount(x);
            MinNr = x;
        }
        else if (PrimeCount(x) == MaxCount && x < MinNr) {
        	MinNr = x;
        }
    }
    std::cout << MinNr;

    return 0;
}
