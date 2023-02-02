#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string s1="hello";
    int j=0;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==s1[j])
        {
            j++;
            count++;
        }
        
    }
    if (count>=5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}