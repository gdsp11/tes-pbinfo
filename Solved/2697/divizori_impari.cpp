#include <iostream>

unsigned long long OddDiv(unsigned long long nr) {
    if (nr % 2 == 1)
        return nr;
    else
        while (nr % 2 == 0)
            nr /= 2;
   
    return nr;
}

int main() {
    unsigned int n;
    std::cin >> n;

    unsigned long long x;
    for (unsigned int i = 0; i < n; i++) {
        std::cin >> x;

        std::cout << OddDiv(x) << ' ';
    }

    return 0;
}
