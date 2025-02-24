#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int lengthOfLIS(int arr[], int len)
{
  vector<int> ans;
  ans.push_back(arr[0]);
  for (int i = 1; i < len; i++)
  {
    if (arr[i] > ans.back())
    {
      ans.push_back(arr[i]);
    }
    else
    {
      int low = lower_bound(ans.begin(), ans.end(), arr[i]) - ans.begin();
      ans[low] = arr[i];
    }
  }
  return ans.size();
}
int main()
{
  int n;
  cin >> n;
  int top[n], bottom[n], arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> top[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> bottom[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)

    {
      if (top[i] == bottom[j])
      {
        arr[i] = j + 1;
        break;
      }
    }
  }
  reverseArray(arr, 0, n - 1);
  cout << lengthOfLIS(arr, n) << endl;
  return 0;
}