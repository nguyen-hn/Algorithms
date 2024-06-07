#include "Solution.h"

string Solution::replaceWords(vector<string>& dictionary, string sentence)
{
    TrieNode *root = new TrieNode();
    for(auto key: dictionary) {
        insert_key(root, key);
    }
    string ans = "";
    std::vector<std::string> lst;
    int i = 0;
    while (i < sentence.size()) {
        while (i < sentence.size() && sentence[i] == ' ') i++;
        int j = i;
        while (j < sentence.size() && sentence[j] != ' ') j++;
        std::string w = sentence.substr(i, j-i);
        std::string r = search_root(root, w);
        if (r.empty()) {
            lst.push_back(w);
        } else {
            lst.push_back(r);
        }
        i = j;
    }
    for(int i = 0; i < lst.size(); i++) {
        ans += lst[i] + (i == lst.size() - 1 ? "" : " ");
    }
    return ans;
}
