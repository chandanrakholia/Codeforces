#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int cou(string s){
//     for (long long i = 0; i < s.length(); i++)
//     {
//         if (s[i]=='a')
//         {
//             return 1;
//             break;
//         }
        
//     }
//     return 0;
// }
// int len(string a){
//     return a.length();
// }


int main(){
    long long t;
    cin>>t;
    long long x;
    for (long long i = 0; i < t; i++)
    {
        string p,q;
        cin>>p>>q;
        sort(q.begin(),q.end());
    if (q[0]=='a' and q.length()==1)
    {
        x=1;
        cout<<x<<endl;
    }
    else if(q[0]=='a' and q.length()>1){
        x=-1;
        cout<<x<<endl;
    }
    else{
        x=pow(2,p.length());
        cout<<x<<endl;
    }

    }
    return 0;
}