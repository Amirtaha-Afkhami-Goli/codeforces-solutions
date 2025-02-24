#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string input;
    cin >> input;
    int len = input.length();
    if (len % 2 == 0)
    {
      string firstPart = input.substr(0, len / 2);
      string secondPart = input.substr(len / 2, len - 1);
      if (firstPart == secondPart)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}