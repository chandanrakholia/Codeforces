#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            mp[x]=mp[x]+1;
        } 
    }  
    return 0;
}