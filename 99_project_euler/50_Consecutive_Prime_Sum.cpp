#include "ProjectEuler.h"

void ProjectEuler::ConsecutivePrimeSum()
{
    sieveEratosthenes(1000000);
    //std::cout << primes.size() << std::endl;
    std::vector<int> v;
    v.push_back(primes[0]);
    int i;
    for(i = 1; i < primes.size(); i++) {
        if (v[i-1] + primes[i] < 1000000) {
            v.push_back(v[i-1] + primes[i]);
        } else {
            break;
        }
    }
    int cnt = 1;
    int ans = 0;
    //std::cout << v.size() << std::endl;
    for(int j = 1; j < v.size(); j++) {
        for(int k = 0; k < j; k++) {
            int t = v[j] - v[k];
            if (std::find(primes.begin(), primes.end(), t) != primes.end()) {
                if (j - k > cnt) {
                    ans = t;
                    cnt = j - k;
                    //std::cout << k << " " << j << std::endl;
                }
            }
        }
    }
    std::cout << ans << std::endl;
}
