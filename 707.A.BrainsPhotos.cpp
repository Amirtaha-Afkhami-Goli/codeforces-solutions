#include <iostream>
using namespace std;
int main()
{
  char ch;
  int rows, cols, c = 0;
  cin >> rows >> cols;
  for (int i = 0; i < (rows * cols); i++)
  {
    cin >> ch;
    if (ch == 'B' || ch == 'W' || ch == 'G')
    {
      c++;
    }
  }
  if (c == (rows * cols))
  {
    cout << "#Black&White\n";
  }
  else
  {
    cout << "#Color\n";
  }
  return 0;
}