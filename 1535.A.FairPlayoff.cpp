#include <iostream>
using namespace std;
bool fair(int array[])
{
  if (array[0] < array[1])
    swap(array[0], array[1]);
  if (array[2] > array[3])
    swap(array[2], array[3]);
  if (array[0] < array[2] || array[3] < array[1])
    return false;
  else
    return true;
}
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int array[4];
    for (int j = 0; j < 4; j++)
      cin >> array[j];
    if (fair(array))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}