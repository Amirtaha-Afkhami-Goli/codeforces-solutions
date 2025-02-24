#include <iostream>
using namespace std;
int main()
{
  long t;
  cin >> t;
  while (t--)
  {
    long n;
    cin >> n;
    string s;
    cin >> s;
    bool seen[26] = {0};
    bool res = true;
    for (long p = 0; p < s.size(); p++)
    {
      if (p == 0 || s[p] != s[p - 1])
      {
        if (seen[s[p] - 'A'])
        {
          res = false;
          break;
        }
        else
        {
          seen[s[p] - 'A'] = true;
        }
      }
    }
    cout << (res ? "YES" : "NO") << endl;
  }
  return 0;
}