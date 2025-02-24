#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, p, q;
  cin >> n >> p;
  unsigned int array[n * n];
  int count = 0;
  for (int i = 0; i < n * n; ++i)
  {
    array[i] = 0;
  }
  for (int i = 0; i < p; i++)
  {
    cin >> array[i];
  }
  cin >> q;
  for (int i = p; i < p + q; i++)
  {
    cin >> array[i];
  }

  sort(array, array + (p + q));

  for (int i = 0; i < p + q; i++)
  {
    if (array[i] != array[i + 1])
    {
      count++;
    }
  }

  if (n == (count))
  {
    cout << "I become the guy." << endl;
  }
  else
  {
    cout << "Oh, my keyboard!" << endl;
  }

  return 0;
}