#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n != 5)
    {
        cout << "NO" << endl;
    }
    else
    {
        int T = 0;
        int i = 0;
        int m = 0;
        int u = 0;
        int r = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'T')
            {
                T++;
            }
            if (s[j] == 'i')
            {
                i++;
            }
            if (s[j] == 'm')
            {
                m++;
            }
            if (s[j] == 'u')
            {
                u++;
            }
            if (s[j] == 'r')
            {
                r++;
            }
        }
        if (T==1 && i==1 && m==1 && u==1 && r==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
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
