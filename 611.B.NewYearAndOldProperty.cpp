#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll a, b, ans = 0;
  cin >> a >> b;
  ll x = 2;
  for (int i = 2; i <= 60; i++)
  {
    ll y = 1;
    x = x << 1;
    for (int j = 0; j < i - 1; j++)
    {
      ll z = (x - 1) ^ (y << j);
      if (z <= b && z >= a)
        ans++;
    }
  }
  cout << ans;
  return 0;
}