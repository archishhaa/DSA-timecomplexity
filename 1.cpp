#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";  // If the input is empty, return an empty string.

    string prefix = strs[0];  // Start with the first string as the initial prefix.

    for (int i = 1; i < strs.size(); ++i) {  // Compare the prefix with each string in the vector.
        int j = 0;
        // Compare characters of the current prefix and the current string.
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);  // Shorten the prefix to the common part.

        if (prefix.empty()) return "";  // If the prefix becomes empty, no common prefix exists.
    }

    return prefix;  // Return the longest common prefix.
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;

    strs = {"dog", "racecar", "car"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;

    return 0;
}
