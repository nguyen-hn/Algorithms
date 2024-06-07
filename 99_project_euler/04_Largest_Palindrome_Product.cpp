#include "ProjectEuler.h"
#include <string>
#include <algorithm>

void ProjectEuler::LargestPalindromeProduct()
{   int num = 0;
    int res = 0;
    for(int i = 999; i >= 100; --i) {
        for(int j = 999; j >= 100; --j) {
            if (i % 10 == 0 || j % 10 == 0) continue;
            num = i*j;
            std::string s = std::to_string(num);
            std::string t = s;
            std::reverse(t.begin(), t.end());
            //std::cout << s << " " << t << std::endl;
            if (s == t) {
                //std::cout << i << "*" << j << " = " << num << std::endl;
                res = std::max(res, num);
                break;
            }
        }
    }
    std::cout << res << std::endl;
}
