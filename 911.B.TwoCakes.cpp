#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, m;
  int a, b;
  cin >> n >> a >> b;
  if (a > b)
    swap(a, b);
  m = 0;
  int j, k;
  for (int i = 1; i <= n - 1; i++)
  {
    j = a / i;
    k = b / (n - i);
    if (j >= 1 && k >= 1)
      m = max(m, min(j, k));
  }
  cout << m << endl;
  return 0;
}