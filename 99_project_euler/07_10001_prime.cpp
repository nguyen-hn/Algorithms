#include "ProjectEuler.h"

void ProjectEuler::TenThousandOnePrime()
{
    sieveEratosthenes(105000);
    std::cout << primes[10000] << std::endl;
}
