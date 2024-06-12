#include "ProjectEuler.h"

void ProjectEuler::PrimePermutations()
{
    sieveEratosthenes(10000);
    for(auto i: primes) {
        for(auto j: primes) {
            for(auto k: primes) {
                if (i < 1000 || j < 1000 || k < 1000 || i == j || j == k || i == k) continue;
                if (i < j && j < k && ((j - i) == (k - j))) {
                    // check permutation
                    std::string s1 = std::to_string(i);
                    std::string s2 = std::to_string(j);
                    std::string s3 = std::to_string(k);
                    std::sort(s1.begin(), s1.end());
                    std::sort(s2.begin(), s2.end());
                    if (s1 != s2) continue;
                    std::sort(s3.begin(), s3.end());
                    if (s1 != s3) continue;
                    if (i == 1487) continue;
                    // check sequence
                    if ((j-i) == (k-j)) {
                        std::cout << i << j << k << std::endl;
                    }
                }
            }
        }
    }
}
