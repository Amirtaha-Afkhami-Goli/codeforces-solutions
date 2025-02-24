#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c, sum;
  int nums[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> nums[i];
  }
  int n = sizeof(nums) / sizeof(nums[0]);
  sort(nums, nums + n);
  sum = nums[3];
  a = sum - nums[2];
  b = sum - nums[1];
  c = sum - nums[0];
  cout << abs(a) << " " << abs(b) << " " << abs(c);
  return 0;
}