#include "Solution.h"
#include <iterator>
#include <queue>

int Solution::findWinningPlayer(vector<int>& skills, int k)
{
    int n = skills.size();
    if (k >= n) {
        auto m = std::max_element(skills.begin(), skills.end());
        return distance(skills.begin(), m);
    }
    int cnt = 0;
    queue<int> q;
    for(int i = 0; i < n; i++) q.push(i);
    while (true) {
        int curr = q.front();
        q.pop();
        if (cnt == k) return curr;
        while(skills[q.front()] < skills[curr]) {
            cnt++;
            if (cnt >= k) return curr;
            int next = q.front();
            q.pop();
            q.push(next);
        }
        q.push(curr);
        cnt = 1;
    }
    return 0;
}
