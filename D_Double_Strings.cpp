#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string,bool>mp;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]=true;
    }
    for (int i = 0; i < n; i++)
    {
        int flag=0;
        for (int j = 1; j < arr[i].length(); j++)
        {
            string x=arr[i].substr(0,j);
            string y=arr[i].substr(j,arr[i].length()-j);
            if(mp[x] && mp[y]){
                flag=1;
                break;
            }
        }
        cout<<flag;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int T = 1; T <= t; T++)
    {
        solve();
    }
    return 0;
}