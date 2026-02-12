#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class StockSpanner {
public:
    stack<pair<int,int>> st;   
    int ind;

    StockSpanner() {
        ind = -1;
    }
    
    int next(int price) {
        ind++;

        while(!st.empty() && st.top().first <= price){
            st.pop();
        }

        int ans = ind - (st.empty() ? -1 : st.top().second);

        st.push({price, ind});
        return ans;
    }
};

int main() {
    StockSpanner obj;

    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};

    for(int price : prices) {
        cout << obj.next(price) << " ";
    }

    return 0;
}
