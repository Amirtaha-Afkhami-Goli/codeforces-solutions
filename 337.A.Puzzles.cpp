#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, min;
  cin >> n >> m;
  int puzzles[m];
  int s = 1000;

  for (int i = 0; i < m; i++)
    cin >> puzzles[i];

  sort(puzzles, puzzles + m);

  if (m == n)
    s = puzzles[m - 1] - puzzles[0];
  else
    for (int j = 0; j < m - n + 1; j++)
    {
      min = 0;
      for (int k = 0; k < n - 1; k++)
        min += puzzles[j + k + 1] - puzzles[j + k];
      if (min < s)
        s = min;
    }

  cout << s << endl;
  return 0;
}
