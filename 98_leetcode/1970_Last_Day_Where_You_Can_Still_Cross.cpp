#include "Solution.h"

/* https://leetcode.com/problems/last-day-where-you-can-still-cross/  */
int Solution::latestDayToCross(int row, int col, vector<vector<int>>& cells)
{
	int l = 0, r = cells.size();
        int ans = 0;
        while (l <= r) {
            vector<vector<int>> grid(row, vector<int>(col, 0));
            vector<vector<bool>> visited(row, vector<bool>(col, false));
            int mid = (l+r)/2;
            // if (mid == 0) break;
            // cout << "l: " << l << " r: " << r << " mid: " << mid << endl;
            for(int i = 0; i < mid; i++) {
                grid[cells[i][0] - 1][cells[i][1] - 1] = 1;
            }
            // for(auto e: grid) {
            //     for(auto i: e) {
            //         cout << i << " ";
            //     }
            //     cout << endl;
            // }
            bool check = false;
            for(int i = 0; i < col; i++) {
                if (grid[0][i] == 1) continue;
                check = dfs(0, i, grid, visited);
                if (check) break;
            }
            // cout << check << endl;
            if (check) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
}
