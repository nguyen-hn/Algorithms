#include "ProjectEuler.h"

void ProjectEuler::DigitFactorials()
{
    std::map<int, int> digit_factorial = {{0, 1}, {1,1}, {2,2}, {3,6}, {4,24}, {5,120}
        ,{6,720}, {7,5040}, {8, 40320}, {9, 362880}};
    int ans = 0;
    for(int i = 3; i <= 999999; i++) {
        int sum = 0;
        int num = i;
        while (num > 0) {
            sum += digit_factorial[num%10];
            num /= 10;
        }
        if (i == sum) {
            ans += sum;
        }
    }
    std::cout << ans << std::endl;
}
