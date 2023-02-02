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
const int MAXM = 1e5;
vector<int> factors[MAXM + 5];

void init()
{
    for (int i = 1; i <= MAXM; i++)
    {
        for (int j = i; j <= MAXM; j += i)
        {
            factors[j].push_back(i);
        }
    }
}

void solve() {
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    sort(arr.begin(), arr.end());
    map<int,int> mp;
    int curr_count=0;
    int ans=INT_MAX;
    int l=0;
    for (int i = 0; i < n; i++)
    {
        for(auto j: factors[arr[i]]){
            if(j>m) break;
            if(!mp[j]++){
                curr_count++;
            }
        }
        while(curr_count==m){
            ans=min(ans, arr[i]-arr[l]);
            for (auto j: factors[arr[l]])
            {
                if(j>m) break;
                if(--mp[j]==0){
                    curr_count--;
                }
            }
            l++;
        }
    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
    }
    else
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    init();
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}