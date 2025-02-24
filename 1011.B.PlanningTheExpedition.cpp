#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int people, food;
  cin >> people >> food;
  vector<int> v(food);
  for (int &x : v)
    cin >> x;
  int low = 0, high = food / people + 10;
  sort(v.begin(), v.end());
  while (low < high)
  {
    int expected = (low + high + 1) / 2;
    int cnt = 0;
    int temp = 0;
    for (int i = 0; i < food; i++)
    {
      if (i == 0)
      {
        temp++;
      }
      else
      {
        if (v[i] == v[i - 1])
          temp++;
        else
          temp = 1;
      }
      if (temp >= expected)
      {
        cnt++;
        temp = 0;
      }
    }
    if (cnt >= people)
    {
      low = expected;
    }
    else
      high = expected - 1;
  }
  cout << low << endl;
  return 0;
}