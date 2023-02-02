#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if (x<=a and y<=b+c)
        {
            cout<<"YES"<<endl;
        }
        else if(y<=b and x<=a+c){
            cout<<"YES"<<endl;
        }
        else if(x>a and y>b and x+y-a-b<=c){
            cout<<"YES"<<endl;
        }
        else if(x>a and y<b and x-a<=c){
            cout<<"YES"<<endl;
        }
        else if(x<a and y>b and y-b<=c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}