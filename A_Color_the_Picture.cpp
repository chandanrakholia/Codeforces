#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Is_True(ll arr[],ll k,ll n,ll m,bool *t){
    ll sum=0;
    ll arr2[k];
    for (ll i = 0; i < k; i++)
    {
        arr2[i]=arr[i];
    }
    map<ll,ll>mp;
    ll count3=0;
    for (ll i = 0; i < k; i++)
    {
        arr2[i]=arr2[i]/m;
        if(arr2[i]==1){
            arr2[i]=0;
        }
        sum+=arr2[i];
        mp[arr2[i]]++;
        if(arr2[i]>=3){
            count3++;
        }
    }
    if(n%2==0){
        if(sum>=n){
            (*t)=true;
        }
    }
    else{
        if(count3>0 && sum>=n){
        (*t)=true;
        }   
    }
}
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[k];
    ll mx=INT_MIN;
    for (ll i = 0; i < k; i++)
    {
        cin>>arr[i];
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    sort(arr,arr+k);
    bool t=false;
    Is_True(arr,k,n,m,&t);
    if(!t){
        Is_True(arr,k,m,n,&t);
    }
    if(t) cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }    
}
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll T;cin>>T;
    while (T--)
    {
      solve();
    }
}

