#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string rev(string str){
    string q="";
    for (int i = str.length()-1; i>=0;i--){
        q=q+str[i];
    }
    return q;
}
int main(){
    string s,t;
    cin>>s>>t;
    // string p=reverse(s.begin(),s.end());
    string q=rev(s);
    if (q==t)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}