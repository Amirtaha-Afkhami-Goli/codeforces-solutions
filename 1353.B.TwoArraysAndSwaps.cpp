#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, cnt = 0;
    cin >> n >> k;
    int nums1[n], nums2[n], helper;
    for (int i = 0; i < n; i++)
    {
      cin >> nums1[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> nums2[i];
    }
    while (cnt < k)
    {
      sort(nums1, nums1 + n);
      sort(nums2, nums2 + n);
      if (nums1[0] < nums2[n - 1])
      {
        helper = nums1[0];
        nums1[0] = nums2[n - 1];
        nums2[n - 1] = helper;
      }
      cnt++;
    }
    long long answer = 0;
    for (int i : nums1)
    {
      answer += i;
    }
    cout << answer << endl;
  }
  return 0;
}