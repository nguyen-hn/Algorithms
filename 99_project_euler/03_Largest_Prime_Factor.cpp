#include "ProjectEuler.h"

void ProjectEuler::LargestPrimeFactor()
{
    long long num = 600851475143;
    long long p = 3;
    while (num > 1) {
        while (num%p == 0) {
            num = num/p;
        }
        if (num == 1) {
            break;
        }
        //std::cout << p << " "  << num << std::endl;
        p+=2;
    }
    std::cout << p << std::endl;
}
