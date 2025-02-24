#include <iostream>
using namespace std;
int main()
{
  string firstNum, secondNum, answer = "";
  cin >> firstNum >> secondNum;
  for (int i = 0; i < firstNum.size(); i++)
  {
    if (firstNum[i] != secondNum[i])
    {
      answer += "1";
    }
    else
    {
      answer += "0";
    }
  }
  cout << answer;
  return 0;
}