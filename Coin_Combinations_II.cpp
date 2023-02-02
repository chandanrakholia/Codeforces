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
void print(vector<int> &dp){
    for (int i = 0; i < dp.size(); i++)
    {
        cout<<dp[i]<<' ';
    }
    cout<<endl;
    
}
void solve() {
    int n,x;cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int N=1e9+7;
    vector<int> dp(x+1);
    dp[0]=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=x; j++)
        {
            if(j-arr[i-1]>=0){
                dp[j]+=dp[j-arr[i-1]]%N;
                dp[j]=dp[j]%N;
            }
        }
        // print(dp);
    }
    
    // print(dp);
    cout<<dp[x]<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}