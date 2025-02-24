#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  string situation;
  cin >> situation;
  bool isDangerous = false;
  int repeatCount = 0;
  for (int i = 0; i < situation.size(); i++)
  {
    for (int j = i + 1; j < situation.size(); j++)
    {
      if (situation[i] == situation[j])
      {
        repeatCount++;
      }
      else {
        break;
      }
      if (repeatCount == 6)
      {
        isDangerous = true;
        break;
      }
    }
    repeatCount = 0;
  }
  if (isDangerous)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}