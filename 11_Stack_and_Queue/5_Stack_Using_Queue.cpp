#include<bits/stdc++.h>
using namespace std;
class Stack {
public:
    queue<int> q;

    void Push(int x) {
        int s = q.size(); 
        q.push(x);
        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void Pop() {
        if (q.empty()) return -1;
        int val = q.front(); 
        q.pop();             
        return val;
    }

    int Top() {
        if (q.empty()) return -1;
        return q.front(); 
    }
    int Size(){
        return q.size();
    }
};
using namespace std;
int main(){
    Stack st;
    st.Push(8);
    st.Push(1);
    st.Push(2);
    st.Push(3);
    cout << "\nTop : " << st.Top();
    st.Pop();
    cout << "\nPopped " ;
    cout << "\nTop : " << st.Top();
    cout << "\nSize : " << st.Size();
    st.Pop();
    st.Pop();
    st.Pop();
    cout << "\nTop : " << st.Top();
}