#include "Solution.h"

bool Solution::judgeSquareSum(int c) {
    int sq = (int)sqrt(c);
    if (c == sq*sq) return true;
    for(int i = 1; i <= sq; i++) {
        int d = c - i*i;
        int sd = (int)sqrt(d);
        if (d == sd*sd) return true;
    }
    return false;
}
