// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        for (int j = 0; j < n-1; j++)
        {
            string s1=arr[j];
            string s2=arr[j+1];
            if (((int)s1[1]-(int)s2[0])>0)
            {
                /* code */
            }
            
        }
        
        
    }
    
    return 0;
}