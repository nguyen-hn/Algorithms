#include "Solution.h"

string Solution::largestNumber(vector<int>& nums) {
    vector<string> v;
    for(int e: nums) {
        v.push_back(to_string(e));
    }

    sort(v.begin(), v.end(), [](const string& a, const string& b) {
        return (a+b) > (b+a);
    });

    if (v[0] == "0") return "0";

    string res = "";
    for(const string& s: v) {
        res += s;
    }
    return res;
}
