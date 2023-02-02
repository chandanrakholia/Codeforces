#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define endl           "\n"
#define double         long double
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int modInverse(int a, int m)
{
    int m0 = m;int y = 0, x = 1;
    if (m == 1) return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += m0;
    return x;
}
int gcd(int a, int b){if(b==0){return a;}else{return gcd(b,a%b);}}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

void solve() {
    int col;cin>>col;
    char arr[2][col];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int firstcolpos=-1;
    for (int i = 0; i < col; i++)
    {
        if(arr[0][i]=='B' && arr[1][i]=='B'){
            continue;
        }
        else if(arr[0][i]=='B' || arr[1][i]=='B'){
            firstcolpos=i;
            break;
        }
    }
    if(firstcolpos==-1){
        cout<<"YES"<<endl;
    }
    else{
        int rowpos;
        if(arr[0][firstcolpos]=='B'){
            rowpos=0;
        }
        else{rowpos=1;}
        string ans="YES";
        int curr_row=rowpos;
        for (int i = firstcolpos; i < col-1; i++)
        {
            int nextcol_B=0;
            if(arr[0][i+1]=='B'){nextcol_B++;}
            if(arr[1][i+1]=='B'){nextcol_B++;}
            if(nextcol_B==1 && arr[curr_row][i+1]!='B'){
                ans="NO";
                break;
            }
            else if(nextcol_B==1){
                continue;
            }
            else{
                // nextcol_B==2  TRUE
                curr_row=abs(curr_row-1);
            }
        }
        cout<<ans<<endl;
    }
    
    
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}