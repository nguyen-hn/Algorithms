#include "ProjectEuler.h"
#include <vector>

void ProjectEuler::NonAbundantSums()
{
    const int upper = 28123;
    std::vector<int> lst_abundant;
    for(int i = 12; i <= upper; i++) {
        int sum = 0;
        for(int j = 1; j <= (int)sqrt(i); j++) {
            if (i % j == 0) sum += j;
            if (j != 1 && i%j == 0 && j != i/j) sum += (i/j);
        }
        if (sum > i) lst_abundant.push_back(i);
    }
    //for(auto i: lst_abundant) std::cout << i << ", ";
    //std::cout << std::endl;
    std::vector<int> v(upper, 0);
    for(auto e: lst_abundant) {
        for(auto f: lst_abundant) {
            if (e+f >= upper) continue;
            v[e+f] = 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++) {
        ans += (v[i] == 0) ? i : 0;
        //if (v[i] == 0) std::cout << i << std::endl;
    }
    std::cout << ans << std::endl;
}
