#include "Solution.h"

/**
846. Hand of Straights
Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.
*/

bool Solution::isNStraightHand(vector<int>& hand, int groupSize) {
    if (hand.size() % groupSize != 0) return false;
    sort(hand.begin(), hand.end());
    map<int, int> freq;
    vector<int> v;
    // std::set<int> s(hand.begin(), hand.end());
    for(auto h: hand) {
        if (freq.find(h) == freq.end()) v.push_back(h);
        freq[h]++;
    }
    // for(auto i: s) cout << i << endl;
    // sort(v.begin(), v.end());
    for(auto i: v) {
        while (freq[i] != 0) {
            // cout << "start from " << i << " " << freq[i] << endl;
            freq[i]--;
            for(int j = 1; j < groupSize; j++) {
                // cout << "check: " << (i+j) << endl;
                if (freq[i+j] == 0) return false;
                else freq[i+j]--;
            }
        }
    }
    return true;
}
