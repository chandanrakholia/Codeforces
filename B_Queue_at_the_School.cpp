#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    for (int j = 0; j < k; j++)
    {
    
    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i]=='B' and s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++;
        }
        
    }
    
    }
    cout<<s<<endl;
    return 0;
}