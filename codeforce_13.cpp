#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x=s[0];
    // cout<<x<<endl;
    if (x>=97 && x<=122)
    {
        int y=x-32;
        s[0]=(char)y;
        cout<<s[0];
    }
    else{
        cout<<s[0];
    }
    for (int i = 1; i < s.length(); i++)
    {
        cout<<s[i];
    }
    
    return 0;
}