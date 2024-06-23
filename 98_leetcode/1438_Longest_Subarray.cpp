#include "Solution.h"

int Solution::longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int i = 0, j = 0;
        int ans = 0;
        std::multiset<int> mst;
        for(; i < n; i++) {
            mst.insert(nums[i]);
            // cout << "i: " << i << "\tsize: " << mst.size() << endl;//<< "min: " << (*mst.begin()) << "\tmax: " << (*mst.rbegin()) << endl;
            /*if (mst.size() < 2 || (abs(*mst.begin() - *mst.rbegin()) <= limit) ) {
                mst.insert(nums[i]);
            } else*/ if (abs(*mst.begin() - *mst.rbegin()) > limit) {
                
                while (abs(*mst.begin() - *mst.rbegin()) > limit) {
                    // std::cout << "min: " << (*mst.begin()) << "\tmax: " << (*mst.rbegin()) << endl;
                    // cout << nums[j] << endl;
                    auto itr = mst.find(nums[j]);
                    if(itr != mst.end()){
                        mst.erase(itr);
                    }
                    // std::cout << "min: " << (*mst.begin()) << "\tmax: " << (*mst.rbegin()) << endl;
                    j++;
                }
                
            }
            // cout << "i: " << i << "\tj: " << j << endl;
            ans = max(ans, i-j+1);
            // cout << "=============================\n";
        }
        // ans = max(ans, i-j+1);
        return ans;
    }
