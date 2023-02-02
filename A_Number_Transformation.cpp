#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        int x,y;
        cin>>x>>y;
        // if (x==y && (x!=0 and y!=0))
        // {
        //     cout<<'1'<<' '<<'1'<<endl;
        // }

        if(y%x==0){
            int z=y/x;
            cout<<'1'<<' '<<z<<endl;

    }
        else{
            cout<<'0'<<' '<<'0'<<endl;
            
        }
    }
    return 0;
}