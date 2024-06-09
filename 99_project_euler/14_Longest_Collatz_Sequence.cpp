#include "ProjectEuler.h"

void ProjectEuler::LongestCollatzSequence()
{
    const int l = 1e6+1;
    int longest_len = 0;
    int ans = 0;
    for(int i = 2; i < l; i++) {
        int cnt = 0;
        long long curr = (long long)i;
        //std::cout << "start: " << curr << ": ";
        while (curr != 1) {
            //std::cout << curr << ", ";
            cnt++;
            if (curr % 2 == 0) {
                curr /= 2;
            } else {
                curr = 3*curr+1;
            }
        }
        //std::cout << std::endl;
        if (cnt > longest_len) {
            longest_len = cnt;
            ans = i;
        }
        //    std::cout << longest_len << std::endl;
    }
    std::cout << ans << std::endl;
}
