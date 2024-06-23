#include "Solution.h"

int Solution::minimumArea(vector<vector<int>>& grid)
{
    int row = grid.size();
    int col = grid[0].size();
    int minRow = 0, maxRow = row - 1;
    int minCol = 0, maxCol = col - 1;
    for(int i = 0; i < row; i++) {
        bool found = false;
        for(int j = 0; j < col; j++) {
            if (grid[i][j] == 1) {
                minRow = i;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    for(int i = row - 1; i >= 0; i--) {
        bool found = false;
        for(int j = 0; j < col; j++) {
            if (grid[i][j] == 1) {
                maxRow = i;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    for(int i = 0; i < col; i++) {
        bool found = false;
        for(int j = 0; j < row; j++) {
            if (grid[j][i] == 1) {
                minCol = i;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    for(int i = col - 1; i >= 0; i--) {
        bool found = false;
        for(int j = 0; j < row; j++) {
            if (grid[j][i] == 1) {
                maxCol = i;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    return (maxRow - minRow + 1)*(maxCol - minCol + 1);
}
