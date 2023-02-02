#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define double long double
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1)
    {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

void solve()
{

    int n, k;
    cin >> n >> k;

    int h[n], p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        vp.push_back({p[i], h[i]});
    }

    sort(vp.begin(), vp.end());

    int i = 0;
    int cur = 0;
    while (k > 0 && i < n)
    {
        if (vp[i].second - cur <= 0)
        {
            vp[i].second = 0;
            i++;
            continue;
        }
        vp[i].second -= cur;
        int val = (int)ceil(k / vp[i].first);
        for (int j = 1; j <= val; j++)
        {
            vp[i].second -= k;
            cur += k;
            if (vp[i].second <= 0)
            {
                break;
            }
            k -= vp[i].first;
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        if (vp[i].second > 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}