#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <=T; t++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int p;
            string s;
            cin >> p >> s;
            for (int j = 0; j < p; j++)
            {
                if(s[j]=='D'){
                    arr[i]++;
                }
                else{
                    arr[i]--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<0){
                while(arr[i]<0){
                    arr[i]+=10;
                }
            }
            cout<<arr[i]%10<<' ';
        }
        cout<<endl;
        
    }

    return 0;
}