#include <iostream>
using namespace std;
int main()
{
  int shoes[4], counter = 0;
  bool isFind;
  for (int i = 0; i < 4; i++)
  {
    cin >> shoes[i];
    isFind = false;
    for (int j = i - 1; j >= 0; j--)
    {
      if (shoes[j] == shoes[i])
      {
        isFind = true;
      }
    }
    if (!isFind)
    {
      counter++;
    }
  }
  cout << 4 - counter;
  return 0;
}