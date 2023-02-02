#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[3*n];
    int a=0,b=0,c=0;
    for (int i = 0; i <n; i++)
    {
     int x,y,z;
     cin>>x>>y>>z;
     a=a+x;
     b=b+y;
     c=c+z;   
    }
    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;
    if(a==0 and b==0 and c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}