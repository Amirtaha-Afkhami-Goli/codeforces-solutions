#include <iostream>
using namespace std;

int main()
{
  string input, output;
  cin >> input;
  bool checker = false;
  int index = 0;

  while (true)
  {
    if (input[index] == 'W' && input[index + 1] == 'U' && input[index + 2] == 'B')
    {
      index += 2;
      if (checker == true)
      {
        output += " ";
        checker = false;
      }
    }
    else
    {
      output += input[index];
      checker = true;
    }
    index++;
    if (index == input.size())
      break;
  }

  cout << output << endl;
  return 0;
}
