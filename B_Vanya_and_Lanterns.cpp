#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n,l;
    cin>>n>>l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    ans=max(arr[0],l-arr[n-1]);
    ans=ans*2;
    for (int i = 0; i < n-1; i++)
    {
        ans=max(ans,arr[i+1]-arr[i]);
    }
    cout<<fixed<<setprecision(20)<<ans/2.0<<endl;
    return 0;
}