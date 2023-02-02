#include<iostream>
#include <cmath>
using namespace std;
void solve(){
    int x,y;
    double ans;
    cin>>x>>y;
    ans=sqrt(pow(0 -x,2)+pow(0 -y,2));
    if (x==0 && y==0)
    {
        cout<<0<<endl;
    }
    else if (ans==(int)ans)
    {
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
}