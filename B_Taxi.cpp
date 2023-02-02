#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        m[x]=m[x]+1;
    }
    // map<int,int>::iterator itr;
    // for (itr= m.begin();itr!=m.end(); itr++)
    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    int sum=m[4]+m[3];
    if (m[3]<=m[1]){
        m[1]=m[1]-m[3];
    }
    else
    {
        m[1]=0;
    }
    sum=sum+m[2]/2;
    if (m[2]%2==1)
    {
        sum=sum+1;
        m[1]=max(0,m[1]-2);
    }
    sum=sum+m[1]/4;
    if (m[1]%4!=0)
    {
        sum++;
    }
    cout<<sum<<endl;
    
     
    return 0;
}