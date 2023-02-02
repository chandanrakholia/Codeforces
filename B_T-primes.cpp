#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef unsigned long long int ul;
bool isPrime(ul n)
{
    if (n < 2)
        return false;
    else if (n==2)
    {
        return true;
    }
    long long x=sqrt(n);
    if (n%2==0)
    {
        return false;
    }
    
    for (ul i = 3; i <= x; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main()
{
    int t;
    cin >> t;
    map<long long int,bool>mp;
    for (int i = 0; i < t; i++)
    {
    ul n;
    cin >> n;
    ul s=sqrt(n);
    if (mp.find(n)!=mp.end())
    {
        if(mp.find(n)->second){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{

    if (s*s==n and isPrime(s)==true)
    {
        cout<<"YES"<<endl;
        mp[n]=1;
    }
    else{
        cout<<"NO"<<endl;
        mp[n]=0;
    }
    }
    }
    return 0;
}
