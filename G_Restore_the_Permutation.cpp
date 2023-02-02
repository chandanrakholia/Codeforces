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
    int n;cin>>n;
    set<int>s;
    int p=0;
    vector<int> v(n/2),rest;
    bool arr[n+1]={false};
    for (int i = 0; i < n/2; i++)
    {
        cin>>v[i];
        arr[v[i]]=true;
        if(s.find(v[i])!=s.end()) p=1;
        s.insert(v[i]);
    }
    if(p){
        cout<<-1<<endl;
        return;
    }
    for (int i = 1; i < n+1; i++)
    {
        if(!arr[i]){
            rest.push_back(i);
        }
    }
    sort(rest.begin(),rest.end(),greater<int>());
    int x=1;
    for (int i = n/2 -1; i>=0; i--)
    {
        auto it=lower_bound(rest.begin(),rest.end(),v[n/2 - i-1]);
        // if(it==rest.end()){
        //     x=0;
        //     // break;
        // }
        // else{
            rest.erase(it);
        // }
        // cout<<v[n/2 - i-1]<<' ';
        // cout<<rest[*it]<<' ';
        bug(v[n/2-i-1],rest[*it]);
    }
    // cout<<1<<endl;
    // if(x==0){
    //     cout<<-1<<endl;
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