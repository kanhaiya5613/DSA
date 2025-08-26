#include<bits/stdc++.h>
using namespace std;
void ExplainQueue(){
    // FIFO --> First in first out
      stack<int> q;
    
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3) ;// {1,2,3}
    q.push(4); // {1,2,3,4}
    q.emplace(5); // {1,2,3,4,5}

    cout << q,top();   // print 1 top() prints the last value
    q.back() += 5;
    cout << q.front();
     q.pop();   // st looks like {2,3,4,5}
    cout << q.front();
   
    // cout << q.size();  // 4
    // stack<int>q1,q2;
    // q1.swap(q2);


   //Rest functions same as vectors
   // begin , end , rbegin , rend , clear , insert , size , swap;
}
int main(){
    ExplainQueue();
}