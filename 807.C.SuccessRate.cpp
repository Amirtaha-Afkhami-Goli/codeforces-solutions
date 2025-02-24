#include <bits/stdc++.h>
using namespace std;
int answer()
{
  int x, y, p, q;
  cin >> x >> y >> p >> q;
  if (p == q)
  {
    if (x == y)
    {
      cout << 0 << '\n';
    }
    else
    {
      cout << -1 << '\n';
    }
    return 0;
  }
  else if (p == 0)
  {
    if (x == 0)
    {
      cout << 0 << '\n';
    }
    else
    {
      cout << -1 << '\n';
    }
    return 0;
  }
  long long a = (x + p - 1) / p;
  long long b = (y - x + q - p - 1) / (q - p);
  cout << q * 1LL * max(a, b) - y << '\n';
  return 0;
}
int main()
{
  unsigned long long t;
  cin >> t;
  while (t--)
  {
    answer();
  }
  return 0;
}