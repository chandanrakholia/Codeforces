#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int x;
    if(n==1){
        cout<<'!'<<' '<<1<<' '<<1<<endl;
        cin>>x;
    }
    else if(n==2){
        cout<<'!'<<' '<<1<<' '<<2<<endl;
        cin>>x;
    }
    else{
        stack<int>st;
        for (int i = n; i > 0; i--)
        {
            st.push(i);
        }
        while(st.size()!=2){
            int n1=st.top();
            st.pop();
            int n2=st.top();
            st.pop();
            int n3=st.top();
            st.pop();
            int g1,g2;
            cout<<'?'<<' '<<n1<<' '<<n2<<endl;
            cin>>g1;
            cout<<'?'<<' '<<n1<<' '<<n3<<endl;
            cin>>g2;
            if(g1==g2){
                st.push(n3);
                st.push(n2);
            }
            else if(g1<g2){
                st.push(n3);
                st.push(n1);
            }
            else if(g1>g2){
                st.push(n2);
                st.push(n1);
            }
        }
        int a1=st.top();
        st.pop();
        int a2=st.top();
        cout<<'!'<<' '<<a1<<' '<<a2<<endl;
        cin>>x;
    }
    
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}