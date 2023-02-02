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
    int n,h;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int g=2;
    int b=1;
    int c1=0;
    int i=0;
    int h1=h;
    while(i<n){
        if(arr[i]<h1){h1+=arr[i]/2;i++;c1++;}
        else{
            if(g>0){
                h1*=2;
                g--;
            }
            else if(b>0){
                h1*=3;
                b--;
            }
            else{
                break;
            }
        }
    }

    g=2;
    b=1;
    int c2=0;
    i=0;
    h1=h;
    while(i<n){
        if(arr[i]<h1){h1+=arr[i]/2;i++;c2++;}
        else{
            if(b>0){
                h1*=3;
                b--;
            }
            else if(g>0){
                h1*=2;
                g--;
            }
            else{
                break;
            }
        }
    }


    g=2;
    b=1;
    int c3=0;
    i=0;
    h1=h;
    while(i<n){
        if(arr[i]<h1){h1+=arr[i]/2;i++;c3++;}
        else{
            if(g>1){
                h1*=2;
                g--;
            }
            else if(b>0){
                h1*=3;
                b--;
            }
            else if(g>0){
                h1*=2;
                g--;
            }
            else{
                break;
            }
        }
    }
    int ans=max(c1,c2);
    ans=max(ans,c3);
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