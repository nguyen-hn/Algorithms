#include "Solution.h"
#include <queue>

long long Solution::maximumImportance(int n, vector<vector<int>>& roads)
{
    long long ans = 0;
    map<int, int> mp;
    for(auto r: roads) {
        mp[r[0]]++;
        mp[r[1]]++;
    }
    priority_queue<int> pq;
    for(auto [k,v]: mp) pq.push(v);
    long long k = n;
    while(!pq.empty()) {
        ans += static_cast<long long>(pq.top())*k;
        k--;
        pq.pop();
    }
    return ans;
}
