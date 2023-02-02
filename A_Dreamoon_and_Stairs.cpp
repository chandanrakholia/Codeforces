#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,m;
    cin>>n>>m;
    int k=n/2+n%2;
    int l=n;
    int p=-1;
    for (int i = k; i <=l; i++)
    {
        if(i%m==0){
            // cout<<i<<endl;
            p=i;
            break;
        }
    }
    if(p==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<p<<endl;
    }
    
}
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll T;
    T=1;
    // cin>>T;
    while (T--)
    {
      solve();
    }
    
    
}

