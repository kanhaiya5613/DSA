#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n <= 0)
    {
        return false;
    }
    while (n % 3 == 0)
    {
        n /= 3;
    }
    return n == 1;
}
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    if (isPowerOfThree(n))
    {
        cout << "number is power of 3";
    }
    else
    {
        cout << "number is not a power of 3";
    }
}