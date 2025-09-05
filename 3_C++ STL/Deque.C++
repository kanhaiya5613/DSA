#include<bits/stdc++.h>
using namespace std;
void ExplainDeque(){
      deque<int>dq;
    
    dq.push_back(2) // {2}
    dq.emplace_back(4); // {2,4}
   dq.push_front(5);  // {5, 2,4}
   dq.emplace_front(3) // { 3,5,2 , 4}
   dq.pop_back(); //{ 3,5,2}
   dq.pop_front(); //{5,2}
   dq.back();
   dq.front();
   //Rest functions same as vectors
   // begin , end , rbegin , rend , clear , insert , size , swap;
}
int main(){
    ExplainDeque();
}