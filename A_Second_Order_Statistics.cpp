#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()<=1){
        cout<<"NO"<<endl;
    }
    else{

    set<int>::iterator itr;
    int count=0;
    for (itr=s.begin();itr!=s.end();itr++)
    {
        if (count==1)
        {
            cout<<*itr<<endl;
            break;
        }
        else{
            count++;
        }
    }
    }
       
    return 0;
}