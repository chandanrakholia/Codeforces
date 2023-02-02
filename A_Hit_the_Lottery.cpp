#include <bits/stdc++.h>
#include <limits>
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
#include <climits>

using namespace std;

typedef long long ll;
int max_possi(int n){
  if(n>=100){
    return 100;
  }
  else if(n>=20){
    return 20;
  }
  else if(n>=10){
    return 10;
  }
  else if(n>=5){
    return 5;
  }
  else if(n>=1){
    return 1;
  }
  else{
    return 0;
  }
}
int dp(int n){
  if(n==0) return 0;
  return 1+dp(n-max_possi(n));
}
int fun(int n){
  int count=0;
  if(n>=100){
    count+=n/100;
    n=n%100;
  }
  if(n>=20){
    count+=n/20;
    n=n%20;
  }
  if(n>=10){
    count+=n/10;
    n=n%10;
  }
  if(n>=5){
    count+=n/5;
    n=n%5;
  }
  if(n>=1){
    count+=n;
  }
  return count;
}
void solve(){
    ll n;
    cin>>n;
    int ans=fun(n);
    cout<<ans<<endl;
}
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll T;
    T=1;
    // cin>>T;
    while (T--)
    {
      solve();
    }
    
    
}

