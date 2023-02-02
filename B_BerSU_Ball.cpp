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

void solve() {
    int n;cin>>n;
    vector<int>v1(n);
    for(int &ele: v1) cin>>ele;
    int m;cin>>m;
    vector<int>v2(m);
    for(int &ele: v2) cin>>ele;
    vector<vector<int>>dp(n, vector<int>(m, 0));
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i-1>=0 and j-1>=0){
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
            }
            if(abs(v1[i]-v2[j])<=1){
                dp[i][j]++;
            }
            if(i-1>=0){
                dp[i][j]=max(dp[i][j], dp[i-1][j]);
            }
            if(j-1>=0){
                dp[i][j]=max(dp[i][j],dp[i][j-1]);
            }
        }
        
    }
    cout<<dp[n-1][m-1]<<endl;
    

}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}