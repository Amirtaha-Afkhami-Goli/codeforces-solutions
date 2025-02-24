#include <iostream>
using namespace std;
int main()
{
  int k, r, counter = 1;
  cin >> k >> r;
  for (int i = 0; i < 10; i++)
  {
    if (k * counter % 10 == 0 || k * counter % 10 == r)
    {
      cout << counter;
      break;
    }
    counter++;
  }
  return 0;
}