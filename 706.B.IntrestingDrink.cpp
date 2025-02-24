#include <iostream> 
#include <algorithm>
using namespace std;
int main()
{
  int m, n, k, ans;
  cin >> n;
  int status[n];
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> status[i];
  }
  cin >> m;
  sort(status, status + n);
  while (m--)
  {
    cin >> k;
    ans = upper_bound(status, status + n, k) - status;
    cout << ans << endl;
  }
  return 0;
}