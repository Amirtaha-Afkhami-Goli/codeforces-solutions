#include <bits/stdc++.h>
using namespace std;
int n, m, a[100020];
long long s;
int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    s += min(x, y);
    a[i] = min(2 * x, y) - min(x, y);
  }
  sort(a, a + n);
  for (int i = n - m; i < n; i++)
    s += a[i];
  cout << s;
  return 0;
}