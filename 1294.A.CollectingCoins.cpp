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
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll coins[3] = {a, b, c};
    sort(coins, coins + 3);
    n = n - (coins[2] - coins[1]) - (coins[2] - coins[0]);
    if (n % 3 == 0 && n >= 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}