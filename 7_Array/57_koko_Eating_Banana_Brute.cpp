#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int maxPiles = *max_element(piles.begin(), piles.end());
    for (int i = 1; i <= maxPiles; i++)
    {
        long long count = 0;
        for (int j = 0; j < n; j++)
        {
            count += ceil((piles[j] + i - 1) / i);
        }
        if (count <= h)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the size of piles : ";
    cin >> n;
    vector<int>piles(n);
    cout << "Enter the elements of piles : ";
    for(int i=0;i<n;i++){
        cin >> piles[i];
    }
    int h;
    cout << "Enter the number of hours : ";
    cin >> h;
    cout << " minimum number of hours is : "<<minEatingSpeed(piles,h);
}