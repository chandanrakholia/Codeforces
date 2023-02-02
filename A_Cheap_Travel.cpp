#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    float q=b*10*.1/m;
    if(a<=q){
        cout<<a*n<<endl;
    }
    else{
        int x=ceil(n*10*.1/m)*b;
        int y=((n/m)*b)+(n%m)*a;
        cout<<min(x,y)<<endl;
        // cout<<x<<endl;
    }
    
}
int main(){
    solve();
    return 0;
}