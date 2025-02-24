#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, q;
vector<int> Graph[INT_MAX];
int par[INT_MAX];
int get_par(int u)
{
  return (~par[u] ? par[u] = get_par(par[u]) : u);
}
void merge(int u, int v)
{
  u = get_par(u), v = get_par(v);
  if (u == v)
    return;
  par[u] = v;
}
void readInput()
{
  memset(par, -1, sizeof(par));
  cin >> n >> m >> q;
  while (q--)
  {
    int t;
    cin >> t;
    if (t == 1)
    {
      int a, b;
      cin >> a >> b;
      Graph[a].push_back(b);
      Graph[b].push_back(a);
      merge(a, b);
    }
  }
}
void getPath(){}
int main()
{
}