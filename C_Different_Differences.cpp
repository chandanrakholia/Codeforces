#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int
using namespace std;

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int arr1[] = {1, 2, 4, 7, 11, 16, 22, 29, 37};
        int arr2[] = {3, 5, 6, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 35, 36, 38, 39, 40};
        int k, n;
        cin >> k >> n;
        vector<int> v;
        int l = sizeof(arr2) / sizeof(arr2[0]);
        for (int i = 0; i < k; i++)
        {
            if (arr1[i] <= n)
                v.push_back(arr1[i]);
        }
        if (v[v.size() - 1] == n)
        {
            int p = 0;
            for (int i = 0; i < l; i++)
            {
                if (arr2[i] == n - 1)
                {
                    p = i;
                    break;
                }
            }
            int j = 0;
            int q = v.size();
            while (j < k - q)
            {
                v.push_back(arr2[p]);
                p--;
                j++;
            }
        }
        else
        {
            int p = 0;
            for (int i = 0; i < l; i++)
            {
                if (arr2[i] == n)
                {
                    p = i;
                    break;
                }
                if (arr1[i] <= n)
                    v.push_back(arr1[i]);
            }
            p--;
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
return 0;
}