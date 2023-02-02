#include<bits/stdc++.h>
using namespace std;
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}
int gcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int phi(int n){
    int count=0;
    for (int i = 1; i < n; i++)
    {
        if(gcd(i,n)==1){
            count++;
        }
    }
    return count;
    
}
int main(){
    int n;cin>>n;
    cout<<phi(n)<<endl;
    return 0;
}