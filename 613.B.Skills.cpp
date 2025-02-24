#include <algorithm>
#include <iostream>
using namespace std;
long long a, b, c, d, e, f[100100], g[100100], p[100100], ans = -1, h1, h2;
bool cmp(long long x, long long y)
{
  return f[x] < f[y];
}
int check(long long i, long long j)
{
  long long l = 0, r = j + 1;
  while (l + 1 < r)
  {
    int mid = (l + r + 1) >> 1;
    if (f[p[mid]] < i)
      l = mid;
    else
      r = mid;
  }
  return l;
}
int main()
{
  cin >> a >> b >> c >> d >> e;
  for (int x = 1; x <= a; x++)
    cin >> f[x], p[x] = x;
  sort(p + 1, p + a + 1, cmp);
  for (int x = 1; x <= a; x++)
    g[x] = g[x - 1] + f[p[x]];
  e += g[a];
  for (int x = 1; x <= a + 1; x++)
  {
    if (b * (a - x + 1) + g[x - 1] > e)
      continue;
    if (x == 1)
      ans = c * a + d * b, h1 = 1;
    if (x == 1)
      break;
    long long l = f[p[1]], r = b + 1;
    while (l + 1 < r)
    {
      long long mid = (l + r) >> 1, m = check(mid, x - 1);
      if (b * (a - x + 1) + mid * m + g[x - 1] - g[m] <= e)
        l = mid;
      else
        r = mid;
    }
    if (ans < c * (a - x + 1) + l * d)
      ans = c * (a - x + 1) + l * d, h1 = x, h2 = l;
  }
  cout << ans << '\n';
  for (int x = 1; x < h1; x++)
    if (f[p[x]] < h2)
      f[p[x]] = h2;
  for (int x = h1; x <= a; x++)
    f[p[x]] = b;
  for (int x = 1; x <= a; x++)
    cout << f[x] << ' ';
}