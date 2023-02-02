#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;cin>>n;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    int maxi=INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>=maxi){
            maxi=it->second;
        }
    }
    if(maxi<=(n+1)/2) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}