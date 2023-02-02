#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define endl           "\n"
#define double         long double
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}
int hcf(int a, int b){
    if(b==0){
        return a;
    }else{
        return hcf(b,a%b);
    }
}
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
    int a[n],b[n],c[n];
    for (int i = 0; i <n; i++) cin>>a[i];
    for (int i = 0; i <n; i++) cin>>b[i];
    for (int i = 0; i <n; i++) c[i]=b[i]-a[i];
    sort(c,c+n);
    int i=0;
    int j=n-1;
    int ans=0;
    // for (int i = 0; i <n; i++) cout<<c[i]<<' ';
    // cout<<endl;
    while(i<j){
        if(c[i]+c[j]>=0){
            ans++;
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;

    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}