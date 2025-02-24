#include <bits/stdc++.h>
using namespace std;
int n, i, a[100001], x[100001], y, f, l;
int main()
{
  cin >> n;
  for (; i < n; x[i] = a[i], i++)
    cin >> a[i];
  sort(a, a + n);
  for (i = 0; i < n; i++)
  {
    if (a[i] != x[i])
    {
      l = i;
      y++;
      if (y == 1)
        f = i;
    }
  }
  reverse(x + f, x + l + 1);
  for (i = f; i <= l; i++)
  {
    if (a[i] != x[i])
    {
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl
       << f + 1 << " " << l + 1 << endl;
  return 0;
}