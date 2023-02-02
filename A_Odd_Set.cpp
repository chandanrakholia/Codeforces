#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        multiset<int>s;
        for (int i = 0; i < 2*n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        multiset<int>::iterator it;
        int count=0;
        for (it=s.begin();it!=s.end(); it++)
        {
            if((*it)%2==0){
                count++;
            }
        }
        if(count==n){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}