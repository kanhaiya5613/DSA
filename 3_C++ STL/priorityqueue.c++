#include<bits/stdc++.h>
using namespace std;
void ExplainpriorityQueue(){
    
      priority_queue<int>pq;
    
    pq.push(1); // {1}
    pq.push(2); // {1,2}
    pq.push(3) ;// {1,2,3}
    pq.push(4); // {1,2,3,4}
    pq.emplace(); // {5,1,2,3,4}

    cout << pq,top();   // print 5 top() prints the last value
  
    pq.pop();
     
    cout << pq.top();
   }
   priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(1); // {1}
    pq.push(2); // {1,2}
    pq.push(3) ;// {1,2,3}
    pq.push(4); // {1,2,3,4}
    pq.emplace(); // {1,2,3,4,5}
int main(){
    ExplainpriorityQueue();
}


