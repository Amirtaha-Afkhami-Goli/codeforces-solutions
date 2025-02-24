#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int main()
{
  ll i, j, k;
  ll n, x, m;
  cin >> n >> k;
  m = pow(2, n - 1);
  while (m != k)
  {
    if (k > m)
    {
      j = k - m;
      k = m - j;
    }
    n--;
    m = pow(2, n - 1);
  }
  cout << n;
  return 0;
}