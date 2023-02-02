#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        int sum1=0;
        int sum2=0;
        for (int i = 0; i < 3; i++)
        {
            sum1=sum1+n%10;
            n=n/10;
        }
        for (int i = 0; i < 3; i++)
        {
            sum2=sum2+n%10;
            n=n/10;
        }
        if (sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}