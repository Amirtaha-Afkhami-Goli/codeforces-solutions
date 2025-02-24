#include <iostream>
#include <string>
using namespace std;
int main()
{
  string equ, newEqu, sortedEqu;
  cin >> equ;
  int one = 0, two = 0, three = 0;
  for (int i = 0; i < equ.size(); i++)
  {
    if (equ[i] != '+')
    {
      newEqu += equ[i];
    }
    switch (equ[i])
    {
    case '1':
      one++;
      break;
    case '2':
      two++;
      break;
    case '3':
      three++;
      break;
    }
  }
  for (int i = 0; i < one; i++)
  {
    sortedEqu += "1+";
  }
  for (int i = 0; i < two; i++)
  {
    sortedEqu += "2+";
  }
  for (int i = 0; i < three; i++)
  {
    sortedEqu += "3+";
  }
  cout << sortedEqu.substr(0, sortedEqu.size() - 1);
  return 0;
}