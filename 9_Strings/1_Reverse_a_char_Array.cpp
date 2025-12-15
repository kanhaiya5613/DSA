#include <bits/stdc++.h>
using namespace std;
void reverseString(char s[])
{
    int st = 0;
    int end = strlen(s) - 1;
    while (st < end)
    {
        swap(s[st], s[end]);
        st++;
        end--;
    }
    for(int i = 1;i<strlen(s);i++){
        cout << s[i] << " ";
    }
}
int main(){
    char arr[] = {'a','b','c','d','e'};
    reverseString(arr);
}
