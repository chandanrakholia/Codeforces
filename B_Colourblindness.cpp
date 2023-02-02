#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int col;
    cin >> col;
    string row1, row2;
    cin >> row1 >> row2;
    for (int i = 0; i < col; i++)
    {
        if (row1[i] == 'G' || row1[i] == 'B')
        {
            row1[i] = '*';
        }
        if (row2[i] == 'G' || row2[i] == 'B')
        {
            row2[i] = '*';
        }
    }
    bool f=true;
    for (int i = 0; i < col; i++)
    {
        if (row1[i]!=row2[i])
        {
            f=false;
            break;
        }
        
    }
    if (f==false)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
    
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    // T=1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
