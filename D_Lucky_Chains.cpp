#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define double long double
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MAXN 10000007
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
const int N = 1e7 + 7;

vector<int> prime(N, 1);

void sieve()
{
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
}
void solve()
{
    int x, y;
    cin >> x >> y;
    if (abs(x - y) == 1)
    {
        cout << -1 << endl;
    }
    else if (gcd(x, y) != 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = INT_MAX;
        int k = abs(x - y);
        x = min(x, y);
        while (k > 1)
        {
            int fact = prime[k];
            while (k % fact == 0)
            {
                k /= fact;
            }
            ans = min(ans, fact - (x % fact));
        }
        cout << ans << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    sieve();
    while (t--)
        solve();

    return 0;
}