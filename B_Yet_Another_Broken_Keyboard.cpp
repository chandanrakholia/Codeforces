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
bool isthere(char c, vector<char> &v){
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==c) return true;
    }
    return false;
    
}
// void solve() {
    // int n,k;cin>>n>>k;
    // string s;cin>>s;
    // vector<char> v;
    // for (int i = 0; i < k; i++)
    // {
    //     char c;cin>>c;
    //     v.push_back(c);
    // }
    // int ans=0;
    // int cnt=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(!isthere(s[i], v)){
    //         ans+=(cnt+1)*(cnt)/2;
    //         cnt=0;
    //     }
    //     else{
    //         cnt++;
    //     }
    // }
    // ans+=(cnt+1)*(cnt)/2;
    // cout<<ans<<endl;
// }
void print(vector<int>&dp){
    for (int i = 0; i < dp.size(); i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
}
void solveDP(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<char> v;
    for (int i = 0; i < k; i++)
    {
        char c;cin>>c;
        v.push_back(c);
    }
    vector<int> dp(n);
    int cnt=0;
    if(!isthere(s[0], v)){
        dp[0]=0;
    }
    else{
        dp[0]=1;
        cnt++;
    }
    for (int i = 1; i < n; i++)
    {
        if(isthere(s[i], v)){
            dp[i]=dp[i-1]+cnt+1;
            cnt++;
        }
        else{
            dp[i]=dp[i-1];
            cnt=0;
        }
    }
    // print(dp);
    cout<<dp[n-1]<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solveDP();

    return 0;
}