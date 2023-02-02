#include<iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int l=s.length();
    int count=0;
    for (int i = 0; i < l-1; i++)
    {
        if (s[i]==s[i+1])
        {
            count=count+1;
        }
        
    }
    cout<<count;

    return 0;
}