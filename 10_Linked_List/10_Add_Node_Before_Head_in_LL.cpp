#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next=nullptr;
    }
};

Node* ConvertArrToLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* AddNodeBeforeHead(Node* head,int k){
    Node* temp = new Node(k,head);
    
    return temp;
}

int main(){
    vector<int> arr = {1,4,6,9,11};
    int k = 11;
    Node* head = ConvertArrToLL(arr);
    Node* head1 = AddNodeBeforeHead(head,k);
    Node* temp = head1;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
}