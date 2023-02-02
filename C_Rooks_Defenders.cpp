#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,q;cin>>n>>q;
    map<int,bool>mpx;
    map<int,bool>mpy;
    for (int i = 0; i < q; i++)
    {
        int t;cin>>t;
        if(t==1){
            int x,y;cin>>x>>y;
            mpx[x]=true;
            mpy[y]=true;
        }
        else if(t==2){
            int x,y;cin>>x>>y;
            mpx.erase(x);
            mpy.erase(y);
        }
        else{
           int x1, x2, y1, y2;
            cin>>x1>>y1>>x2>>y2;
            bool is_attacked = true;
            int flagx = 1;
            int flagy = 1;
 
            for(int j=y1;j<=y2;j++){
                if(mpy.find(j) == mpy.end() or mpy[j] == 0){
                    flagy = 0;
                    break;
                }
            }
            for(int i=x1;i<=x2;i++){
                if(mpx.find(i) == mpx.end() or mpx[i] == 0){
                    flagx = 0;
                    break;
                }
            }
            if(!(flagx+flagy)){
                is_attacked = false;
            }
            if(is_attacked){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }    
        }
    }
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    // ll T;
    // T=1;
    // cin>>T;
    // while (T--)
    // {
      solve();
    // }
    
    
}

