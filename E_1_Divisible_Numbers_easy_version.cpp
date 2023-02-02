#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define double long double
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
int primeFactors[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53}; 
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ansx=-1;
    int ansy=-1;
    for (int x = a+1; x <=c; x++)
    {
        int g=(a*b)/(__gcd(a*b,x));
        if(b<(d/g)*g && (d/g)*g<=d){
            ansx=x;
            ansy=(d/g)*g;
            cout<<ansx<<' '<<ansy<<endl;
            return;
        }
    }
    cout<<-1<<' '<<-1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}