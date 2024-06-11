#include "Solution.h"

vector<int> Solution::relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    vector<int> rest;
    vector<int> visited(arr1.size(), 0);
    for(auto e: arr2) {
        std::vector<int>::iterator iter = arr1.begin();
        while ((iter = std::find_if(iter, arr1.end(), [&](int x){ return x == e;})) != arr1.end())
        {
            visited[distance(arr1.begin(), iter)] = 1;
            ans.push_back(e);
            iter++;
        }
    }
    for(int i = 0; i < arr1.size(); i++) {
        if (visited[i] == 0) rest.push_back(arr1[i]);
    }
    sort(rest.begin(), rest.end());
    std::copy(rest.begin(), rest.end(), std::back_inserter(ans));
    return ans;
}
