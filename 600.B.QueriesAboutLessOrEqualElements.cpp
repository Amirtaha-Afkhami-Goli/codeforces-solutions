#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
  ll m, n;
  cin >> m >> n;
  ll a[m], b[n];
  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  sort(a, a + m);
  for (ll i = 0; i < n; i++)
  {
    cout << upper_bound(a, a + m, b[i]) - a << " ";
  }
  return 0;
}