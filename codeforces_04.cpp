#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long n,B,x,y;
        cin>>n>>B>>x>>y;
        long long arr[n+1]={};
        arr[0]=0;
        long long a=0;
        for (int j = 1; j < n+1 ; j++)
        {
            a=a+x;
            if (a<=B)
            {
                arr[j]=a;
            }
            else{
                a=a-x;
                a=a-y;
                arr[j]=a;
            }

        }
            long long sum=0;
            for (int k = 0; k < n+1; k++)
            {
                sum=sum+arr[k];
            }
            cout<<sum<<endl;
    }
    return 0;
}