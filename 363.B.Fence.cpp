#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
  ll n, k, helper, answer = 0;
  ll minimum = 1e16;
  cin >> n >> k;
  ll fence[n], cases[n];
  for (int i = 0; i < n; i++)
  {
    cin >> fence[i];
    if (i == 0)
    {
      cases[0] = fence[0];
    }
    else
    {
      cases[i] = cases[i - 1] + fence[i];
    }
  }
  for (int i = 0; i < n - k + 1; i++)
  {
    if (i == 0)
    {
      helper = cases[i + k - 1];
    }
    else
    {
      helper = cases[i + k - 1] - cases[i - 1];
    }
    if (helper < 0)
    {
      helper = abs(helper);
    }
    if (helper < minimum)
    {
      minimum = helper;
      answer = i;
    }
  }
  answer++;
  cout << answer;
  return 0;
}