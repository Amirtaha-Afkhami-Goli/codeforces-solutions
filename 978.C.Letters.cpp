#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll n, m, i;
  cin >> n >> m;
  ll a[n], b;
  for (i = 0; i < n; ++i)
    cin >> a[i];
  ll p = 0, t = 0, sum = 0;
  for (i = 0; i < m; ++i)
  {
    cin >> b;
    while (b > sum)
    {
      t = sum;
      sum += a[p++];
    }
    cout << p << " " << b - t << "\n";
  }
  return 0;
}