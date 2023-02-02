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
int f(int n, vector<vector<int>> &points)
{
    // vector<vector<int> > dp(n, vector<int> (3));
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                points[i][j]=max(points[i-1][j+1], points[i-1][j+2])+points[i][j];
            }
            else if(j==1){
                points[i][j]=max(points[i-1][j-1], points[i-1][j+1])+points[i][j];
            }
            else if(j==2){
                points[i][j]=max(points[i-1][j-2], points[i-1][j-1])+points[i][j];
            }
        }
    }
    int ans=*max_element(points[n-1].begin(), points[n-1].end());
    return ans;
}
void solve() {
    int n;cin>>n;
    vector<vector<int> > points(n, vector<int>(3));
    for(auto &i: points){
        for(auto &j: i){
            cin>>j;
        }
    }
    int ans=f(n, points);
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}