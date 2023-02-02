#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char>st;
    int flag=1;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (int(s[i])<=90)
    //     {
    //         // char q=s[i];
    //         s[i]=char((int)s[i]+32);
    //         // s[i]=
    //         // cout<<s[i];
    //     }
        
    // }
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='y' or s[i]=='Y'){
            flag==0;
        }
        else{
            st.push('.');
            st.push(s[i]);
        }
    }
    string str="";
    while(!st.empty()){
        // if (int(st.top())<=90)
        // {
        // char p;
        // p=char(int(st.top())+32);
        // str=str+st.top();
        // st.pop();
        // }
        // else{
        str=str+st.top();
        st.pop();
        // }
    }
    reverse(str.begin(),str.end());
    for (int i = 0; i < str.size(); i++)
    {
        if(int(str[i])<=90 and str[i]!='.'){
            str[i]=char((int)str[i]+32);
        }
        // else{
        //     flag=1;
        // }
    }
    // cout<<endl;
    
    cout<<str<<endl;
    
    
    return 0;
}