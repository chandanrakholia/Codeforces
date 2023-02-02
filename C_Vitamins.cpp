#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define endl           "\n"
void solve() {
    int n;cin>>n;
    int f[n+1][8];
    const int inf=1e17;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            f[i][j]=inf;
        }
    }
    f[0][0]=0;
    for (int i = 0; i < n; i++)
    {
        int cost;
        string s;
        cin>>cost>>s;
        int string_mask=0;
        for (int pos = 0; pos < 3; pos++)
        {
            char c='C'-pos;
            bool have=0;
            for(char d:s){
                if(c==d){
                    have=1;
                }
            }
            if(have){
                string_mask+=(1<<pos);
            }
        }
        // cout<<string_mask<<endl;
        for (int mask = 0; mask < 8; mask++)
        {
            f[i+1][mask]=min(f[i+1][mask], f[i][mask]);
            f[i+1][mask | string_mask]=min(f[i+1][mask | string_mask],f[i][mask]+ cost);
        }
        
    }
    int ans=f[n][7];
    if(ans==1e17){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    // for (int i = 0; i <=n; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout<<f[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}