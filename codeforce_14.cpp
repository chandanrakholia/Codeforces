#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int sum=0;
    int sum2=0;
    int t=s1.length();
    int t2=s2.length();
    for (int i = 0; i < t; i++)
    {
        int x=s1[i];
        if (x>=65 && x<=95)
        {
            sum=sum+(x+32);
        }
        else{
            sum=sum+x;
        }  
    }
        for (int j = 0; j < t2; j++)
    {
        int x2=s2[j];
        if (x2>=65 && x2<=95)
        {
            sum2=sum2+(x2+32);
        }
        else{
            sum2=sum2+x2;
        }  
    }

    if (sum<sum2)
    {
        cout<<"-1"<<endl;
    }
    else if (sum>sum2)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}