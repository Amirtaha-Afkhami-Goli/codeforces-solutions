#include <bits/stdc++.h>
using namespace std;
int n, m, k, ans = 0, b[2000];
string s;
int main()
{
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++)
  {
    int res = 0;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
      if (s[j] == '.')
      {
        res++;
        b[j]++;
      }
      else
      {
        res = 0;
        b[j] = 0;
      }
      if (res >= k)
        ans++;
      if (k > 1 && b[j] >= k)
        ans++;
    }
  }
  cout << ans;
}