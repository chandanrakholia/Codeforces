#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        int sum=0;
        if (x==1 and y==1)
        {
            sum=0;
        }
        else if ((x==2 and y==1)or (x==1 and y==2))
        {
            sum=1;
        }
        else if ((x!=1 and y==1)or (x==1 and y!=1))
        {
            sum=-1;
        }
        

        else if (x<y and x!=1 and y!=1)
        {
            if ((y-x)%2!=0)
            {
                sum=(x-1)*2+((y-x)*2)-1;
            }

            else
            sum=(x-1)*2+(y-x)*2;
        }
        else if (x>y and x!=1 and y!=1)
        {
            if ((x-y)%2!=0)
            {
                sum=(y-1)*2+((x-y)*2)-1;
            }
            else
            sum=(y-1)*2+(x-y)*2;
        }

        if (x==y)
        {
            sum=(x-1)*2;
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}