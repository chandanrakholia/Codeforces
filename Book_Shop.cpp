#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define endl           "\n"
#define double         long double
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int gcd(int a, int b){if(b==0){return a;}else{return gcd(b,a%b);}}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
void print(vector<vector<int>> &dp){
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout<<dp[i][j]<< ' ';
        }
        cout<<endl;
    }
    
}
void solve() {
    int n,x;cin>>n>>x;
    int price[n];
    int page[n];
    for (int i = 0; i < n; i++)
    {
        cin>>price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>page[i];
    }
    vector<vector<int>> dp(n+1, vector<int> (x+1));
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=x; j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j-price[i-1]>=0){
                dp[i][j]=max(dp[i][j], dp[i-1][j-price[i-1]]+page[i-1]);
            }
        }
    }
    // print(dp);
    cout<<dp[n][x]<<endl;
    
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}