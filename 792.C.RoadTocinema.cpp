#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define large 200005
ll n, k, s, t, c[large], v[large], g[large], mg, ans = 1e9 + 1, mv;
bool check(int a)
{
  if (a < mg)
  {
    return false;
  }
  int helperInFunc = 0;
  for (int i = 0; i < k; i++)
  {
    helperInFunc += max(g[i + 1], (3 * g[i + 1] - v));
  }
}