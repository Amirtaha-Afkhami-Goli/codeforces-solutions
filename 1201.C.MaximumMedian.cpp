// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// ll n, a[2000000], k;
// bool isMedian(ll x)
// {
//   ll helper = n / 2;
//   ll sum = 0;
//   for (ll i = helper; i < n; i++)
//   {
//     if (x - a[i] > 0)
//     {
//       sum += (x - a[i]);
//     }
//     if (sum > k)
//     {
//       return false;
//     }
//   }
//   if (sum <= k)
//   {
//     return true;
//   }
//   else
//   {
//     return false;
//   }
// }
// int main()
// {
//   ll m;
//   cin >> n >> k;
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> a[i];
//   }
//   sort(a, a + n);
//   ll l = 1, r = 1e9, mid;
//   while (l <= r)
//   {
//     mid = (l + r + 1) / 2;
//     if (isMedian(mid))
//     {
//       l = mid;
//     }
//     else
//     {
//       r = mid - 1;
//     }
//   }
//   cout << l;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll &x : v)
  {
    cin >> x;
  }
  sort(v.begin(), v.end());
  ll medium = n / 2;
  ll ans = v[medium];
  ll low = 0, high = 1e18 + 90;
  while (low <= high)
  {
    ll mid = low + ((high - low) >> 1);
    ll sum = 0;
    for (ll i = medium; i < n; i++)
    {
      if (v[i] <= mid)
      {
        sum += (mid - v[i]);
      }
      if (sum > k)
      {
        break;
      }
    }
    if (sum <= k)
    {
      ans = max(ans, mid);
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  cout << ans << endl;
  return 0;
}