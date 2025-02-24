#include <iostream>
using namespace std;
int main()
{
  int k, l, m, n, numOfDragons, counter = 0;
  cin >> k >> l >> m >> n >> numOfDragons;
  for (int i = 1; i <= numOfDragons; i++)
  {
    if ((numOfDragons >= k) || (numOfDragons >= l) || (numOfDragons >= n) || (numOfDragons >= m))
    {
      if (((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0)))
      {
        counter++;
      }
    }
  }
  cout << counter;
  return 0;
}