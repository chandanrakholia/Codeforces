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
#define ll long long int
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
bool ispal(int x,int y){
    if (x/10==y%10 and x%10==y/10)
    {
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int h=stoi(s.substr(0,2));
    int m=stoi(s.substr(3,2));
    int h1=h;
    int m1=m;
    vector<pair<int,int>>v;
    while (true)
    {
        m1=m1+n;
        if (m1>=60)
        {
            h1+=m1/60;
            m1=m1%60;        
        }
        if (h1>=24)
        {
            h1=h1-24;
        }
        v.push_back({h1,m1});
        if (h1==h and m1==m)
        {
            break;
        }
        
    }
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (ispal(v[i].first,v[i].second))
        {
            count++;
        }
        // cout<<v[i].first<<' '<<v[i].second<<endl;
    }
    
    cout<<count<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int T;
    cin>>T;
    loop1(i,T){
        solve();
    }
    return 0;
}