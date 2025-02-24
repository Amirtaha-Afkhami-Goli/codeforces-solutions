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
    ll n;
    cin >> n;
    ll a[n], b[n], gameStatus[n];
    ll answer = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
      answer += a[i] - 1;
    }
    for (ll i = 0; i < n; i++)
    {
      cin >> b[i];
      gameStatus[i] = a[i] + b[i] - 2;
    }
    sort(gameStatus, gameStatus + n);
    for (ll i = n - 2; i >= 0; i -= 2)
    {
      answer -= gameStatus[i];
    }
    cout << answer << endl;
  }
  return 0;
}