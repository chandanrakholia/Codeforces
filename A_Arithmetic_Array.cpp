#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    if(sum-n>=0)
    cout<<sum-n<<endl;
    else{
        cout<<1<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    for (int T = 0; T < t; T++)
    {
        solve();
    }
    
    return 0;
}