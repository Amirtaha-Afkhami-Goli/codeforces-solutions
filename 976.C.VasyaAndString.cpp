#include <bits/stdc++.h>
using namespace std;
int cnta, cntb, ans;
int main()
{
  int n, k;
  string s;
  cin >> n >> k >> s;
  int l = 0, r = -1;
  while (r < n - 1)
  {
    r++;
    if (s[r] == 'a')
    {
      cnta++;
    }
    else
    {
      cntb++;
    }
    if (cnta <= k || cntb <= k)
    {
      ans++;
    }
    else
    {
      if (s[l] == 'a')
      {
        cnta--;
      }
      else
      {
        cntb--;
      }
      l++;
    }
  }
  cout << ans << "\n";
  return 0;
}
