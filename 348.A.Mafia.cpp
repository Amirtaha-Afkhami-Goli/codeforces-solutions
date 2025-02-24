#include <iostream>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin >> n;
  ll totalRounds = 0, minimumRounds = 0;
  for (ll i = 0; i < n; i++)
  {
    ll helper;
    cin >> helper;
    totalRounds += helper;
    if (helper > minimumRounds)
    {
      minimumRounds = helper;
    }
  }
  ll rounds = totalRounds / (n - 1);
  if (totalRounds % (n - 1) != 0)
  {
    rounds++;
  }
  if (rounds < minimumRounds)
  {
    rounds = minimumRounds;
  }
  cout << rounds;
  return 0;
}