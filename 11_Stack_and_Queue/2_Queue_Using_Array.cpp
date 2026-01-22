#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int start = -1;
    int end = -1;
    int size=10;
    int q[10];
    int currSize = 0;
    void Push(int n){
        if(currSize == size ){
            cout << "Queue is Oveflow \n";
            return;
        }
        else if(currSize == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end+1)%size;
        }
         q[end]=n;
         currSize += 1;
    }
    int Pop(){
        if(currSize==0){
            cout<<"Queue is underflow\n";
            return -1;
        }
        int val = q[start];
        start = (start+1)%size;
        currSize--;
        if(currSize==0){
            start = -1;
            end = -1;
        }
        return val;
        
    }
    int Top(){
        if(currSize==0){
            cout << "Queue is Empty";
        }
        return q[start];
    }
    int Size(){
        return currSize;
    }

};
int main(){
    int n=4;
    Queue q;
    q.Push(4);
    q.Push(5);
    q.Push(7);
    cout<<"\nTop: " << q.Top();
    cout<<"\nPopped : " << q.Pop();
    cout<<"\nTop: "<< q.Top();
}