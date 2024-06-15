#include "ProjectEuler.h"

void ProjectEuler::CircularPrimes()
{
    sieveEratosthenes(1000000);

    int ans = 0;
    for(auto e: primes) {
        if (e < 19) {ans++; continue; }
        bool checked = true;
        int num = e;
        int d = static_cast<int>(log10(num));
        int t = 1;
        for(int i = 0; i < d; i++) t *= 10;
        num = (num%t)*10 + num/t;
        //std::cout << num << "," << d << std::endl;
        while (num != e) {
            if (std::find(primes.begin(), primes.end(), num) == primes.end()) {
                //std::cout << num << std::endl;
                checked = false;
                break;
            }
            num = (num%t)*10 + num/t;
        }
        if (checked) {
            //std::cout << e << std::endl;
            ans++;
        }
    }
    std::cout << ans << std::endl;
}
