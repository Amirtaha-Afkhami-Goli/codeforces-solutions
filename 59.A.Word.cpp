#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  string word, output = "";
  cin >> word;
  unsigned int numOfUppercase = 0, numOfLowercase = 0;
  for (int i = 0; i < word.size(); i++)
  {
    if (isupper(word[i]))
    {
      numOfUppercase++;
    }
    else
    {
      numOfLowercase++;
    }
  }
  if (numOfUppercase > numOfLowercase)
  {
    for (int i = 0; i < word.size(); i++)
    {
      output += toupper(word[i]);
    }
  }
  else
  {
    for (int i = 0; i < word.size(); i++)
    {
      output += tolower(word[i]);
    }
  }
  cout << output;
  return 0;
}