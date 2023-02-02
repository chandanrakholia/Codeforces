#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    long long int n,q;
    cin>>n>>q;
    int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for (long long int i = 1; i < n; i++)
    {
        prefix_sum[i]=arr[i]+prefix_sum[i-1];
    }
    for (long long int i = 0; i < q; i++)
    {
        long long int x,y;
        cin>>x>>y;
        long long int ans;

        if(x!=n){
            ans=prefix_sum[n-x+y-1]-prefix_sum[n-x-1];
            cout<<ans<<endl;;
        }
        else{
            ans=prefix_sum[n-x+y-1];
            cout<<ans<<endl;
        }
    
    
}
}
int main(){
    solve();
    return 0;
}