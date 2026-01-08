#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *convertArrayToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *insertNodeBeforeValueK(Node *head, int val, int k)
{
    if (head == nullptr)
    {
        return head;
    }
    if (head->data == k)
    {
        Node *newNode = new Node(val, head, nullptr);
        head->back = newNode;
        return newNode;
    }

    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != k)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        return head;
    }

    Node *newNode = new Node(val, temp->next, temp);
    temp->next->back = newNode;
    temp->next = newNode;

    return head;
}

int main()
{
    vector<int> arr = {12, 8, 6, 4, 9, 7};
    int val = 8;
    int k = 4;
    Node *head = convertArrayToDLL(arr);
    head = insertNodeBeforeValueK(head, val, k);
    print(head);
    return 0;
}