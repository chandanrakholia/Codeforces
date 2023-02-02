#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int sum_arr=accumulate(arr, arr + n, 0);
    int i=0;
    int x=0;
    for (int i = 0; i < n; i++)    
    {
        sum=sum+arr[n-1-i];
        sum_arr=sum_arr-arr[n-1-i];
        x=(n-1)-(n-1-i);
        if (sum>sum_arr)
        {
            break;
        }
        
    }
    cout<<x+1;
    return 0;
}