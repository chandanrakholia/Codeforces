#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
bool solve()
{
    ll n;
    cin >> n;
    vector<ll>v;
    ll pos = 0;
    ll neg = 0;
    ll zero = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        if(x || !zero){
            v.push_back(x);
        }
        if (x>0)
        {
            pos++;
        }
        else if(x<0){
            neg++;
        }
        else{
            zero++;
        }
        
    }
    if(pos>2  || neg>2) return false;

        n=v.size();
        for (ll  i = 0; i < n; ++i)
        {
            for (ll j = i+1; j < n; ++j)
            {
                for (ll k = j+1; k < n; ++k)
                {
                    ll found=false;
                    for (ll p = 0; p < n; ++p)
                    {
                        if(v[i]+v[j]+v[k]==v[p]){
                            found=1;
                        }
                    }
                    if(!found){
                            return false;
                        }
                    
                }
                
            }
            
        }
        return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    for (ll tt = 0; tt < t; tt++)
    {
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}