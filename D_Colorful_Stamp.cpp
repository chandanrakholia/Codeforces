#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int count_B=0;
    int count_R=0;
    int len=0;
    bool flag=true;
    string temp;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='W'){
            if((len==count_B || len==count_R) && len!=0){
                flag=false;
                break;
            }
            else{
                temp.clear();
                count_B=0;
                count_R=0;
                len=0;
            }
        }
        else{
            if(s[i]=='B'){
                count_B++;
            }
            else{
                count_R++;
            }
            len++;
            temp.push_back(s[i]);
        }
    }
    if(len!=0 && (count_B==len || count_R==len)){
        flag=false;
    }
    if(flag==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}