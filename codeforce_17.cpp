#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int t=(s.length());
    for (int i = 0; i < t-2; i=i+2){
    for (int i = 0; i < t-2; i=i+2)
    {
        if (s[i]>s[i+2])
        {
            int temp=s[i];
            s[i]=s[i+2];
            s[i+2]=temp;
        }
        
    }
    }
    cout<<s;
    return 0;
}