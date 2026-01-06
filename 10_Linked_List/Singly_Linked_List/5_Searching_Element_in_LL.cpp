#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArraytoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}
int searchElement(Node* head, int n){
     Node* temp = head;
    while(temp){
         if(temp->data == n) return 1;
         temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {2,4,6,8};
    Node* head= convertArraytoLL(arr);
    cout << searchElement(head,6);
}