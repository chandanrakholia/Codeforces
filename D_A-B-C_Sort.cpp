#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i > 0; i = i - 2)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
    }
    int f = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}