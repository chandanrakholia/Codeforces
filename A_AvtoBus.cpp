#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin>>n;
        if (n%2!=0 or n<4)
        {
            cout<<-1<<endl;
        }
        else{
            long long min;
            min=(n/6)+(n%6)/4;
            long long x1,y1;
            x1=n/6;
            y1=(n%6)/4;
            long long max=(n/4)+(n%4)/6;
            long long x2,y2;
            x2=n/4;
            y2=(n%4)/6;
            if (n==(6*x1)+(4*y1) and n==(4*x2)+(6*y2))
            {
                
            cout<<min<<' '<<max<<endl;;
            }

            else{
                cout<<-1<<endl;
            }
        }
    }
    
    return 0;
}