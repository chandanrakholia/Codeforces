#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
void print_map(map<ll, int>m){
    for(auto itr = m.begin();itr!= m.end();itr++){
        cout<<itr->first<<' '<<itr->second<<endl;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    for (ll j = 0; j < t; j++)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        for (ll i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr, arr + n, greater<int>());
        ll pre_sum[n];
        pre_sum[0]=arr[0];
        
        for (ll i = 1; i < n; i++) pre_sum[i]=pre_sum[i-1]+arr[i];

        ll k=pre_sum[n-1];
        map<ll,int>mp;
        for (ll i = 0; i < n; i++) mp[pre_sum[i]]=i+1;

        for (ll r = 0; r < q; r++)
        {
            ll x;
            cin >> x;
            if (k < x)
            {
                cout << -1 << endl;
            }
            else if(k==x)
            {
                cout<<n<<endl;
            }
            else{
                if(mp[x]){
                    cout<<mp[x]<<endl;
                    cout<<mp[x]<<endl;
                }
                else{

                    auto it=mp.upper_bound(x);
                    cout<<it->second<<endl;
                    // cout<<mp[25]<<endl;
                    // print_map(mp);
                }
            }
            // print_map(mp);
        }
    }
 
    return 0;
}