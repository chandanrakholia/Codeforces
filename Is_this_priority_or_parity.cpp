#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int n,k;
        cin>>n>>k;
        if (n==1)
        {
            cout<<"ODD"<<endl;
        }
        
        else if (k==1)
        {
            if (n%2==0)
            {
                cout<<"EVEN"<<endl;
            }
            else
            {
                cout<<"ODD"<<endl;
            }
        }
        else if (k==2)
        {
            cout<<"ODD"<<endl;
        }
        else
        {
            cout<<"EVEN"<<endl;
        }
        
        
        
    }
    
    return 0;
}