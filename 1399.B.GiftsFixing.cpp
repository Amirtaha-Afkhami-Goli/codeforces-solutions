#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll a[n], b[n];
    ll aMin = 1e18, bMin = 1e18;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (aMin > a[i])
      {
        aMin = a[i];
      }
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      if (bMin > b[i])
      {
        bMin = b[i];
      }
    }
    ll c = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > aMin && b[i] > bMin)
      {
        m = min(a[i], b[i]);
        a[i] = a[i] - (m - min(aMin, bMin));
        b[i] = b[i] - (m - min(aMin, bMin));
        c += (m - min(aMin, bMin));
        if (a[i] > aMin)
        {
          c += a[i] - aMin;
          a[i] -= a[i] - aMin;
        }
        else if (b[i] > bMin)
        {
          c += b[i] - bMin;
          b[i] -= b[i] - bMin;
        }
      }
      else if (a[i] == aMin && b[i] > bMin)
      {
        c += b[i] - bMin;
        b[i] -= b[i] - bMin;
      }
      else if (a[i] > aMin && b[i] == bMin)
      {
        c += a[i] - aMin;
        a[i] -= a[i] - aMin;
      }
    }
    cout << c << endl;
  }
  return 0;
}