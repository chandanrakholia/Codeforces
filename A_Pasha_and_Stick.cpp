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
    if (n%2!=0)
    {
        ans=0;
    }
    else{
        if(n%4==0){
            ans=(n/4)-1;
        }
        else
        ans=n/4;
    }
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

