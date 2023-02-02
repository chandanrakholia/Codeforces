#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        int flag=1;
        int flag1=1;
        for (int j = 1; j < n; j++)
        {
            if(arr[j]==0)
            flag=0;
        }
        if(n==1){
            cout<<0<<endl;
        }
        else{
            int count=0;
            for (int j = n-1; j > 0; j--)
            {
                if (arr[j-1]>=arr[j])
                {
                    while(arr[j-1]>=arr[j] and  arr[j]!=0)
                    {   
                        arr[j-1]=arr[j-1]/2;
                        count++;
                        if (arr[j-1]==0 and j-1!=0)
                        {
                            flag1=0;
                        }
                                                        
                    }
                    
                }       
            }
            if (flag==0 or flag1==0)
            {
                cout<<-1<<endl;
            }
            else{
            cout<<count<<endl;
            }
        }
    }
    
    return 0;
}