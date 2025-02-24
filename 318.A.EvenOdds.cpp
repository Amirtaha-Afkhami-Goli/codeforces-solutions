#include <iostream>
using namespace std;
int main()
{
  long long range, kThPlace;
  cin >> range >> kThPlace;
  if (kThPlace <= (range + 1) / 2)
  {
    cout << (kThPlace * 2) - 1;
  }
  else
  {
    cout << (kThPlace - ((range + 1) / 2)) * 2;
  }
  return 0;
}