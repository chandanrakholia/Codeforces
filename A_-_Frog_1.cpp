#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(vector<int> &v,int n,vector<int> &dp){
    if(n==0) return dp[0]=0;
    if(n==1) return dp[1]=abs(v[1]-v[0]);
    if(dp[n]!=-1) return dp[n];
    return dp[n]=min((abs(v[n]-v[n-1])+solve(v,n-1,dp)),(abs(v[n]-v[n-2])+solve(v,n-2,dp)));
}
int solve2(vector<int> &v,int n,vector<int> &dp){
    dp[0]=0;
    dp[1]=abs(v[1]-v[0]);
    for(int i=2;i<=n;i++){
        dp[i]=min(dp[i-1]+abs(v[i]-v[i-1]),dp[i-2]+abs(v[i]-v[i-2]));
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> dp(n+1,-1);
    // cout<<solve(v,n-1,dp);
    cout<<solve2(v,n-1,dp);
    
    return 0;
}