/* #include <bits/stdc++.h>
using namespace std;
#define ll long long
bool mark[INT_MAX];
ll graph[(int)3e4][1];
void dfs(int s)
{
  mark[s] = true;
  for (ll i = 0; i < (int)3e4; i++)
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
  for (ll i = 0; i < n - 1; i++)
  {
    ll inp;
    cin >> inp;
    graph[i][0] = i + inp - 1;
  }
  dfs(1);
  cout << (mark[t] ? "YES" : "NO") << endl;
  return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
  int n, t;
  cin >> n >> t;
  int ps[n], rd = 0;
  for(int i = 0; i < n; i++) cin >> ps[i];
  while(rd < t - 1) rd += ps[rd];
  cout << (rd == t - 1 ? "YES" : "NO") << endl;
  return 0;
}