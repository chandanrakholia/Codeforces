#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x=0;
        for (int j = 0; j < i+1; j++)
        {
            x=x+b[j];
        }
        for (int k = 0; k < i+1; k++)
        {
            x=x-a[k];
        }
        c[i]=x;
    }
    cout<<*max_element(c,c+n);
    return 0;
}