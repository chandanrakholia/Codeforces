#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
        int sum=5*X+10*Y;
        cout<<sum/Z<<endl;
    }
    
    return 0;
}