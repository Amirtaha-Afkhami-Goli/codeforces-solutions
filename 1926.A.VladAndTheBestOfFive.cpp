#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int ca = 0, cb = 0;
    string inp;
    cin >> inp;
    for (char c : inp)
    {
      if (c == 'B') cb++;
      else ca++;
    }
    cout << (ca > cb ? 'A' : 'B') << endl;
  }
  return 0;
}