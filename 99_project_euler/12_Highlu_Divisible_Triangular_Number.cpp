#include "ProjectEuler.h"

void ProjectEuler::HighlyDivisibleTriangularNumber()
{
    sieveEratosthenes(1e6);
    int num_divisor = 0;
    int n = 7;
    while (num_divisor <= 500) {
        n++;
        num_divisor = 1;
        int a, b;
        if ( n % 2 == 0) {
            a = n/2;
            b = n+1;
        } else {
            a = n;
            b = (n+1)/2;
        }
        for(auto p: primes) {
            if (p >= n + 1) break;
            int cnt = 1;
            while ((a % p) == 0) {
                a = a/p;
                cnt++;
            }
            num_divisor *= cnt;
            cnt = 1;
            while ((b % p) == 0) {
                b = b/p;
                cnt++;
            }
            num_divisor *= cnt;
        }

    }
    std::cout << n*(n+1)/2 << std::endl;
}
