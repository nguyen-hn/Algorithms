#include "ProjectEuler.h"
#include <numeric>

void ProjectEuler::PowerDigitSum()
{
    std::vector<int> v(350, 0);
    v[0] = 1;
    for(int i = 0; i < 1000; i++) {
        int rem = 0;
        for(int j = 0; j < v.size(); j++) {
            v[j] *= 2;
            v[j] += rem;
            rem = v[j]/10;
            v[j] %= 10;
        }
    }
    long long ans = 0;
    ans = std::accumulate(v.begin(), v.end(), 0);
    std::cout << ans << std::endl;
}
