#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;

public:
    MyQueue() {}
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        if(s1.empty()) return -1;
        int val = s1.top();
        s1.pop();
        return val;
    }
    
    int peek() {
        if(s1.empty()) return -1;
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main() {
    MyQueue q;

    cout << "Pushing: 10, 20, 30" << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element (peek): " << q.peek() << endl; 

    cout << "Popping element: " << q.pop() << endl;      
    cout << "Popping element: " << q.pop() << endl;      

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    cout << "Popping last element: " << q.pop() << endl; 
    cout << "Is queue empty now? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}