#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visited,vector<int> &stack)
{
	stack[src] = true;
	if(!visited[src])
	{
		visited[src] = true;
		for(auto i : adj[src])
		{
			if(!visited[i] and iscycle(i,adj,visited,stack)){
				return true;
			}

			if(stack[i])
			{
				return true;
			}
		}
	}

	stack[src] = false;
	return false;
}


int main()
{
	int n,m; // n(vertices) , m(edges)
    cin>>n>>m;

    vector<vector<int>> adj(n);

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>v>>v;
        adj[u].push_back(v);
    }

    bool cycle=false;
    vector<int> stack(n,0);
    vector<bool> visited(n,0);

    for(int i=0;i<n;i++)
    {
    	if(!visited[i] and iscycle(i,adj,visited,stack))
    	{
    		cycle = true;
    	}
    }

    if(cycle)
    {
        cout<<"cycle is present"<<endl;
    }
    else
    {
        cout<<"cycle is not present"<<endl;
    }
}

/*
4 3
0 1
1 2
2 1
cycle is not present

4 2
0 1
2 3
cycle is not present
*/