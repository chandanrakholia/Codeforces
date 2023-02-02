#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int count0=0;
    int count1=0;
    int b=0;
    int c=0;
    int bc=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='1')
        {
            b++;
            c=0;
        }
        if (s[i]=='0')
        {
            c++;
            b=0;
        }
        if (b==7 or c==7)
        {
            bc=1;
        }
        
    }
    if (bc==1)
    {
        cout<<"YES"<<endl;
    }
    if (bc==0)
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}
