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
class Stack{
    public:
    Node* top = nullptr;
    int size = 0;
    void Push(int n){
        Node* temp = new Node(n);
        temp->next = top;
        top = temp;
        size = size + 1;
    }
    void Pop(){
        if (size==0) {
        cout << "Stack Underflow!" << endl;
        return;
    }
        Node* temp = top;
        top=top->next;
        delete(temp);
        size = size-1;
    }
    int Top(){
        if (size==0) {
        cout << "\nStack Underflow!" << endl;
    }
        return top->val;
    }
    int Size(){
        return size;
    }
};
int main(){
    Stack st;
    st.Push(8);
    st.Push(1);
    st.Push(2);
    st.Push(3);
    cout << "\nTop : " << st.Top();
    st.Pop();
    cout << "\nPopped " ;
    cout << "\nTop : " << st.Top();
    cout << "\nSize : " << st.Size();
    st.Pop();
    st.Pop();
    st.Pop();
    cout << "\nTop : " << st.Top();
}
