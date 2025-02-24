#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll m, n, t, d, i, j, k, x, y, z, l, q, r;
  ll cnt = 0, ans = 0;
  cin >> n;
  ll a[n], b[n], c[n];
  for (int i = 0; i < n - 1; i++)
    cin >> a[i];
  for (int i = 0; i < n - 1; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    for (int j = 0; j < n - 1; j++)
    {
      if (j < i)
        c[i] += a[j];
      else
        c[i] += b[j];
    }
  }
  sort(c, c + n);

  cout << c[0] + c[1];

  return 0;
}