#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  char chamber[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> chamber[i][j];
    }
  }
}