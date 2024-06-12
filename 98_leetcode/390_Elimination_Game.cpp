#include "Solution.h"

int Solution::lastRemaining(int n) {
    return n == 1 ? 1 : 2 *(1 + n/2 - lastRemaining(n/2));
}
