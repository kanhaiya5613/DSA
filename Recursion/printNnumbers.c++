// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout <<"Enter The Value Of i" << endl;
//     cin >> i >> endl;
//     //cout << "The Vaiue Of i is " << i ;
// }//int n; 
// // cout << "Enter The Value Of n" << endl;
// // cin >> n;
// // func(1,n);
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout << i << endl;

   // Function call to print i till i increments to n.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;

}