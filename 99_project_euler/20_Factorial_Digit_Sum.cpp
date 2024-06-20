#include "ProjectEuler.h"

void ProjectEuler::FactorialDigitSum()
{
    std::deque<char> v(150, '0');
    v[0] = '1';
    for(int i = 2; i <= 100; i++) {
        int res = 0;
        for(int j = 0; j < v.size(); j++) {
            int prod = (v[j] - '0')*i + res;
            //std::cout << "prod: " << prod << std::endl;
            res = prod/10;
            v[j] = static_cast<char>(prod%10 + '0');
        }
        while (v.front() == '0') {
            v.pop_front();
            v.push_back('0');
        }
    }
    int ans = 0;
    for(auto c: v) {
        ans += (c - '0');
    }
    std::cout << ans << std::endl;
}
