#include <iostream>

int mirror(int nr) {
    unsigned int k = 0;
    while (nr) {
        k = k * 10 + nr % 10;
        nr /= 10;
    }

    return k;
}

int counter(int nr) {
    unsigned int d = 0, count = 0;
    for (d = 1; d * d < nr; d++)
        if (nr % d == 0)
            count += 2;
    if (d * d == nr)
        count++;

    return count;
}

int main() {
    unsigned int n = 0;
    std::cin >> n;

    std::cout << counter(mirror(n));

    return 0;
}
