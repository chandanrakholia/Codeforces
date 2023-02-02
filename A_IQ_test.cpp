#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    int even=0;
    int odd=0;
    int flago;
    int flage;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if (x%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }
    if (n-1==odd)
    {
        // flago=1;
        for (int i = 0; i < n; i++)
        {
            if (v[i]%2==0)
            {
                // cout<<i<<endl;
                flago=i;
                break;
            }
            
        }
        cout<<flago+1<<endl;
        
    }
    else if(n-1==even)
    {
        // flage=1;
        for (int i = 0; i < n; i++)
        {
            if (v[i]%2!=0)
            {
                // cout<<i<<endl;
                flage=i;
                break;
            }
            
        }
        cout<<flage+1<<endl;
        
    }
    
    
    return 0;
}