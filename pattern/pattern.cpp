#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
  
    // Write your code here.
    char ch = 'A';
    int breakpoint = (2*n+1)/2;
    for(int i=0;i<=n;i++){
        for(int s=0;s<n-i;s++){
            cout << " " ;
        }
        for(int j=0;j<i;j++){
            cout << ch << " ";
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
            
        }
        
        ch='A';
        cout << endl;
    
}
}
int main() {
    int n;
    cin >> n;
    print1(n);
}