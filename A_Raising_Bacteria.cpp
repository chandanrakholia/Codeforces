#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;cin >> n;
    int ans=0;
    for (int i = 0; i <=30; i++)
    {
        if(n & 1<<i){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }
}
