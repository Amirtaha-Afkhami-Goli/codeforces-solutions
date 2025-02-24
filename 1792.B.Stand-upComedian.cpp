#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (a1 == 0)
    {
      cout << 1 << endl;
    }
    else
    {
      ll answer = a1 + (min(a2, a3) * 2) + min(a1 + 1, abs(a2 - a3) + a4);
      cout << answer << endl;
    }
  }
  return 0;
}