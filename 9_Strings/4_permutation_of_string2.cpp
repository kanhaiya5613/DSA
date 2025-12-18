#include<bits/stdc++.h>
using namespace std;
 bool isFreqSame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int windSize = s1.length();

        for(int i = 0; i<s2.length();i++){
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};
            while(windIdx < windSize && idx < s2.length()){
                windFreq[s2[idx]-'a']++;
                windIdx++; idx++;
            }
            if(isFreqSame(freq,windFreq)){
                return true;
            }
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