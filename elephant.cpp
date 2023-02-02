#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while (n>0)
    {
        if (n>=5)
        {
            n=n-5;
            count=count+1;
        }
        else
        {
            n=0;
            count=count+1;
        }
    }
        cout<<count;
    
    return 0;
}