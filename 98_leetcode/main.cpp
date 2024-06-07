#include "Solution.h"
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    Solution sol;
    
    std::vector<std::string> dict{"cat", "bat", "rat"};
    std::string sentence = "the cattle was rattled by the battery";
    cout << sol.replaceWords(dict, sentence) << endl;
}
