#include<iostream>
using namespace std;

int main(){
    int t;
    int ai,bi;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int a,b;
        cin>>a>>b;
        if (a==0 && (b%2==0 || b%2!=0))
        {
            cout<<1<<endl;
        }
        else if ((a%2==0 || a%2!=0) && (b%2==0 || b%2!=0))
        {
            cout<<a+2*b+1<<endl;
        }

        
    }
    return 0;
}