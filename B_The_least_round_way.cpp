#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define endl           "\n"
#define double         long double
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int modInverse(int a, int m)
{
    int m0 = m;int y = 0, x = 1;
    if (m == 1) return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += m0;
    return x;
}
int gcd(int a, int b){if(b==0){return a;}else{return gcd(b,a%b);}}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
void print(vector<vector<pair<int,int> >> &dp){
    cout<<"(countof 2, countof 5)"<<endl;
    for(auto i: dp){
        for(auto j: i){
            cout<<"("<<j.first<<","<<j.second<<") "<<' ';
        }
        cout<<endl;
    }
}
void solve() {
    int n;cin>>n;
    vector<vector<int> > v(n, vector<int> (n));
    for(auto &i: v){
        for(auto &j: i){
            cin>> j;
        }
    }
    vector<vector<pair<int,int> >> dp(n, vector<pair<int,int>> (n));
    string s[n][n]={""};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t,f;
            t=0;f=0;
            int x=v[i][j];
            while(x%2==0){
                x/=2;
                t++;
            }
            while(x%5==0){
                x/=5;
                f++;
            }
            if(j==0 and i==0){
                dp[i][j].first+=t;
                dp[i][j].second+=f;
            }
            else if(i==0){
                // cout<<i<<' '<<j<<" "<<t<<' '<<f;
                // cout<<dp[i][j-1].first<<' '<<dp[i][j-1].second<<endl;
                dp[i][j].first=dp[i][j-1].first+t;
                dp[i][j].second=dp[i][j-1].second+f;
                // cout<<dp[i][j].first<<' '<<dp[i][j].second<<endl;
                s[i][j]=s[i][j-1]+"R";
            }
            else if(j==0){
                dp[i][j].first=dp[i-1][j].first+t;
                dp[i][j].second=dp[i-1][j].second+f;
                s[i][j]=s[i-1][j]+"D";
            }
            else{
                int u=dp[i-1][j].first+t;
                int v=dp[i-1][j].second+f;
                int y=dp[i][j-1].first+t;
                int z=dp[i][j-1].second+f;
                int miniuv=min(u,v);
                int miniyz=min(y,z);
                if(miniuv==miniyz){
                    if(max(u,v)< max(y,z)){
                        dp[i][j].first=u;
                        dp[i][j].second=v;
                        s[i][j]=s[i-1][j]+"D";
                    }
                    else{
                        dp[i][j].first=y;
                        dp[i][j].second=z;
                        s[i][j]=s[i][j-1]+"R";
                    }
                }
                else if(miniuv< miniyz){
                    dp[i][j].first=u;
                    dp[i][j].second=v;
                    s[i][j]=s[i-1][j]+"D";
                }
                else{
                    dp[i][j].first=y;
                    dp[i][j].second=z;
                    s[i][j]=s[i][j-1]+"R";
                }
                // cout<<dp[i][j].first<<dp[i][j].second;
            }
            // cout<<"( "<<t<<','<<f<<") ";
        }
        // cout<<endl;
        
    }
    int cnt=min(dp[n-1][n-1].first, dp[n-1][n-1].second);
    cout<<cnt<<endl;
    cout<<s[n-1][n-1]<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<s[i][j]<<' ';
    //     }
    //     cout<<endl;
        
    // }
    // print(dp);
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}