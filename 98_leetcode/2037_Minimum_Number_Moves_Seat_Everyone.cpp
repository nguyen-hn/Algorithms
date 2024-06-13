#include "Solution.h"

int Solution::minMovesToSeat(vector<int>& seats, vector<int>& students)
{
    assert(seats.size() == students.size());
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    int ans = 0;
    for(int i = 0; i < seats.size(); i++) {
        ans += abs(students[i] - seats[i]);
    }
    return ans;
}
