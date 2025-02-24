#include <iostream>
#include <string>
using namespace std;
int main()
{
  int numOfLayers;
  cin >> numOfLayers;
  string answer = "", odds = "I hate that ", evens = "I love that ";
  for (int i = 1; i <= numOfLayers; i++)
  {
    if (i % 2 == 0)
    {
      answer += evens;
    }
    else
    {
      answer += odds;
    }
  }
  answer = answer.substr(0, answer.length() - 5) + "it";
  cout << answer;
  return 0;
}