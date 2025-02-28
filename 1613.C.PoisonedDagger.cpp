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
    ll n, h;
    cin >> n >> h;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    ll k = 0, low = 1, high = 1e9;
    while (low <= high)
    {
      ll mid = (low + high) / 2;
      ll hitCounter = 0;
      for (int i = 0; i < n; i++)
      {
        hitCounter += min((arr[i] - arr[i - 1]), k);
      }
      if (hitCounter + k >= h)
      {
        k = mid;
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }
    cout << k << endl;
  }
  return 0;
}

/*

 ~ Author    : @tridib_2003


#pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;

#define int long long
#define ull unsigned long long
#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define eb emplace_back
#define mp(a, b) make_pair(a, b)
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mk(arr, n, type) type *arr = new type[n];
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b) for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a) for (auto &(i) : (a))
#define printall(a)     \
  for (auto &(i) : (a)) \
  cout << i << ' '
#define print(a) cout << a << '\n'
#define rsort(a) sort((a).rbegin(), (a).rend())
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c).size()
#define pqmx priority_queue<int>
#define pqmn priority_queue<int, vector<int>, greater<int>>
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define lwr_b(c, a) lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a) upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define FIO                    \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

int n, h;
vi arr;

bool isPossible(int k)
{
  int hitCount = 0;

  FOR(i, 1, n)
  {
    hitCount += min((arr[i] - arr[i - 1]), k);
  }

  return ((hitCount + k) >= h);
}

void solve()
{
  cin >> n >> h;

  arr.clear();
  arr.resize(n);

  FOR(i, 0, n)
  {
    cin >> arr[i];
  }

  int k = 0, lo = 1, hi = 1e18;

  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;

    if (isPossible(mid))
    {
      k = mid;
      hi = mid - 1;
    }
    else
    {
      lo = mid + 1;
    }
  }

  cout << k;
}

int32_t main()
{

  FIO;

  int tc = 1;
  cin >> tc;
  while (tc--)
  {
    solve();
    cout << '\n';
  }

  return 0;
}
*/