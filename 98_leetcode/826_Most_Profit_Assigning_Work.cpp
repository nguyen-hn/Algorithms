#include "Solution.h"
#include <vector>

int Solution::maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker)
{
	int n = difficulty.size();
    int m = worker.size();
    vector<pair<int, int>> jobs;
    for(int i = 0; i < n; i++) {
        jobs.push_back({difficulty[i], profit[i]});
    }
    // jobs.push_back({0,0});
    sort(jobs.begin(), jobs.end(), [](auto &a, auto& b){
        return (a.first < b.first) || (a.first == b.first && a.second > b.second); 
    });
    sort(worker.begin(), worker.end());
    
    // for(auto j: jobs) cout << j.first << ", " << j.second << endl;
    // cout << "================\n";
    int ans = 0;
    int i = 0;
    int j = 0;
    int p = 0;
    while (i < m) {
        while (j < n && jobs[j].first <= worker[i]) {
            p = max(p, jobs[j].second);
            j++;
        }
        // cout << worker[i] << "\t" << p << endl;
        ans += p;
        i++;
    }
    return ans;
}
