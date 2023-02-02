#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;

const char nl = '\n';

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll Q;
    cin >> Q;
    map<ll, ll> mp;
    mp[0] = 1;
    map<ll, ll> ans;
    while (Q--)
    {
        char c;
        ll x;
        cin >> c;
        cin >> x;
        if (c == '+')
        {
            mp[x]++;
        }
        else
        {
            ll p = ans[x] / x;
            for (ll i = p; true; i++)
            {
                if (mp.find(x * i) == mp.end())
                {
                    ans[x] = x * i;
                    cout << x * i << endl;
                    break;
                }
            }
        }
    }
}