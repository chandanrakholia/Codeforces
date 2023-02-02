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
void print(vector<vector<int> >&dp){
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
        
    }
    
}
void solve() {
    int n;cin>>n;
    vector<int> v(n);
    for(auto &ele: v){
        cin>>ele;
    }
    vector<vector<int> >dp(n+1, vector<int> (2));
    for(int i=1;i<=n;i++){
        if(v[i]==1 or v[i]==3){
            dp[i][1]=max(dp[i-1][0]+1, dp[i-1][2]+1);
        }
        else if(v[i]==2 or v[i]==3){
            dp[i][2]=max(dp[i-1][1]+1, dp[i-1][0]+1);
        }
    }
    print(dp);
    // int mx=INT_MIN;
    // for (int i = 0; i < 3; i++)
    // {
    //  if(mx<dp[n][i]){
    //     mx=dp[n][i];
    //  }   
    // }
    // cout<<n-mx<<endl;
        
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}