#include <bits/stdc++. h>;
#include<iostream>;
using namespace std;
vector<int> ar[100001];
int vis[100001];
void DFS(int v)
{
  vis[v]=1;
  cout<<v<<" ";
  for(int child:ar[v])
  {
    if(!vis[child])
      DFS(child);
  }
}
int main()
{
  int n,m,a,b;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    cin>>a>>b;
    ar[a].push_back(b);
    ar[b].push_back(a);
  }
  int cc=0;
  for(int i=0;i<n;i++)
  {
    if(!vis[i])
    {
      DFS(i);
      cc++;
    }
  }
}
