#include <iostream>
using namespace std;
int main()
{
  string input, num0 = ".", num1 = "-.", num2 = "--";
  cin >> input;
  for (int i = 0; i < input.size(); i++)
  {
    if (i <= input.size() - 1)
    {
      if (input[i] == '-' && input[i + 1] == '.')
      {
        cout << 1;
        i++;
      }
      else if (input[i] == '-' && input[i + 1] == '-')
      {
        cout << 2;
        i++;
      }
      else
      {
        cout << 0;
      }
    }
  }
  return 0;
}