 #include<iostream>
 using namespace std;
 int ls(int arr[],int num,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
 }
 int LongestConsecutive(int arr[],int n){
    int longest = 1;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int cnt = 1;
        while(ls(arr,x+1, n)==true){
            x=x+1;
            cnt = cnt+1;
        }
        longest= max(longest,cnt);
    }
    return longest;
 }
 int main(){
    
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n];
    cout << "Enter the element of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Longest consecutive sequence is :"<< LongestConsecutive(arr,n);
 }