#include<bits/stdc++.h>
using namespace std;
 int addDigits(int num) {
        while(num>=10){
            int sum = 0;
            while(num>0){
                sum += num%10;
                num = num/10;
            }
            num = sum;
        }
        return num;
    }
    int main(){ 
        int n;
        cout << "Enter a value : ";
        cin >> n;
        cout << "The sum of all digits till sum in not less then 10 is : "<< addDigits(n);
    }