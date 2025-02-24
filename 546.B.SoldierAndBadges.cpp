#include <iostream>
using namespace std;
int main()
{
  int n, a[500111], x, k = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    a[x]++;
    while (a[x] > 1)
    {
      x++;
      a[x]++;
      k++;
    }
  }
  cout << k;
}