#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n - k; i++)
    {
        int x = 0;
        for (int j = i; j < i + k + 1; j++)
        {
            if (arr[j] < 2 * arr[j + 1])
            {
                x++;
            }
        }
        if (x == k)
        {
            count++;
        }
        // cout<<i;
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int a = 1; a <= t; a++)
    {
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        long long int in = 0;
        cin >> arr[0];
        for (int i = 1; i < n; i++)
        {
            long long int p;
            cin >> p;
            arr[i] = p;
            if (arr[i - 1] < p)
            {
                in++;
            }
        }
        if (in == n)
        {
            cout << k << endl;
        }
        else
        {

            long long int count = 0;
            for (int i = 0; i < n - k; i++)
            {
                int x = 0;
                for (int j = i; j < i + k; j++)
                {
                    if (arr[j] < 2 * arr[j + 1])
                    {
                        x++;
                    }
                }
                if (x == k)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}