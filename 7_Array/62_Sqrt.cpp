#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;

        long long left = 1, right = num;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == num) return true;
            else if (square < num) left = mid + 1;
            else right = mid - 1;
        }

        return false;
    }
};

int main() {
    Solution obj;
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (obj.isPerfectSquare(num))
        cout << num << " is a Perfect Square." << endl;
    else
        cout << num << " is NOT a Perfect Square." << endl;

    return 0;
}
