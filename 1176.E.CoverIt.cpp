#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mxn = 1e5 + 19;
ll n, m, cnto, cnte;
vector<ll> adj[mxn];
vector<ll> bfsa;
vector<ll> height;
bool mark[mxn];
void bfs(int v)
{
  cnto = 0;
  cnte = 0;
  int ptr = 0;
  bfsa.push_back(v);
  mark[v] = 1;
  height[v] = 0;
  while (ptr < int(bfsa.size()))
  {
    int x = bfsa[ptr++];
    for (int i = 0; i < int(adj[x].size()); i++)
    {
      if (!mark[adj[x][i]])
      {
        mark[adj[x][i]] = 1;
        bfsa.push_back(adj[x][i]);
        height[adj[x][i]] = height[x] + 1;
        if (height[adj[x][i]] % 2 == 0)
          cnte++;
        else
          cnto++;
      }
    }
  }
}
void input()
{
  cin >> n >> m;
  height.resize(n);
  for (int i = 0; i < m; i++)
  {
    int v, u;
    cin >> v >> u;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }
}
int main()
{
  int t, m, n;
  cin >> t;
  while (t--)
  {
    input();
    bfs(1);
    if (cnte > cnto)
      cout << cnte << endl;
    else
      cout << cnto << endl;
    for (ll i = 1; i < height.size(); i++)
      if (cnte > cnto)
      {
        if (height[i] % 2 == 0)
          cout << i << " ";
      }
      else
      {
        if (height[i] % 2 == 1)
          cout << i << " ";
      }
    cout << endl;
  }
  return 0;
}