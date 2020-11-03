#include <iostream>

int summed(unsigned long long nr) {
    unsigned int d = 0, sum = 0;
    for (d = 1; d * d < nr; d++)
        if (nr % d == 0)
            sum += d + nr/d;
    if (d * d == nr)
        sum += d;

    return sum;
}

int main() {
    unsigned long long n = 0;
    std::cin >> n;
    
    std::cout << n;
    if ( (2 * n) == summed(n) )
        std::cout << " este perfect";
    else
        std:: cout << " nu este perfect";

    return 0;
}
