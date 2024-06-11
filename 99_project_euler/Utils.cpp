#include "ProjectEuler.h"

void ProjectEuler::sieveEratosthenes(int n)
{
    primes.clear();
    std::vector<int> v(n+1, 1);
    v[0] = 0;
    v[1] = 0;
    for(int i = 4; i <= n; i+=2) {
        v[i] = 0;
    }

    for(int p = 3; p*p <= n; p += 2) {
        if (v[p] == 1) {
            for(int i = p*p; i <= n; i += p) {
                v[i] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if (v[i] == 1) {
            primes.push_back(i);
        }
    }
}

int ProjectEuler::sumFactors(int n)
{
    int res = 1;
    for(int i = 2; i < std::ceil(sqrt(n)) + 1; i++) {
        if (n % i == 0) {
            //std::cout << __FUNCTION__ << " " << i << ", " << (n/i) << ", ";
            if (i != n/i) {
                res = res + i + n/i;
            } else {
                // std::cout << __FUNCTION__ << "???\n";
                res = res + i;
            }
        }
    }
    // std::cout << std::endl;
    return res;
}
