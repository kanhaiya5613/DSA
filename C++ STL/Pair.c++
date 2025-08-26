#include<bits/stdc++.h>
using namespace std;
void explainpair() {
    pair<int, int>q {1,3};
    cout << q.first  << " " << q.second;
    pair<int,pair<int,int>>p = {3,{5,7}};
    cout << " " << p.first <<" " << p.second.first << " " << p.second.first;
    pair<int, int>arr[] = {{1, 2},{3, 4},{5, 9} ,{9, 11}};
    cout << arr[1].second;
}
int main(){
  explainpair();
}
 
   

