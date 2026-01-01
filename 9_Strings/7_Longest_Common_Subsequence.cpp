#include <bits/stdc++.h>
using namespace std;


    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";
        int i = 0;

        while (i < strs[0].length()) {
            int j = 1;   

            while (j < strs.size()) {
                if (i >= strs[j].length() || strs[j][i] != strs[0][i]) {
                    return ans;
                }
                j++;
            }

            ans.push_back(strs[0][i]);
            i++;
        }
        return ans;
    }

int main() {
    

    
    vector<string> strs = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}