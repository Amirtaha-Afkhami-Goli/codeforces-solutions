#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, sum = 0, ans = 0;
  cin >> n;
  int queue[n];
  for (int i = 0; i < n; i++)
  {
    cin >> queue[i];
  }
  sort(queue, queue + n);
  for (int i = 0; i < n; i++)
  {
    if (queue[i] >= sum)
    {
      ans++;
      sum += queue[i];
    }
  }
  cout << ans << endl;
  return 0;
}