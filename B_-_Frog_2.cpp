#include<bits/stdc++.h>
using namespace std;
#define int            long long int
void print(vector<int> &dp){
    for(auto i: dp){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    int n,k;cin>>n>>k;
    vector<int> arr(n);
    for(auto &ele: arr) cin>>ele;
    vector<int> dp(n+1);
    for (int i = 0; i < n; i++)
    {
        if(i==0) dp[i] = 0;
        else{
            int mn=INT_MAX;
            int j;
            if(i-k>=0) j=i-k;
            else{
                j=0;
            }
            for (j; j < i; j++)
            {
                int x=dp[j]+abs(arr[i]-arr[j]);
                if(x<mn){
                    mn=x;
                }
            }
            dp[i]=mn;
        }
    }
    cout<<dp[n-1]<<endl;
    // print(dp);
    return 0;
}