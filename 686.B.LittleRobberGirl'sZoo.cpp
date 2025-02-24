#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int queue[n];
  for (int i = 0; i < n; i++)
  {
    cin >> queue[i];
  }
  bool checker = true;
  while (checker)
  {
    checker = false;
    for (int i = 0; i < n - 1; i++)
    {
      if (queue[i + 1] < queue[i])
      {
        swap(queue[i], queue[i + 1]);
        cout << i + 1 << " " << i + 2 << endl;
        checker = true;
      }
    }
  }
  return 0;
}