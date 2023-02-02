#include <bits/stdc++.h>

using namespace std;


#define endl "\n"
typedef vector<int> vi;
# define int long long



int32_t main(){
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n, m, d;
        cin>>n>>m>>d;
        int per[n], arr[m];
        unordered_map<int, int> mp;
        for(int i = 0;i<n;i++) {
            cin>>per[i];
            mp[per[i]] = i;
        }
        int ans = 0;
        bool up = 1;
        for(int i = 0;i<m;i++) {
            cin>>arr[i];
        }
        for(int i = 0;i<m-1;i++) {
            int t = 0;
            if(mp[arr[i]] < mp[arr[i+1]] and mp[arr[i+1]] - mp[arr[i]] <= d){
                int a = mp[arr[i]] - mp[arr[i+1]] + d + 1;
                int b = mp[arr[i+1]] - mp[arr[i]];

                if(mp[arr[i+1]]+a-mp[arr[i]] >= n) a = 1e9;

                t = min(a, b);
                if(up) {
                    ans = t;
                    up = 0;
                }
                else ans = min(ans, t);
            }
            if(t == 0) {
                ans = 0;
                break;
            }
        }
        cout<<ans<<endl;
    }
}