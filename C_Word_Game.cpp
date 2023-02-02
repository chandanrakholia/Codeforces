#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    map<string, bool> mp1;
    map<string, bool> mp11;
    map<string, bool> mp111;
    map<string, bool> mp2;
    map<string, bool> mp22;
    map<string, bool> mp222;
    map<string, bool> mp3;
    map<string, bool> mp33;
    map<string, bool> mp333;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        mp1[x] = true;
        mp11[x] = true;
        mp111[x] = true;
    }
    for (int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        mp2[p] = true;
        mp22[p] = true;
        mp22[p] = true;
    }
    for (int i = 0; i < n; i++)
    {
        string q;
        cin >> q;
        mp3[q] = true;
        mp33[q] = true;
        mp333[q] = true;
    }
    // cout<<mp1.size()<<' '<<mp2.size()<<' '<<mp3.size()<<endl;

    map<string, bool>::iterator it1, it2, it3;
    int counta = 0;
    int countb = 0;
    int countc = 0;
    for (it1 = mp1.begin(); it1 != mp1.end(); ++it1)
    {
        if (mp2[it1->first] && !mp3[it1->first])
        {
            counta = counta + 1;
        }
        else if (!mp2[it1->first] && mp3[it1->first])
        {
            counta = counta + 1;
        }
        else if (!mp2[it1->first] && !mp3[it1->first])
        {
            counta = counta + 3;
        }
    }
    for (it2 = mp22.begin(); it2 != mp22.end(); ++it2)
    {
        if (mp11[it2->first] && !mp33[it2->first])
        {
            countb = countb + 1;
        }
        else if (!mp11[it2->first] && mp33[it2->first])
        {
            countb = countb + 1;
        }
        else if (!mp11[it2->first] && !mp33[it2->first])
        {
            countb = countb + 3;
        }
        // cout<<it->first<<endl;
        // cout<<mp2.size();
    }
    for (it2 = mp333.begin(); it2 != mp333.end(); ++it2)
    {
        if (mp111[it2->first] && !mp222[it2->first])
        {
            countc = countc + 1;
        }
        else if (!mp111[it2->first] && mp222[it2->first])
        {
            countc = countc + 1;
        }
        else if (!mp111[it2->first] && !mp222[it2->first])
        {
            countc = countc + 3;
        }
        // cout<<it->first<<endl;
        // cout<<mp2.size();
    }
    // for (it3 = mp333.begin(); it3 != mp333.end(); ++it3)
    // {
    //     if (mp111[it3->first] && !mp222[it3->first] )
    //     {
    //         countc = countc + 1;
    //     }
    //     else if (!mp111[it3->first]  && mp222[it3->first])
    //     {
    //         countc = countc + 1;
    //     }
    //     else if(!mp222[it3->first]  && !mp111[it3->first]){
    //         countc=countc+3;
    //     }
    //     // cout<<'a';
    // }
    // cout<<mp1.size()<<' '<<mp2.size()<<' '<<mp3.size()<<endl;
    cout << counta << ' ' << countb << ' ' << countc << endl;
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
