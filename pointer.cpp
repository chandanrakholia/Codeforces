#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b=&a;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    int**p=&b;
    cout<<&b<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<**p<<endl;
    return 0;
}