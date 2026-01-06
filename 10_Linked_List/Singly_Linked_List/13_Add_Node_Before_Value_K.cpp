#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *ConvertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node *AddNodeBeforeKelement(Node *head,int k,int val)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->data == k)
    {
        Node *temp = new Node(val, head);
        return temp;
    }
    Node *temp = head;
    while (temp->next->data != k )
    {
        temp = temp->next;
    }
    if(temp->next != nullptr){
        Node *newNode = new Node(val, temp->next);
        temp->next=newNode;
    }

    return head;
}

int main()
{
    vector<int> arr = {1, 4, 6, 9, 11};
    int val = 23;
    int k = 6;
    Node *head = ConvertArrToLL(arr);
    Node *head1 = AddNodeBeforeKelement(head,k,val);
    Node *temp = head1;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}