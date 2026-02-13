#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
vector<int>arr;
    StockSpanner() {
     
    }
    
    int next(int price) {
        arr.push_back(price);
        int cnt = 1;
        for(int i = arr.size()-2;i>=0;i--){
            if(arr[i]<=price) cnt++;
            else break;
        }
        return cnt;
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
