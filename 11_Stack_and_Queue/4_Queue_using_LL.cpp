#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val1,Node* next1){
        val = val1;
        next = next1;
    } 
    Node(int val1){
        val = val1;
        next = nullptr;
    }
};
class Queue{
    public:
    Node* start = nullptr;
    Node* end = nullptr;
    int size = 0;
    void Push(int n){
        Node* temp = new Node(n);
        
        if(start==nullptr){
            start = end = temp;
        }
        else{
            end->next = temp;
            end = end->next;
        }
        size += 1;
    }
    void Pop(){
        if (size==0) {
        cout << "Stack Underflow!" << endl;
        return;
    }
        Node* temp = start;
        start=start->next;
        delete(temp);
        size = size-1;
    }
    int Top(){
        if (size==0) {
        cout << "\nStack Underflow!" << endl;
    }
        return start->val;
    }
    int Size(){
        return size;
    }
};
int main(){
    Queue que;
    que.Push(8);
    que.Push(1);
    que.Push(2);
    que.Push(3);
    cout << "\nTop : " << que.Top();
    que.Pop();
    cout << "\nPopped " ;
    cout << "\nTop : " << que.Top();
    cout << "\nSize : " << que.Size();
    que.Pop();
    que.Pop();
    que.Pop();
    cout << "\nTop : " << que.Top();
}
