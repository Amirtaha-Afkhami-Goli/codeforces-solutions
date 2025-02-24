#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin >> n;
  ll input[n], count[100000];
  for (ll i : count)
  {
    i = 0;
  }
  vector<ll> nums;
  for (int i = 0; i < n; i++)
  {
    cin >> input[i];
    count[input[i]]++;
    nums.push_back(input[i]);
  }
  sort(nums.begin(), nums.end());
  auto dup = unique(nums.begin(), nums.end());
  nums.erase(dup, nums.end());
  ll dp[nums.size()];
  for (ll i : dp)
  {
    i = 0;
  }
  dp[0] = nums[0] * count[nums[0]];
  dp[1] = max(nums[1] * count[nums[1]], dp[0]);
  for (int i = 2; i < nums.size(); i++)
  {
    dp[i] = max(dp[i - 1], dp[i - 2] + nums[i] * count[nums[i]]);
  }
  cout << dp[nums.size() - 1] << endl;
}