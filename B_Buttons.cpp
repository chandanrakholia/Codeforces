#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    long long sum=0;
    if (n==1)
    {
        cout<<1<<endl;
    }
    else if (n==2)
    {
        sum=2*n-1;
        cout<<sum<<endl;
    }
    else
    {
        sum=2*n-1;
        for (int i = 2; i < n+1; i++)
        {
            sum=sum+i*(n-i);
        }
        cout<<sum<<endl;
    }
    
    
    
    return 0;
}