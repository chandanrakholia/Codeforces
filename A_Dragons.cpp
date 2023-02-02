#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int strength,count;
    cin>>strength>>count;
    vector<pair<int,int>>v;
    for (int i = 0; i < count; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int sa=strength;
    int f=1;
    // if (strength<v[0].first)
    // {
    //     cout<<"NO"<<endl;
    // }
    // else{

    for (int i = 0; i < count; i++)
    {
        if (sa>v[i].first)
        {
            sa+=v[i].second;
        }
        else
        {
            cout<<"NO"<<endl;
            f=0;
            break;
        }
        
              
    }
    if (f==1)
    {
        cout<<"YES"<<endl;
    }
    
    // }
     
    return 0;
}