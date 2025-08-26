#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(n<1) return;
   func(1,n-1);
   cout << n << endl;

   // Function call to print i till i increments to n.
   func(i,n-1);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;

}