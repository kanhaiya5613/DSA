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
Node* AddNodeAfterTail(Node* head,int k){
    if(head==NULL){
        return new Node(k);
    }
    Node* temp1 = head;
    while(temp1->next !=nullptr){
        temp1 = temp1->next;
    }
    Node* temp = new Node(k);
    temp1->next = temp;

    return head;
}

int main(){
    vector<int> arr = {1,4,6,9,11};
    int k = 11;
    Node* head = ConvertArrToLL(arr);
    Node* head1 = AddNodeAfterTail(head,k);
    Node* temp = head1;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
}