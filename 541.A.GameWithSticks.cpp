#include <iostream>
using namespace std;
int main()
{
  int cols, rows, helper;
  cin >> cols >> rows;
  helper = min(rows, cols);
  if (helper % 2 == 0)
  {
    cout << "Malvika";
  }
  else
  {
    cout << "Akshat";
  }
  return 0;
}