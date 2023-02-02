#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <chrono>
#include <unordered_set>
#include <unordered_map>
#include <random>
#include <bitset>
#include <sstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    ll n;
    cin>>n;
    int arr[10]={0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr[x%10]++;

    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<' ';
    // }
    bool flag=false;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>0)
        {
            arr[i]--;
            for (int j = 0; j < 10; j++)
            {
                if (arr[j]>0)
                {
                    arr[j]--;
                    int p=23-i-j;
                    if (arr[p%10]>0)
                    {
                        flag=true;
                        break;
                    }
                    arr[j]++;
                }
                
            }
            arr[i]++;
        }
        
    }
    if (flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    
    
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    //  cout << "Case #" << it+1 << ": ";
     solve();
 }
 return 0;
}