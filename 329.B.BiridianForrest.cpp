#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const ll mxn = 1e6 + 19;
vector<ll> adj[mxn];
vector<ll> bfsa;
ll height[mxn];
bool mark[mxn];
void bfs(ll v)
{
  ll ptr = 0;
  bfsa.push_back(v);
  mark[v] = 1;
  height[v] = 0;
  while (ptr < ll(bfsa.size()))
  {
    ll x = bfsa[ptr++];
    for (ll i = 0; i < ll(adj[x].size()); i++)
    {
      if (!mark[adj[x][i]])
      {
        mark[adj[x][i]] = 1;
        bfsa.push_back(adj[x][i]);
        height[adj[x][i]] = height[x] + 1;
      }
    }
  }
}
int main()
{
  ll r, c;
  cin >> r >> c;
  string forest[r];
  ll graphForest[r][c];
  ll vc = 2;
  for (ll i = 0; i < r; i++)
  {
    cin >> forest[i];
    for (ll j = 0; j < c; j++)
    {
      if (forest[i][j] != 'E' && forest[i][j] != 'S' && forest[i][j] != 'T')
      {
        graphForest[i][j] = vc;
        vc++;
      }
      else if (forest[i][j] == 'T')
      {
        graphForest[i][j] = -1;
      }
      else if (forest[i][j] == 'S')
      {
        graphForest[i][j] = 1;
      }
      else
      {
        graphForest[i][j] = 0;
      }
    }
  }
  for (ll i = 0; i < r; i++)
  {
    for (ll j = 0; j < c; j++)
    {
      if (graphForest[i][j] != -1)
      {
        if (0 < i && graphForest[i - 1][j] != -1)
        {
          adj[graphForest[i][j]].push_back(graphForest[i - 1][j]);
        }
        if (i < r - 1 && graphForest[i + 1][j] != -1)
        {
          adj[graphForest[i][j]].push_back(graphForest[i + 1][j]);
        }
        if (0 < j && graphForest[i][j - 1] != -1)
        {
          adj[graphForest[i][j]].push_back(graphForest[i][j - 1]);
        }
        if (j < c - 1 && graphForest[i][j + 1] != -1)
        {
          adj[graphForest[i][j]].push_back(graphForest[i][j + 1]);
        }
      }
    }
  }
  bfs(0);
  const ll d = height[1];
  ll ans = 0;
  /*
  for (ll i = 2; i < r * c; i++)
    if (height[i] <= d && height[i] != 0)
      for (ll j = 0; j < r; j++)
        for (ll k = 0; k < c; k++)
          if (graphForest[j][k] == i)
            if (forest[j][k] != '0')
              ans += forest[j][k] - '0';
  */
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      if (graphForest[i][j] > 1)
        if (height[graphForest[i][j]] <= d && height[graphForest[i][j]] != 0)
          ans += forest[i][j] - '0';
  cout << ans;
  return 0;
}