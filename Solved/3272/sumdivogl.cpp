#include <iostream>

uint64_t mirror(uint64_t nr) {
    uint64_t k = 0;
    while (nr) {
        k = k * 10 + nr % 10;
        nr /= 10;
    }

    return k;
}

uint64_t summed(uint64_t nr) {
    uint64_t d = 0, sum = 0;
    for (d = 1; d * d < nr; d++)
        if (nr % d == 0)
            sum += d + nr/d;
    if (d * d == nr)
        sum += d;

    return sum;
}

int main() {
    unsigned int n = 0;
    std::cin >> n;
    
    uint64_t a, s = 0;
    for (unsigned int i = 0; i < n; i++) {
        std::cin >> a;
        s += summed(mirror(a));
    }

    std::cout << s;

    return 0;
}
