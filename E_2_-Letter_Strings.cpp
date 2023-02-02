#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    map<string, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        string temp = x;
        for (char i = 'a'; i <= 'k'; i++)
        {
            if (i != x[0])
            {
                temp[0] = i;
                ans += mp[temp];
            }
        }
        temp=x;
        for (char i = 'a'; i <= 'k'; i++)
        {
            if (i != x[1])
            {
                temp[1] = i;
                ans += mp[temp];
            }
        }
        mp[x]++;
    }
    cout<<ans<<endl;
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
