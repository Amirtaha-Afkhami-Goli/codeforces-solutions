#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll fence[200005];
ll paintCounter(ll leftSide, ll rightSide, ll lowest)
{
  if (leftSide >= rightSide)
  {
    return 0;
  }
  ll minimumIndex = leftSide;
  for (ll i = leftSide; i < rightSide; i++)
  {
    if (fence[i] < fence[minimumIndex])
    {
      minimumIndex = i;
    }
  }
  ll res = min(abs(leftSide - rightSide), (fence[minimumIndex] - lowest) + paintCounter(leftSide, minimumIndex, fence[minimumIndex]) + paintCounter(minimumIndex + 1, rightSide, fence[minimumIndex]));
  return res;
}
int main()
{
  ll n;
  cin >> n;
  for (ll i = 0; i < n; i++)
  {
    cin >> fence[i];
  }
  cout << paintCounter(0, n + 1, 0) << endl;
  return 0;
}