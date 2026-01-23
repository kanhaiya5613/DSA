#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;

public:
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int res = peek();
        if (res != -1) {
            s2.pop();
        }
        return res;
    }
    
    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        if (s2.empty()) return -1; 
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.peek() << endl; 

    cout << q.pop() << endl;      
    cout << q.pop() << endl;      

    cout << (q.empty() ? "Yes" : "No") << endl;

    cout << q.pop() << endl; 
    cout << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}