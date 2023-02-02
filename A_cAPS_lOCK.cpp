#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool Isupper(char c){
    if (int(c)<=90)
    {
        return true;
    }
    else
    {
        return false;
    }  
}
bool Islower(char c){
    if (int(c)>=97)
    {
        return true;
    }
    else
    {
        return false;
    }  
}
char upper(char c){
    if(int(c)>=97){
    return char(int(c)-32);
    }
    return c;
}
char lower(char c){
    if(int(c)<=90){
    return char(int(c)+32);
    }
    return c;
}
int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int len=s.length();
    string ans="";
    int count=0;
    if (Islower(s[0])==1)
    {
        for (auto i = 1; i < len; i++)
        {
            if (Isupper(s[i]==1))
            {
                count++;
            }
            
        }
        if (count==len-1)
        {
            ans=upper(s[0]);
            for (auto j = 1; j < len; j++)
            {
                ans=ans+lower(s[j]);
            }
        }
        else{
            ans=s;
        }
    }
    else
    {
        for (auto i = 1; i < len; i++)
        {
            if (Isupper(s[i]==1))
            {
                count++;
            }
            
        }
        if (count==len-1)
        {
            ans=upper(s[0]);
            for (auto j = 1; j < len; j++)
            {
                ans=ans+lower(s[j]);
            }
        }
        else{
            ans=s;
        }
    }
     cout<<ans<<endl;
    return 0;
}