#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define double long double
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<queue<int>> v;
        for (int i = 0; i < n; i++)
        {
            queue<int> q;
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                q.push(x);
            }
            v.push_back(q);
        }
        vector<int> ans(n);
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            map<int, int> mp;
            for (int j = 0; j < n; j++)
            {
                if (v[j].size() > 0)
                {
                    mp[v[j].front()]++;
                }
            }
            int f = 0;
            for (auto j = mp.begin(); j != mp.end(); j++)
            {
                if ((j->second) == n - 1)
                {
                    f = j->first;
                    ans[idx] = (j->first);
                    idx++;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (v[j].front() == f)
                {
                    v[j].pop();
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}