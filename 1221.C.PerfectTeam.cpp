#include <iostream>
using namespace std;
#define ll long long
int main()
{
  ll t, x, y, z;
  ll cnt = 0, ans = 0;
  cin >> t;
  while (t--)
  {
    cin >> x >> y >> z;
    cnt = min(x, y);
    if (cnt <= z)
      ans = cnt;
    else
    {
      ans = (x + y + z) / 3;
      if (ans > cnt)
        ans = cnt;
    }
    cout << ans << endl;
  }
  return 0;
}