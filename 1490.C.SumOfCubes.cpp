#include <iostream>
using namespace std;
#define ll long long
bool isAcceptable(ll x)
{
  ll left = 1, right = 10000;
  while (left <= right)
  {
    ll mid = (left + right) / 2;
    ll testCube = mid * mid * mid;
    if (testCube == x)
    {
      return true;
    }
    else if (testCube < x)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }
  return false;
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll x;
    cin >> x;
    bool isTrue = false;
    for (ll i = 1; i * i * i <= x; i++)
    {
      if (isAcceptable(x - i * i * i))
      {
        isTrue = true;
        break;
      }
    }
    cout << (isTrue ? "YES" : "NO") << endl;
  }
}