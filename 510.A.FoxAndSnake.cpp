#include <iostream>
using namespace std;
int main()
{
  int rows, cols;
  cin >> rows >> cols;
  for (int i = 1; i <= rows; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 0; j < cols; j++)
      {
        cout << "#";
      }
    }
    else
    {
      if (i % 4 == 0)
      {
        cout << "#";
        for (int j = 0; j < cols - 1; j++)
        {
          cout << ".";
        }
      }
      else
      {
        for (int j = 0; j < cols - 1; j++)
        {
          cout << ".";
        }
        cout << "#";
      }
    }
    cout << "\n";
  }
  return 0;
}