#include<bits/stdc++.h>
using namespace std;

const int N = 7;
bool vist[N];
vector<int> adj[N];
int main()
{
   for(int i=0;i<N;i++)
   {
       vist[i]=0;
   }

   int n,m;
   cin>>n>>m;  // Input no of node and edges.

   int x,y;
   for(int i=0;i<N;i++)
   {
       cin>>x>>y; // Inputing edges

       adj[x].push_back(y);
       adj[y].push_back(x);

   }
   queue<int> q;
   q.push(1);
   vist[1]=true;

   while(!q.empty())
   {
       int node = q.front();

       q.pop();
       cout<<node<<endl;

       vector<int> :: iterator it;
       for(it = adj[node].begin(); it!=adj[node].end();it++)
       {
           if(!vist[*it])
           {
               vist[*it]=1;
               q.push(*it);
           }
       }

   }
}

/*
Input -:  7 7
          1 2
          1 3
          2 4
          2 5
          2 6
          2 7
          7 3 
          
Output -: 1
          2
          3
          4
          5
          6
          7
*/