#include <iostream>

int main() {
    unsigned long long n;
    std::cin >> n;

    unsigned long long cnt = 1, d = 2;
    unsigned long long cn = n;
    while (n > 1) {
        unsigned int p = 0;
        
        while (n % d == 0) {
            n /= d;
            p++;
        }

        cnt *= (p * cn + 1);
        d++;
        if (d * d > n)
            d = n;

        while (cnt >= 59999)
            cnt %= 59999;
    }

    std::cout << cnt % 59999;

    return 0;
}
