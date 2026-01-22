#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int top;
    int st[10];

    Stack() {
        top = -1;
    }

    void Push(int x) {
        if (top == 9) {
            cout << "Stack Overflow\n";
            return;
        }
        st[++top] = x;
    }

    int Pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return st[top--];
    }

    int Top() {
        if (top == -1) return -1;
        return st[top];
    }

    int Size() {
        return top + 1;
    }
};

int main() {
    Stack st;
    st.Push(1);
    st.Push(2);
    st.Push(3);

    cout << "\nTop : " << st.Top();
    cout << "\nPopped : " << st.Pop();
    cout << "\nTop : " << st.Top();
    cout << "\nSize : " << st.Size();
}
