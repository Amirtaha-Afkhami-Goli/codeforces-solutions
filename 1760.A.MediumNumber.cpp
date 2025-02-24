#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int array[3];
    for (int i = 0; i < 3; i++)
    {
      cin >> array[i];
    }
    sort(array, array + 3);
    cout << array[1] << endl;
  }
  return 0;
}