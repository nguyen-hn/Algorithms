#include "ProjectEuler.h"
#include <ctime>

void ProjectEuler::CountingSundays()
{
    std::map<int, int> dom = {{0,0}, {1,31}, {2, 59} ,{3,90}, {4,120}, {5,151}, {6,181}, {7,212}, {8,243}, {9,273}, {10,304}, {11, 334}, {12,365}};
    auto first_day = [&](int m, int y) {
        if (m == 1) {
            y = y - 1;
            m = 12;
        } else {
            m = m-1;
        }
        int yd = (y - 1900)*365 + (y-1900) / 4 + (( (y > 1900) && ((y-1900)%4 == 0) && (m < 2)) ? -1: 0);
        return dom[m] + yd + 1;
    };
    int ans = 0;
    for(int i = 1901; i <= 2000; i++) {
        for(int j = 1; j <= 12; j++) {
            std::tm time_in = {0,0,0, 1,j-1,i-1900};
            std::time_t time_temp = std::mktime(&time_in);
            const std::tm* time_out = std::localtime(&time_temp);
            // if (time_out->tm_wday == 0) std::cout << j << "/1" << "/" << i << "\t"; 
            if (first_day(j, i) % 7 == 0 || time_out->tm_wday == 0) {
                //std::cout << j << "/1" << "/" << i << "\t" << first_day(j, i) << std::endl;
                ans++;
            }
        }
    }
    std::cout << ans << std::endl;
}
