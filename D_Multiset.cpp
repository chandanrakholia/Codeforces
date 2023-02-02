#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>v1;
    vector<int>v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int y;
        cin>>y;
        int p=n;
        if(y<0){
            y=p-abs(y);
        v2.push_back(y);
        }
        else{
            v2.push_back(y);
        }
    }
    for (int i = 0; i < q; i++)
    {
        v1.erase(v1.begin()+v2[i]);
    }
    if (q<n)
    {
        cout<<0<<endl;
    }
    else{
        cout<<v1[0]<<endl;
    }
    
    
    return 0;
}