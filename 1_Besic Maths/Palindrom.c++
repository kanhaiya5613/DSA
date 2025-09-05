#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,r;
	cin >> n;
    int number = n;
	int reverse=0;
	while(n>0){
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
	if(number==reverse){
        cout << "True";
    }
    else{
        cout << "False";
    }
	
}