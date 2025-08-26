#include<bits/stdc++.h>
using namespace std;
void Explainstack(){
    // LIFO --> last in first out
      stack<int>st;
    
    st.push(1) // {1}
    st.push(2) // {2,1}
    st.push(3) // {3,2,1}
    st.push(4) // {4,3,2,1}
    st.push(5) // {5,4,3,2,1}

    cout << st,top();   // print 5 top() prints the last value

    st.pop();   // st looks like {4,3,2,1}
    
    cout << st,top(); //3
    cout << st.size();  // 4
    stack<int>st1,st2;
    st1.swap(st2);


   //Rest functions same as vectors
   // begin , end , rbegin , rend , clear , insert , size , swap;
}
int main(){
    Explanstack();
}