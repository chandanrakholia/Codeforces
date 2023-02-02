#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int min=*min_element(v.begin(),v.end());
        int sum=accumulate(v.begin(),v.end(),0);
        cout<<sum-n*min<<endl;
    }
    
    return 0;
}