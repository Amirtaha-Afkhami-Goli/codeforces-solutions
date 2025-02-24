#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
  ll t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll athlets[n], minimum = 10e9;
    for (ll i = 0; i < n; i++)
    {
      cin >> athlets[i];
    }
    sort(athlets, athlets + n);
    for (ll i = 0; i < n - 1; i++)
    {
      minimum = min(athlets[i + 1] - athlets[i], minimum);
    }
    cout << minimum << endl;
  }
  return 0;
}