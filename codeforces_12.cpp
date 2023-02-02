#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n]={};
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]>k)
        {
            sum=sum+1;
        }
    }
    cout<<sum;
    return 0;
}