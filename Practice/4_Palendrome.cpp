#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a Number :";
    cin>> num;
        int num1 = num;
    int reverse=0;
    while(num>0){
        int temp = num%10;
        reverse = reverse*10+temp;
        num = num/10;
    }
    cout<<reverse << endl;

    if(reverse==num1){
        cout<<"it  is a palendrome number";
    }
    else{
        cout <<"it is not a palendrome number";
    }
}