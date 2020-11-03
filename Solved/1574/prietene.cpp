#include <iostream>

int summed(int nr) {
    unsigned int d = 0, sum = 0;
    for (d = 1; d * d < nr; d++)
        if (nr % d == 0)
            sum += d + nr/d;;

    return sum;
}

int main() {
    unsigned int a, b;
    std::cin >> a >> b;

    if (summed(a) == summed(b))
        std::cout << "PRIETENE";
    else
        std::cout << "NU SUNT PRIETENE";
    
    return 0;
}
