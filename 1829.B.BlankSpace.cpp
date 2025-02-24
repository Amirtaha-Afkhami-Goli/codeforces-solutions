#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int c = 0, ans = 0;
    while (n--)
    {
      int inp;
      cin >> inp;
      if (inp == 0)
        c++;
      else
      {
        ans = max(ans, c);
        c = 0;
      }
    }
    ans = max(ans, c);
    cout << ans << endl;
  }
  return 0;
}