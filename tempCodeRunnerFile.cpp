#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int T = 0; T < t; T++)
    {
        char arr[8][8];
        int count[8];
        int c=0;
        int x=0;
        int y=0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>arr[i][j];
            }
            c=0;   
        }
        for (int k = 0; k < 8; k++)
        {
            c=0;
            for (int i = 0; i < 8; i++)
            {
                if (arr[k][i]=='#')
                {
                    c++;
                }
                
            }
            count[k]=c;
                 
        }
        for (int i = 0; i < 8-2; i++)
        {
            if (count[i]==2 and count[i+1]==1 and count[i+2]==2)
            {
                x=i+1+1;
                break;
            }
            
        }
        for (int i = 0; i < 8; i++)
        {
            if (arr[x-1][i]=='#')
            {
                y=i+1;
                break;
            }
            
        }
        cout<<x<<' '<<y<<endl;
        
          
    }
    
    return 0;
}