#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll sum=0;
    if(2*a <= b){
        sum+=(abs(x)+abs(y))*a;
    }
        cout<<sum<<endl;
}
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll T;
    // T=1;
    cin>>T;
    while (T--)
    {
      solve();
    }
    
    
}

