#include <iostream>
using namespace std;
int main()
{
  string s;
  bool capsLock = true;
  cin >> s;
  for (int i = 1; i < s.length(); i++)
  {
    if(islower(s[i]))
    {
      capsLock = false;
    }
  }
  if (capsLock)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (islower(s[i]))
      {
        s[i] = toupper(s[i]);
      }
      else
      {
        s[i] = tolower(s[i]);
      }
    }
  }
  cout << s << endl;
  return 0;
}