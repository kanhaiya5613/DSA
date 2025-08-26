#include<bits/stdc++.h>
using namespace std;
int countDigits(int n, int a){
	// Write your code here.
		
	return a;
}
int main(){
    int n;
 
    cin >> n;
    int a=0;
	while(n>0){
		n=n/10;
		a++;
	}
    
    cout << a;
}