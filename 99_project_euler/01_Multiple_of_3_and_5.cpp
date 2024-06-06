#include "ProjectEuler.h"
#include <iostream>

void ProjectEuler::MultiplesOf3And5() {
    int n = 1000;
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if (i%3 == 0) {
            sum += i;
        } else if (i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}
