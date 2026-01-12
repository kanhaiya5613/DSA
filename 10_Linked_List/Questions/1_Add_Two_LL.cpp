#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* DummyHead = new ListNode(-1);
    ListNode* curr = DummyHead;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr) {
        int sum = carry;
        if (l1) sum += l1->val;
        if (l2) sum += l2->val;

        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    if (carry) {
        curr->next = new ListNode(carry);
    }

    return DummyHead->next;
}
ListNode* createList(const vector<int>& arr) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int val : arr) {
        ListNode* node = new ListNode(val);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    vector<int> a = {2, 4, 3};
    vector<int> b = {5, 6, 4};

    ListNode* l1 = createList(a);
    ListNode* l2 = createList(b);

    cout << "List 1: ";
    printList(l1);

    cout << "List 2: ";
    printList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Sum:    ";
    printList(result);

    return 0;
}
