#include "ProjectEuler.h"

void ProjectEuler::AmicableNumbers() {
    std::vector<int> v(10001);
    for(int i = 2; i < v.size(); i++) {
        v[i] = sumFactors(i);
    }
    int sum = 0;
    for(int i = 2; i < v.size(); i++) {
        if (v[i] < v.size() &&  v[v[i]] == i && i != v[i]) {
            // std::cout << v[i] << ", " << i << std::endl;
            sum = sum + i + v[i];
        }
    }
    std::cout << (sum/2) << std::endl;
}
