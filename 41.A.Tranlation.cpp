#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  string word, translation, reversedWord = "";
  cin >> word >> translation;
  for (int i = word.size() - 1; i >= 0; i--)
  {
    reversedWord += word[i];
  }
  if (reversedWord == translation)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}