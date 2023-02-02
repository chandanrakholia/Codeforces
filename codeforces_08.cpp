#include<iostream>
using namespace std;
int sum_arr(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum; 
}
int main(){
    int t;
    int n;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        
    
    cin>>n;
    int arr[n]={};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    float x=sum_arr(arr,n);
    float mean=x/n;
    if (x/n==0)
    {cout<<0<<endl;}
    else if (x/n<0)
    {cout<<1<<endl;}
    else{
        cout<<sum_arr(arr,n)-n<<endl;
    }
    }
    return 0;
}