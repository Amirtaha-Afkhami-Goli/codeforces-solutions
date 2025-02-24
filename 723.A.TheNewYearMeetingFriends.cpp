#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int positions[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> positions[i];
  }
  sort(positions, positions +3);
  cout << (positions[1] - positions[0]) + (positions[2] - positions[1]);
  return 0;
}