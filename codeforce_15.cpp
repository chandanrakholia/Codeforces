#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>m>>n;
    int x=m*n;
    if (x%2==0)
    {
        cout<<x/2;
    }
    else{
        cout<<int(x/2);
    }
    return 0;
}