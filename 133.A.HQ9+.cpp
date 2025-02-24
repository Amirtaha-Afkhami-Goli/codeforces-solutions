#include <iostream>
using namespace std;
int main()
{
  string code;
  cin >> code;
  bool isExecutive = false;
  for (int i = 0; i < code.size(); i++)
  {
    if (code[i] == 'H' || code[i] == 'Q' || code[i] == '9')
    {
      cout << "YES";
      isExecutive = true;
      break;
    }
  }
  if (!isExecutive) {
    cout << "NO";
  }
  return 0;
}