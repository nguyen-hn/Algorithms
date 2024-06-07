#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    // 846. Hand of Straights
    bool isNStraightHand(vector<int>& hand, int groupSize);
    // 648 Replace Words
    string replaceWords(vector<string>& dictionary, string sentence);
private:

protected:
    struct TrieNode {
        TrieNode *childNode[26];
        bool wordEnd;

        TrieNode() {
            wordEnd = false;
            for(int i = 0; i < 26; i++) {
                childNode[i] = NULL;
            }
        }
    };

    void insert_key(TrieNode* root, string& key);
    string search_root(TrieNode* root, string& key);
};

#endif // SOLUTION_H
