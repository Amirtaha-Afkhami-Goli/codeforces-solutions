#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int inp[3];
    char input;
    bool ok = false;
    for (int i = 0; i < 3; i++)
    {
      cin >> input;
      switch (input)
      {
      case 'a':
        inp[i] = 0;
        break;
      case 'b':
        inp[i] = 1;
        break;
      case 'c':
        inp[i] = 2;
        break;
      }
    }
    for (int i = 0; i < 3; i++)
    {
      if (inp[i] == i)
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