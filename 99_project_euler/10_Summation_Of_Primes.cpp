#include "ProjectEuler.h"

void ProjectEuler::SummationOfPrimes() {
    sieveEratosthenes(2000000);
    long long sum = 0;
    for(auto e: primes) {
        sum += static_cast<long long>(e);
    }
    std::cout << sum << std::endl;
}
