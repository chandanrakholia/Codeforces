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
bool help(int a, int b, vector<int> &v){
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]==a and v[i+1]==b) return true;
    }
    return false;
}
void solve() {
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i: v) cin>>i;
    int sum=accumulate(v.begin(), v.end() ,0);
    if(help(-1, -1, v)){
        sum+=4;
    }
    else if(help(-1, 1, v) || help(1, -1, v)){
        sum+=0;
    }
    else if(help(1,1,v)){
        sum-=4;
    }
    cout<<sum<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}