#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
  ll n, l, maxDistance = -1, counter = 1, inp, helper;
  cin >> n >> l;
  ll lanterns[n + 2];
  for (int i = 0; i < n; i++)
  {
    cin >> inp;
    lanterns[counter] = inp;
    counter++;
  }
  lanterns[0] = 0;
  lanterns[n + 1] = l;
  helper = lanterns[1] - lanterns[0];
  maxDistance = helper;
  for (ll i = 1; i < n + 1; i++)
  {
    helper = lanterns[i + 1] - lanterns[i];
    maxDistance = max(maxDistance, helper);
  }
  return 0;
}