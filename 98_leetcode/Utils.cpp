#include "Solution.h"

void Solution::insert_key(TrieNode* root, string& key) {
    TrieNode *currentNode = root;
    for(auto c: key) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            TrieNode* newNode = new TrieNode();
            currentNode->childNode[c - 'a'] = newNode;
        }
        currentNode = currentNode->childNode[c-'a'];
    }
    currentNode->wordEnd = true;
}

string Solution::search_root(TrieNode* root, string& key)
{
    TrieNode* currentNode = root;
    string res = "";
    for(auto c: key) {
        if (currentNode->childNode[c-'a'] == NULL) {
            return currentNode->wordEnd ? res : "";
        }
        if (currentNode->wordEnd) return res;
        res += string(1, c);
        currentNode = currentNode->childNode[c - 'a'];
    }
    return res;
}
