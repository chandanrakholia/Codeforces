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
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

void solve() {
    int n,m;cin>>n>>m;
    int n1=n,c2=0,c5=0,x=1;
    while(n1%2==0){c2++;n1/=2;}
    while(n1%5==0){c5++;n1/=5;}
    // bug(c2,c5,x);
    while(c5>c2 && x*2<=m){x*=2;c5--;}
    // bug(c2,c5,x);
    while(c2>c5 && x*5<=m){x*=5;c2--;}
    // bug(c2,c5,x);
    while(x*10<=m){x*=10;}
    // bug(c2,c5,x);
    cout<<((m/x)*x)*n<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}