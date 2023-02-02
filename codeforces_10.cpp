#include<iostream>
using namespace std;
string odd_even(int n){
    if (n>2)
    {
    
    if (n%2==0)
    return "YES";

    }
    return "NO";
    
}
int main(){
    int w;
    cin>>w;
    cout<<odd_even(w);
    return 0;
}