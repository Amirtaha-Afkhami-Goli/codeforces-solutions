#include <iostream>
using namespace std;
int main()
{
  int t, newYear = 24 * 60, h, m, cnt;
  cin >> t;
  while (t--)
  {
    cin >> h >> m;
    cnt = 60 * h + m;
    cout << newYear - cnt << endl;
  }
  return 0;
}