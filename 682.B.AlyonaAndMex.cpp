#include <bits/stdc++.h>
using namespace std;
int i, n, a[100005];
main()
{
  for (cin >> n; i++ < n;)
    cin >> a[i];
  sort(a + 1, a + n + 1);
  for (i = 0; i++ < n;)
  {
    if (a[i] > a[i - 1])
      a[i] = a[i - 1] + 1;
  }
  cout << a[n] + 1;
}