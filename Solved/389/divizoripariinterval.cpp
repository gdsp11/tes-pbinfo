#include <cstdint>
#include <iostream>

int DivCount(int nr) {
    unsigned int count = 0;

    unsigned int d = 0;
    for (d = 1; d*d < nr; d++) {
        if (nr % d == 0) {
            if (d % 2 == 0)
                count++;
            if ( (nr / d) % 2 == 0)
                count++;
        }
    }
    if (d * d == nr)
        count++;

    return count;
}

int main () {
    unsigned int a = 0, b = 0;
    std::cin >> a >> b;

    unsigned int MaxCount = 0;
    unsigned int MinDiv = INT32_MAX, MaxDiv = 0;
    for (unsigned int i = a; i <= b; i++) {
        if (DivCount(i) > MaxCount) {
            MaxCount = DivCount(i);
            MinDiv = INT32_MAX;
            MaxDiv = 0;
        }

        if (DivCount(i) == MaxCount) {
            if (i > MaxDiv)
                MaxDiv = i;
            if (i < MinDiv)
                MinDiv = i;
        }
    }
    
    std::cout << MaxCount << ' ' << MinDiv << ' ' << MaxDiv;

    return 0;
}
