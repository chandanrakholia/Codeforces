#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int x=n;
    int flag=0;
    while (n>0)
    {
        if (n%10==4 or n%10==7)
        {
            flag=flag+1;;
        }
            n=n/10;
        
    }
    // if (x/10==0)
    // {
    //     cout<<"NO"<<endl;
    // }
    // else{

    
    if (flag==4 or flag==7)
    {
        cout<<"YES"<<endl;
    }
   else
    {
        cout<<"NO"<<endl;
    }
    // }
    
    
    
    return 0;
}