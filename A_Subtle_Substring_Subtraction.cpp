#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
for (int i = 0; i < t; i++)
{
    string s;
    cin>>s;
    if(s.length()==1)
    cout<<"Bob "<<(int)s[0]-96<<endl;
    else if((s.length())%2==0){
        int sum=0;
        for (int j = 0; j < s.length(); j++)
        {
            sum=sum+((int)s[j]-96);
        }
        cout<<"Alice "<<sum<<endl;
    }
    else{
        if(s[0]>=s[s.length()-1]){
            int sum_Alice=0;
            int sum_Bob=((int)s[s.length()-1]-96);
            for (int j = 0; j < (s.length()-1); j++)
            {
                sum_Alice=sum_Alice+((int)s[j]-96);
            }
            cout<<"Alice "<<sum_Alice-sum_Bob<<endl;
        }
        else{
            int sum_Alice=0;
            int sum_Bob=((int)s[0]-96);
            for (int j = 1; j < s.length(); j++)
            {
                sum_Alice=sum_Alice+((int)s[j]-96);
            }
            cout<<"Alice "<<sum_Alice-sum_Bob<<endl;          
        }
    }
}

    return 0;
}