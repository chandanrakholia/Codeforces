#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector<int>v;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int a=v[0];
        sort(v.begin(), v.end(), greater<int>());
        int count=0;
        for (int i = 0; i < 4; i++)
        {
            if (v[i]==a)
            {
                cout<<count<<endl;
            }
            else
            {
                count++;
            }
            
        }
        
    }
    
    return 0;
}