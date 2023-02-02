#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[m];
    long long int count=0;
    int c=0;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        if (i==0)
        {
            count+=arr[i]-1;
        }
        
        if (i>=1)
        {
            if (arr[i]>=arr[i-1])
            {
                count+=arr[i]-arr[i-1];
            }
            else
            {
                count+=n+arr[i]-arr[i-1];
            }
            
            
        }
        
    }
    cout<<count<<endl;
    return 0;
}