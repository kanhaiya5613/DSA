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
Node* removeKthElement(Node* head,int val){
    if(head==nullptr){
        return nullptr;
    }
    
    Node* kNode = head;
    while(kNode != nullptr){
        if(kNode->data==val) break;
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == nullptr && front == nullptr){
        return nullptr;
    }
    else if(prev==nullptr){
        return deleteHead(head);
    }
    else if(front == nullptr){
        return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;
    return head;
}
int main(){
    vector<int> arr = {12,8,6,4,9,7};
    int val = 4;
    Node* head = convertArrayToDLL(arr);
    head = removeKthElement(head,val);
    print(head);
    return 0;
}