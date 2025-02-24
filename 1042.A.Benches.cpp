#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int main()
{
  ll n, m, a, total = 0, mx = 0, kmx, kmn;
  cin >> n >> m;
  for (ll i = 0; i < n; i++)
  {
    cin >> a;
    total += a;
    if (a > mx)
      mx = a;
  }
  kmx = mx + m;
  total -= mx;
  if (total + m <= mx * (n - 1))
    kmn = mx;
  else
  {
    m = (total + m) - (mx * (n - 1));
    kmn = mx + ceil((double)m / n);
  }
  cout << kmn << " " << kmx << endl;
  return 0;
}