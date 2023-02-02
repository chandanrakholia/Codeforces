#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_of_multiple(int x1,int y1,int x2,int y2,int x3,int y3){
    int x=x2-x1;
    int y=y2-y1;
    int p=x3-x1;
    int q=y3-y1;
    bool f=false;
    // for (int i = 1; i < 350; i++)
    // {
    //     if(x*i==p && y*i==q){
    //         f=true;
    //         break;
    //     }
    // }
    if(q==(y*p)*10*.1/x){
        f=true;
    }
    if(f){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    int n;cin>>n;
    int arr[n];
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        arr[i]=x;
        v.push_back({i+1,x});
    }
    if(n<=2){
        cout<<0<<endl;
    }
    else{
    int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int count=2;
            for (int k = j+1; k < n; k++)
            {
                if(is_of_multiple(v[i].first,v[i].second,v[j].first,v[j].second,v[k].first,v[k].second))
                {
                    count++;
                }
            }
            if(count>mx){
            mx=count;
            }
            
        }
        
    }
    cout<<n-mx<<endl;
    }
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

