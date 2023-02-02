#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m,a;
    cin>>n>>m>>a;
    // long long int x=((n+a-1)/a)*((m+a-1)/a);
     cout<<(((n+a-1)/a)*((m+a-1)/a));
    return 0;
}