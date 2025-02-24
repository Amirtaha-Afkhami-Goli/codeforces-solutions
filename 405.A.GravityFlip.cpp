#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cols, num;
  cin >> cols;
  long int cubes[cols];
  long int accumulator;
  for (int i = 0; i < cols; i++)
  {
    cin >> num;
    cubes[i] = num;
  }
  long int n = sizeof(cubes) / sizeof(cubes[0]);
  sort(cubes, cubes + n);
  for (long int i : cubes) {
    cout << i << " ";
  }
  return 0;
}