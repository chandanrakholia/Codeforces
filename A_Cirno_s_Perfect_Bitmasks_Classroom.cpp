#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    int idx=-1;
    long long int ans=0;
    int count=0;
    for (int i = 0; i <= 30; i++)
    {
        if(((1<<i) & n)){
            if(count==0){
                idx=i;
            }
            count++;
        }
    }
    ans=(1<<idx);
    if (idx==0 && !(count>1))
    {
        if(!((1<<1) & n)){
            ans+=2;
        }
    }
    else if(count>1){
        ans=ans;
    }
    else{
        ans++;
    }
    cout<<ans<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
}