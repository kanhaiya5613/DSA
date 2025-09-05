#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    vector<int> V;
    V.push_back(1);
    V.emplace_back(2);
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    


    vector<int> v(5,100);// 5 is the size of vector and 100 is put at 0 to 4th position of vector
    vector<int> k(5); // A vector is created of size 5
        


    vector<int> v1(5,10);
    vector<int> v2(v1);  //copying the member of v1 in v2
    
   
    // printing the Vectors  
      
//    vector<int>::iterator it = V.begin();
//    it++;
//    cout<< *(it) << " ";
//     it = it +2;
//     cout <<*(it) << " ";
      
    // vector<int>::iterator it = v.end();
    // // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.begin();

//  cout << v[4] << " ";
//  cout << v1[3] << " ";
//  cout << v2[3] << " ";
//   cout << V[0] << " ";
//  cout << v2[2] << " ";

//  best way to print
// for(vector<int>::iterator it = v2.begin(); it != v2.end(); it++){
//     cout << *(it)  << " ";
// }

// for(auto it =v.begin(); it !=v.end();it++){
//     cout << *(it) << " ";
// }
// for(auto it = v){
//     cout << it << " ";
// }
// erase function
v.erase(v.begin()+1); // it removes the second element of vector
}
v.erase(v.begin()+2, v.begin()+4 );

// insert function

vector<int> copy(2,100);  // { 100 , 100}
v.insert(v.begin(),800); // { 800 , 100 , 100}
vinsert(v.begin()+1, 2, 10); // { 800,10,10,100,100}


vector<int> copy(2,50); // (50, 50)
v.insert(v.begin(), copy.begin(), copy.end()); // { 50,50,800,10,10,100,100}

cout << v.size();
v.pop_back(); // erase the last element of vector

v1.swap(v2); // swap the elements of vector
v.clear() // erases the entire vector 
int main(){
    explainvector();
}