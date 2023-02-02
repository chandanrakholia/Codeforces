#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    string arr[n];
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
    }
    int count_pair = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '0' && arr[i + 1][j] == '0')
            {
                count_pair++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (arr[i][j] == '0' && arr[i][j + 1] == '0')
            {
                count_pair++;
            }
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (arr[i][j] == '0')
            {
                if (arr[i + 1][j + 1] == '0')
                {
                    count_pair++;
                }
                if (arr[i + 1][j - 1] == '0')
                {
                    count_pair++;
                }
                if (arr[i - 1][j - 1] == '0')
                {
                    count_pair++;
                }
                if (arr[i - 1][j + 1] == '0')
                {
                    count_pair++;
                }
            }
        }
    }
    if (arr[0][0] == '0')
    {
        if (arr[1][1] == '0')
        {
            count_pair++;
        }
    }
    if (arr[0][m - 1] == '0')
    {
        if (arr[1][m - 2] == '0')
        {
            count_pair++;
        }
    }
    if (arr[n - 1][0] == '0')
    {
        if (arr[n - 2][1] == '0')
        {
            count_pair++;
        }
    }
    if (arr[n - 1][m - 1] == '0')
    {
        if (arr[n - 2][m - 2] == '0')
        {
            count_pair++;
        }
    }
    if (arr[0][1] == '0' && arr[1][0] == '0')
    {
        count_pair++;
    }
    if (arr[0][m - 2] == '0' && arr[1][m - 1] == '0')
    {
        count_pair++;
    }
    if (arr[n - 2][0] == '0' && arr[n - 1][1] == '0')
    {
        count_pair++;
    }
    if (arr[n - 1][m - 2] == '0' && arr[n - 2][m - 1] == '0')
    {
        count_pair++;
    }

    if (count_pair >= 1)
    {
        cout << count1 << endl;
    }
    else
    {
        if (count0 == 0)
            cout << count1 - 2 << endl;
        else
            cout << count1 - 1 << endl;
    }
    // cout<<count1<<endl;
    // cout<<count_pair<<endl;
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
