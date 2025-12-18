#include<bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;
        vector<int> cnt1(26, 0), cnt2(26, 0);
        for (int i = 0; i < n; i++) {
            cnt1[s1[i] - 'a'] ++;
            cnt2[s2[i] - 'a']++;
        }
        if (cnt1 == cnt2) return true;
        for (int i = n; i < m; i++) {
            cnt2[s2[i] - 'a']++;
            cnt2[s2[i - n] - 'a']--;
            if (cnt1 == cnt2) return true;
        }
        return false;
    }
int main(){
    string str1;
    cout << "Enter the main string in which we have to search : ";
    getline(cin,str1);
    string str2;
    cout<< "Enter the string that we have to be searched : ";
    getline(cin , str2);
    if(checkInclusion(str2,str1)){
        cout << "The permutation of string is available in given string ";
    }
    else {
        cout << "The permutation of string is not available in given string ";
    }
}