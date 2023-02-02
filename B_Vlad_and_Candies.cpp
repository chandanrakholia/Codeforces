#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    long long int arr[n];
        int MAX=INT_MIN;
    int idx=-1;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        arr[i]=x;
        if(x>MAX){
            MAX=x;
            idx=i;
        }
    }
    int MAX2=INT_MIN;
    int f=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>MAX2 and i!=idx){
            MAX2=arr[i];
            f=1;
        }
    }
    if(n==1 && arr[0]==1){
        cout<<"YES"<<endl;
    }
    else if(n==1 && arr[0]!=1){
        cout<<"NO"<<endl;
    }
    else if(MAX-MAX2>=2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    // cout<<MAX<<endl;
    // cout<<MAX2<<endl;
    // cout<<idx<<endl;
}
int main(){
    long long int t;
    cin>>t;
    for (long long int T = 0; T < t; T++)
    {
        solve();
    }
    
    return 0;
}