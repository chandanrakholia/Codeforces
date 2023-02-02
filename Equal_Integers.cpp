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
        int x,y;
        cin>>x>>y;
        int count=0;
        if (x<y)
        {
            while (x<=y)
            {
                if (x==y)
                {
                    break;
                }
                
                x=x+1;
                count++;

            }
            cout<<count<<endl;
        }
        else if (x==y)
        {
            cout<<0<<endl;
        }
        else
        {
            if (x%2!=0 and y%2!=0)
            {
                while (y<=x)
                {
                    if(x==y){
                        break;
                    }
                    y=y+2;
                    count++;
                }
                cout<<count<<endl;
            }
            else if (x%2==0 and y%2==0)
            {
                while(y<=x){
                    if (x==y)
                    {
                        break;
                    }
                    y=y+2;
                    count++;
                }
                cout<<count<<endl;
            }
            else
            {
                x=x+1;
                while(y<=x){
                    if (x==y)
                    {
                        break;
                    }
                    y=y+2;
                    count++;
                }
                cout<<count+1<<endl;

            }
            
            
            
        }
        
        
        
    }
    
    return 0;
}