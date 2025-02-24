#include <iostream>
using namespace std;
int main()
{
  int testCases;
  bool find;
  cin >> testCases;
  while (testCases--)
  {
    char c;
    find = false;
    cin >> c;
    for (char a : "codeforces")
    {
      if (a == c)
      {
        cout << "YES" << endl;
        find = true;
        break;
      }
    }
    if (!find)
      cout << "NO" << endl;
  }
  return 0;
}