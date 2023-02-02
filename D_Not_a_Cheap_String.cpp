#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    string s;
    int p;
    cin>>s>>p;
    int sum=0;
    map<char,int,greater<>>mp;
    for (int i = 0; i < s.length(); i++)
    {
        sum+=int(s[i])-96;
        mp[s[i]]++;
    }
    map<char,int>::iterator it;
    for (it=mp.begin();it!=mp.end(); it++)
    {
        if(it->second==1){
            sum=sum-mp[it->first];
            it++;
        }
    }
    
    
      
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for(int T=0;T<t;T++){
        solve();
    }
    return 0;
}