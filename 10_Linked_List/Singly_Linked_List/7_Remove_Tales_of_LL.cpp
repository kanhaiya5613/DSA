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
Node* deleteTailNode(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    free(temp->next); // delete temp
    temp->next=nullptr;

    
    return head;
}

int main(){
    vector<int> arr = {1,4,6,9,11};
    Node* head = ConvertArrToLL(arr);
    Node* head1 = deleteTailNode(head);
    Node* temp = head1;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
}