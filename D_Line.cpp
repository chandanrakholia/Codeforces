#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    int ps = 0;
    int pe = n - 1;
    if (n % 2 == 0)
    {
        /* code */
    }
    else
    {
        for (int i = 0; i < (n - 1) / 2; i++)
        {
            if (s[i] == 'L')
            {
                x = x + i - 0;
            }
        }
        x = x + n / 2;
        for (int i = 0; i < (n - 1) / 2; i++)
        {
            if (s[n - 1 - i] == 'L')
            {
                x = x + n - 1 - i;
            }
        }
        vector<int> v;
        int ans = x;
        while (ps < pe)
        {
            if (s[ps] == 'L')
            {
                s[ps] = 'R';
                ans = ans + n - 1 - ps;
                v.push_back(ans);
            }
            if (s[pe] == 'R')
            {
                s[pe] = 'L';
                ans = ans + pe;
                v.push_back(ans);
            }
            pe--;
            ps++;
        }
        int sz = v.size();
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << ' ';
        }
        for (int i = 0; i < n - sz; i++)
        {
            cout << ans << ' ';
        }
        cout << endl;
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
