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

void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    for (ll i = 1; i <= (n-1)/2; i++)
    {
        ans+=2*i*i;
    }
    cout<<ans*4<<endl;
}
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll T;
    // T=1;
    cin>>T;
    while (T--)
    {
      solve();
    }
    
    
}

