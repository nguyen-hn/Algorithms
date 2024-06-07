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
