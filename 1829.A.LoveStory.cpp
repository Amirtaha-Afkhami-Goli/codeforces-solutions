#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  string base = "codeforces";
  while (t--)
  {
    string s;
    cin >> s;
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
      if (s[i] != base[i])
      {
        counter++;
      }
    }
    cout << counter << endl;
  }
  return 0;
}