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
int maxii(int arr[],int n){
    map<int,int>mp;
    mp[0]=0;
    mp[1]=0;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            ans+=mp[0];
        }
        else{
            mp[0]--;
        }
    }
    return ans;
}
void solve() {
    int n;cin>>n;int arr[n];
    int arr2[n];
    int arr3[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
        arr3[i]=arr[i];
    }
    int a1=maxii(arr,n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            arr2[i]=1;
            break;
        }
    }
    int a2=maxii(arr2,n);
    for (int i = n-1; i>=0; i--)
    {
        if(arr[i]==1){
            arr3[i]=0;
            break;
        }
    }
    int a3=maxii(arr3,n);
    cout<<max(max(a1,a2),a3)<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr2[i]<<' ';
    // }
    
    // cout<<a1 <<' '<<a2<<' '<<a3<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}