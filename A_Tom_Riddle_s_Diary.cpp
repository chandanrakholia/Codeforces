#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n)
	{
		map <string,int> m;

		m.clear();
		string  str;

		for(int i=1;i<=n;i++)
		{
			cin>>str;

			if(m[str]==0){
				cout<<"NO"<<endl;
				m[str]=1;
			}
			else cout<<"YES"<<endl;
		}
	}
	return 0;
} 