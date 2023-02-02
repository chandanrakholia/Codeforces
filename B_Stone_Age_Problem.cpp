#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n, q;
  cin >> n >> q;
  ll arr[n];
  ll sum = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  map<ll,ll>mp;
  // int index[q]={0};
  // int value[q]={0};
  ll x=-1;
  for (ll i = 0; i < q; i++)
  {
    ll t;
    cin >> t;
    if (t == 1)
    {
      ll idx, val;
      cin>>idx>>val;
      idx--;
      auto itr=mp.find(idx);
      if(itr!=mp.end()){
        sum+=val-mp[idx];
      }
      else if(x==-1){
        sum+=val-arr[idx];
      }
      else{
        sum+=val-x;
      }
      mp[idx]=val;

    }
    else
    {
      mp.clear();
      cin >> x;
      sum=n*x;
    }
    cout << sum << endl;
  }
}
int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll T;
  T = 1;
  while (T--)
  {
    solve();
  }
}
