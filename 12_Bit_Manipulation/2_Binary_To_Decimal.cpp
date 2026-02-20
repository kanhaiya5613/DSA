#include<bits/stdc++.h>
using namespace std;
int convert2Decimal(string s){
    int Result = 0;
    int j = 0;
    for(int i = s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            Result += (1 << j);
        }
        j++;
    }
    return Result;

}
int main(){
    string s;
    cout << "Enter a binary number : ";
    getline(cin,s);
    cout << "Decimal Form of "<< s << " is : "<< convert2Decimal(s);
    return 0;
}