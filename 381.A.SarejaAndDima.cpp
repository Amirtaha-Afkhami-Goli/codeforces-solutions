#include <iostream>
using namespace std;
int main()
{
  int numOfCards, sareja = 0, dima = 0;
  cin >> numOfCards;
  int cards[numOfCards], lefts = 0, rights = numOfCards - 1;
  for (int i = 0; i < numOfCards; i++)
  {
    cin >> cards[i];
  }
  for (int i = 0; i < numOfCards; i++)
  {
    if (i % 2 == 0)
    {
      if (cards[lefts] > cards[rights])
      {
        sareja += cards[lefts];
        lefts++;
      }
      else
      {
        sareja += cards[rights];
        rights--;
      }
    }
    else
    {
      if (cards[lefts] > cards[rights])
      {
        dima += cards[lefts];
        lefts++;
      }
      else
      {
        dima += cards[rights];
        rights--;
      }
    }
  }
  cout << sareja << " " << dima;
  return 0;
}