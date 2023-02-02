#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int j = 0; j < n; j++)
    {
        string s;
        string t;
        cin>>s>>t;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[s.length()-1-i]==t[0])
            {
                for (int j = 0; j < s.length()-1-i; j++)
                {
                    s[j]='0';
                }
                
            }
        }
        // for (int i = 0; i < s.length(); i++)
        // {
        //     if (s[s.length()-1-i]==t[t.length()-1])
        //     {
        //         for (int j = s.length()-1-i+1; j < s.length(); j++)
        //         {
        //             s[j]='0';
        //         }
        //         break;
        //     }
            
        // }
        int k=1;
            int x=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]==t[k])
            {
                x=i;
                k++;
            }
            if (s[i]==t[1])
            {
                for (int j = x+1; j <i; j++)
                {
                    if (s[j]==s[x])
                    {
                        s[x]='0';
                    }
                    else{
                        s[j]='0';
                    }
                }
                
            }
            if (k==t.length())
            {
                break;
            }
            
            
        }
                        
        cout<<s<<endl;
    }
    
    return 0;
}