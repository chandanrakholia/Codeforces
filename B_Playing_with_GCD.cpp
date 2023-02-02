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
int gcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
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
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int ans[n+1];
    ans[0]=arr[0];
    ans[n]=arr[n-1];
    for (int i = 1; i < n; i++)
    {
        ans[i]=lcm(arr[i-1],arr[i]);
    }
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        if(gcd(ans[i],ans[i+1])!=arr[i]){
            flag=false;
        }
    }
    if(flag==false) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
    // for (int i = 0; i < n+1; i++)
    // {
    //     cout<<ans[i]<<' ';
    // }
    
    

    

    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}