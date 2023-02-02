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
    int len;
    int t;
    cin>>len>>t;
    string ans;
    if (t==10)
    {
        if (len==1)
        {
            ans="-1";
        }
        
        else{

        ans="1";
        for (int i = 0; i < len-1; i++)
        {
            ans.push_back('0');
        }
        }
        
    }
    else{
        for (int i = 0; i < len; i++)
        {
            ans+=to_string(t);
        }
        
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

