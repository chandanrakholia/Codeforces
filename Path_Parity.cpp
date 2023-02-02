#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for (int z = 0; z < T; z++)
    {
        int k;
        long long n;
        cin>>n>>k;
        if (n%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if (k%2==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            
        }
        
        
    }
    
    return 0;
}