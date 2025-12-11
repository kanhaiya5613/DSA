#include<bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxPiles = *max_element(piles.begin(), piles.end());
        int left = 1;
        int right = maxPiles;
        while(left<=right){
            int mid = (left+right)/2;
            long long count = 0;
             for(int j=0;j<n;j++){
                count += ceil((piles[j]+mid-1)/mid);
            }
            if(count <= h){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
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