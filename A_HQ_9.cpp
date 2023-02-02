#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='H' or s[i]=='Q' or s[i]=='9')
        {
            count++;
        }
    }
    if (count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}