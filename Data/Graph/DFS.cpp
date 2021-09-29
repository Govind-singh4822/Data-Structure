#include<bits/stdc++.h>
using namespace std;

const int N = 7;
bool vist[N];
vector<int> adj[N];

void dfs(int node)
{
    // preorder
    vist[node] = 1;
    cout<<node<<" ";

    //inorder
    vector<int> :: iterator it;
       for(it = adj[node].begin(); it!=adj[node].end();it++)
       {
           if(!vist[*it]);
           else
           {
               dfs(*it);
           }
       }

    // postorder 

}

int main()
{
    int n,m;  // Input no of node and edges.
    cin>>n>>m;

    for(int i=0;i<N;i++)
    {
        vist[i] = false;
    }

    int x,y;

    for(int i=0;i<N;i++)
    {
        cin>>x>>y;  // Inputing edges
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}