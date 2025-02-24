#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int x = 0, y = 0;
    string s;
    cin >> s;
    bool ok = false;
    for (char c : s)
    {
      switch (c)
      {
      case 'R':
        x++;
        break;
      case 'L':
        x--;
        break;
      case 'U':
        y++;
        break;
      case 'D':
        y--;
        break;
      }
      if (x == 1 && y == 1)
      {
        cout << "YES" << endl;
        ok = true;
        break;
      }
    }
    if (!ok)
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}