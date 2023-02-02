// #include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int a;
        int arr[n]={};
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            arr[j]=a;
        }
        if (n==1)
        {
            if (arr[0]==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        sort(arr, arr + n, greater<int>());
        if (arr[0]-arr[1]<=1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}