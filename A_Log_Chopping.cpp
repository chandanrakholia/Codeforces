#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x= *max_element(arr, arr + n);
            if (x%2==0)
            {
                /* code */
            }
            
        }
        
    }
    
    return 0;
}