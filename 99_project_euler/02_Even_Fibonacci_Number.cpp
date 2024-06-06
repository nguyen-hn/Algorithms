#include "ProjectEuler.h"

void ProjectEuler::EvenFibonacciNumbers()
{
    const int maxN = 4*1e6;
    int a = 1;
    int b = 2;
    int sum = 0;
    while (b <= maxN) {
        if (b%2 == 0)
            sum += b;
        int temp = b;
        b = a + b;
        a = temp;
    }

    std::cout << sum << std::endl;
}
