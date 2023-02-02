#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int T;cin>>T;
    while (T--)
    {
        int l;
        string n;
        cin>>l>>n;
        string ans;
        if(n[0]!='9'){
            for (int i = 0; i < l; i++)
            {
                int x=n[i]-'0';
                int y=9-x;
                ans+=(y+'0');
            }
        }
        else
        {
            int p=0;
            for (int i = l-1; i >=0; i--)
            {
                int x=n[i]-'0';
                x=x+p;
                if (x>1)
                {
                    p=1;
                    int y=11-x;
                    ans+=y+'0';
                }
                else
                {
                    int y=1-x;
                    ans+=y+'0';
                }
                
            }
            reverse(ans.begin(),ans.end());         
        }
        cout<<ans<<endl;
          
    }
    
    return 0;
}