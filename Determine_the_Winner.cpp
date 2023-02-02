#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        int pa,pb,qa,qb;
        cin>>pa>>pb>>qa>>qb;
        if (max(pa,pb)>max(qa,qb))
        {
            cout<<'Q'<<endl;
        }
        else if (max(pa,pb)==max(qa,qb))
        {
            cout<<"TIE"<<endl;
        }
        else
        {
            cout<<'P'<<endl;
        }
        
        
        
    }
    
    return 0;
}