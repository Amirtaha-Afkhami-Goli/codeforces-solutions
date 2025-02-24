#include <iostream>
using namespace std;
int main()
{
  int num;
  cin >> num;
  string input;
  cin >> input;
  int numOfLetters = 0;
  bool isRepeated = false;
  for (int i = 0; i < num; i++)
  {
    isRepeated = false;
    for (int j = 0; j < i; j++)
    {
      if (toupper(input[i]) == toupper(input[j]))
      {
        isRepeated = true;
        break;
      }
    }
    if (!isRepeated)
    {
      numOfLetters++;
    }
  }
  if (numOfLetters == 26)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}