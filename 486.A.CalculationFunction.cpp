#include <iostream>
using namespace std;
int main()
{
  long long num;
  cin >> num;
  if (num % 2 == 0)
  {
    cout << num / 2;
  }
  else
  {
    cout << (-num - 1) / 2;
    // sum = ((num - 1) / 2) - num = (-num - 1) / 2
  }
  return 0;
}