#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, count = 0, startNum;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
      startNum = i;
      while (startNum <= n)
      {
        count++;
        startNum = startNum * 10 + i;
      }
    }
    cout << count << endl;
  }
  return 0;
}