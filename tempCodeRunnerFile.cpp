#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool mark[INT_MAX];
vector<ll> graph[INT_MAX];
void dfs(int s)
{
  mark[s] = true;
  for (int i = 0; i < graph[s].size(); i++)
  {
    if (!mark[graph[s][i]])
    {
      dfs(graph[s][i]);
    }
  }
}
int main()
{
  ll n, t;
  cin >> n >> t;
  for (int i = 0; i < n - 1; i++)
  {
    ll inp;
    cin >> inp;
    graph[i].push_back(i + inp);
  }
  dfs(1);
  cout << (mark[t] ? "YES" : "NO") << endl;
  return 0;
}