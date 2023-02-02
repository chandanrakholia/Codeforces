#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int Mid(long long int a,long long int b,long long int c){
    long long int arr[3]={a,b,c};
    sort(arr,arr+3);
    return arr[1];
}
void solve(){
    long long int n;
    cin>>n;
    long long arr[n];
    int mi;
    for (long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        mi=min(mi,Mid(arr[i-1],(arr[i]+1)/2,arr[i+1]));
    }
    cout<<mi<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    solve();
    return 0;
}