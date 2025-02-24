#include <iostream>
using namespace std;
int main()
{
  int testCases;
  cin >> testCases;
  while (testCases--)
  {
    string input, answer;
    cin >> input;
    input = input[0] + input + input[input.length() - 1];
    for (int i = 0; i < input.length(); i++)
    {
      if (i % 2 == 0)
      {
        answer += input[i];
      }
    }
    cout << answer << endl;
  }
  return 0;
}