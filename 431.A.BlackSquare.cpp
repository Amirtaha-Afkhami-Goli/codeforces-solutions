#include <iostream>
using namespace std;
int main()
{
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  string status;
  cin >> status;
  int answer = 0;
  for (char c : status)
  {
    int strip;
    switch (c)
    {
    case '1':
      strip = a1;
      break;
    case '2':
      strip = a2;
      break;
    case '3':
      strip = a3;
      break;
    case '4':
      strip = a4;
      break;
    }
    answer += strip;
  }
  cout << answer << endl;
  return 0;
}