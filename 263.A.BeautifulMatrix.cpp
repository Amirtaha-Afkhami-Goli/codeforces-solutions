#include <iostream>
using namespace std;
int main()
{
  int col, row, num;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> num;
      if (num == 1)
      {
        row = i + 1;
        col = j + 1;
      }
    }
  }
  cout << abs((row - 3)) + abs((col - 3));
  return 0;
}