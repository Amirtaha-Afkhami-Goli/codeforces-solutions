#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int dis[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> dis[i][j];
  long long q[n], ans[n];
  bool mark[n];
  for (int i = 0; i < n; i++)
    mark[i] = false;
  for (int i = 0; i < n; i++)
  {
    cin >> q[i];
    q[i]--;
  }
  for (int i = n - 1; i > -1; i--)
  {
    long long result = 0;
    int center = q[i];
    mark[center] = true;
    for (int u = 0; u < n; u++)
    {
      for (int v = 0; v < n; v++)
      {
        dis[u][v] = min(dis[u][v], dis[u][center] + dis[center][v]);
        if (mark[u] && mark[v])
          result += dis[u][v];
      }
    }
    ans[i] = result;
  }
  for (long long i : ans)
  {
    cout << i << " ";
  }
  return 0;
}