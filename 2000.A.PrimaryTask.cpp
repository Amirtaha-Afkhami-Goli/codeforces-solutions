#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (s.size() > 3)
    {
      if (s[0] == '1' && s[1] == '0' && s[2] != '0')
      {
        cout << "Yes" << endl;
      }
      else
        cout << "No" << endl;
    }
    else if (s.size() == 3)
    {
      if (s[0] == '1' && s[1] == '0' && s[2] != '1' && s[2] != '0')
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
    else
      cout << "No" << endl;
  }
}