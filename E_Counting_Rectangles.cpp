#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<pair<ll, ll>> v;
    map<pair<ll, ll>, ll, greater<int>> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
        mp[{x, y}]++;
    }
    map<pair<ll, ll>, ll>::iterator it;
    for (ll i = 0; i < q; i++)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll ans = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     if ((x1 < v[i].first && y1 < v[i].second) && (v[i].first < x2 && v[i].second < y2))
        //     {
        //         ans=ans+v[i].first*v[i].second;
        //     }

        // }
        for (it = mp.begin(); it != mp.end(); ++it)
        {
            int x=(it->first).first;
            int y=(it->first).second;
            if ((x1 < x && y1 < y) && (x < x2 && y < y2))
            {
                ans = ans + (x * y)*mp[it->first];
            }
            if(x>=x1){
                break;
            }
        }

        cout << ans << endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    // T=1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
