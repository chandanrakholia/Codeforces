#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    vector<int>v{1,3,5,7,9,11};
    cout<<lower_bound(v.begin(),v.end(),10)-v.begin();
    return 0;
}