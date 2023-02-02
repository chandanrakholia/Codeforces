#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    if(m>=sum){
        cout<<0<<endl;
    }
    else{
        cout<<sum-m<<endl;
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int a = 0; a < t; a++)
    {
        solve();
    }
    
    return 0;
}