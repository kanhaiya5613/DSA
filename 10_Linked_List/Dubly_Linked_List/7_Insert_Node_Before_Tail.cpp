#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1, Node* back1){
        data = data1;
        next=next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convertArrayToDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != nullptr){
        cout << head-> data << " ";
        head = head->next;
    }
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    while(prev->next != nullptr){
         prev = prev->next;
    }
    if(prev->next == nullptr){
        prev->back->next = nullptr;
        prev->back = nullptr;
        
    }
    delete prev;
    return head;
}
Node* deleteHead(Node* head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}
Node* insertNodeBeforeTail(Node* head,int val){
   if(head == nullptr ){
    return new Node(val);
   }
   if(head->next == nullptr){
    Node* temp = new Node(val,head,nullptr);
    head->back = temp; 
    return temp;
   }
   Node* temp = head;
   while(temp->next->next != nullptr){
    temp = temp -> next;
   }
   Node* NewNode = new Node(val,temp->next,temp);
   temp->next = NewNode;
   NewNode->next->back = NewNode;


   return head;
}
int main(){
    vector<int> arr = {12,8,6,4,9,7};
    int val = 4;
    Node* head = convertArrayToDLL(arr);
    head = insertNodeBeforeTail(head,val);
    print(head);
    return 0;
}