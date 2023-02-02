#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int sum(int arr[4]){
    int s=0;
    for (int i = 0; i < 4; i++)
    {
        s=s+arr[i];
    }
    return s;
}
int print(int arr[4]){
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    return arr[3];
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[4]={1,1,1,1};
        if (gcd(arr[0],arr[1])==lcm(arr[2],arr[3]))
        cout<<print(arr);
        else{
            arr[0]=arr[0]+(n-4);
            if (gcd(arr[0],arr[1])==lcm(arr[2],arr[3]))
            cout<<print(arr);     
        }
    }
    return 0;
}