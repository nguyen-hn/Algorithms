#include "ProjectEuler.h"
#include <iostream>

void ProjectEuler::DistinctPowers() {
    // a^b with a: 2 -> 100, b: 2 -> 100
    int total = 99*99;
    // 4^b with b 2 -> 50 same as 2^2b with 2b <= 100
    // 9^b with b 2 -> 50 same as 3^2b with 2b <= 100
    // 8^b with b 2 -> 33 same as 2^3b, 3b <= 100
    // 8^b with b 34, 36, ..., 66 same as 4^{3b} with 3b < 100
    // 16^b with b 2 -> 25 same as 2^4b with 4b <= 100
    // 16^b with b 26 -> 50 same as 4^(b/2) with 2b <= 100
    // 16^b with b 51 54 ... 75 same as 8^4b with 4b <= 100
    // 25^b with b 2 -> 50 same as 5^2b with 2b <= 100
    // 27^b with b 3 -> 33 same as 3^3b with 3b <= 100
    // 27^b with b 34, 36, ..., 66 same as 9^3b with 3b < 100
    // 32^b with b 2->20 same as 2^5b, b 22 24 ... 40 same as 4^(5b/2)
    // 32^b with b 21 27 33 39 42 45 48 51 54 57 60 same as 8^(5b/3)
    // 32^b with b 44 52 56 64 68 72 76 80 same as 16^(5b/4)
    // 36^b with b 2 -> 50 same as 6^2b with 2b <= 100
    // 49^b with b 2 -> 50 same as 7^2b with 2b <= 100
    // 64^b with b 2 -> 50 same as 8^2b, b -> 
    // 81^b with b 2 -> 50 same as 9^2b, b 51 54 ... 75 same as 27^4b
    // 100^b with b 2 -> 50 same as 10^2b with 2b <= 100
    total -= (49 /*4*/ + 49 /*9*/ + 32 + 17 /*8*/ + 24 + 25 + 9/*16*/ + 49 /*25*/ + 31 + 17/*27*/ + 19 + 10 + 4 + 7 + 8/*32*/ + 50 /*36*/ + 50 /*49*/ 
              + 49 /*64*/ + 49 /*81*/ + 49 /*100*/);
    std::cout << total << std::endl;
}
