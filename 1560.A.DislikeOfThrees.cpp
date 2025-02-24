#include <bits/stdc++.h>
using namespace std;
int main()
{
  int sequence[1001];
  int index = 1;
  for (int i = 1; i <= 1666; i++)
  {
    if (i % 3 != 0)
    {
      if (i % 10 != 3)
      {
        sequence[index] = i;
        index++;
      }
    }
  }

  int t;
  cin >> t;
  int k;
  while (t--)
  {
    cin >> k;
    cout << sequence[k] << endl;
  }

  return 0;
}