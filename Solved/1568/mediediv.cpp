#include <iostream>
#include <iomanip>

int n;

int main() {
    std::cin >> n;

    unsigned int d = 0, k = 0;
    double s = 0;
    for (d = 1; d*d < n; d++) {
        if (n % d == 0) {
            s += d + n/d;
            k += 2;
        }
    }
    if (d * d == n) {
        s += d;
        k++;
    }
    s /= k;
    
    std::cout << std::fixed << std::setprecision(2) << s;

    return 0;
}
