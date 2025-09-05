#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,r;
	cin >> n;
    int number = n;
	int Armstrong = 0;
	while(n>0){
		r=n%10;
		Armstrong=Armstrong+(r*r*r*r);
		n=n/10;
	}
	if(number ==Armstrong){
        cout << "true";
    }
    else{
        cout << "False";
    }
	
}