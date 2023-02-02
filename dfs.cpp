#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    /*Take action on vertex after entering 
    the vertex*/
    vis[vertex]=true;
    for (int child : g[vertex])
    {
        /*Take action on child before entering
        the child.*/
        dfs(child);
        /*Take action on child after exiting
        child node*/
    }
    /*Take action on vertex before exiting 
    vertex.*/
}

int main(){
    int node,edge;
    cin>>node>>edge;
    for (int i = 0; i < edge; i++)
    {
        int v1,v2;cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    return 0;
}