#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int T = 0; T < t; T++)
    {
        int n,sum;
        cin>>n>>sum;
        vector<int>v;
        int s=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            s=s+x;
        }
        if (s<sum)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(s==sum){
                cout<<0<<endl;
            }
            else
            {
                int ans=0;
                while (accumulate(v.begin(), v.end(), 0)>sum )
                {     
                    // if (v[0]==0 and v[v.size()-1]==0)
                    // {
                    //     ans++;
                    //     v.pop_back();
                    // }             
                    if (v[v.size()-1]==1)
                    {
                        v.pop_back();
                        ans++;
                    }
                    else
                    {
                        if(v[0]==1)
                        {v.erase(v.begin());
                        ans++;  }        
                    }
                    
                }
                cout<<ans<<endl;
                   
            }
            
        }
        
        
        
    }
    
    return 0;
}