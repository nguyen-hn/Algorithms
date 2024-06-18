#include "ProjectEuler.h"
#include <vector>

void ProjectEuler::count(std::vector<int>& arr, int target, int i, int& cnt) {
    if (target == 0) {
        cnt++;
        return;
    }
    while (i < arr.size() && target - arr[i] >= 0) {
        count(arr, target - arr[i], i, cnt);
        i++;
    }
}

void ProjectEuler::CoinSums() {
    std::vector<int> base = {1, 2, 5, 10, 20 ,50, 100, 200};
    int target = 200;
    int cnt = 0;
    count(base, target, 0, cnt);
    std::cout << cnt << std::endl;
}
