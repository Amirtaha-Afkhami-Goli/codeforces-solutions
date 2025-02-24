#include <iostream>
using namespace std;
int main()
{
  unsigned int numOfEvents;
  cin >> numOfEvents;
  int rooms[10];
  for (int i = 0; i < 10; i++)
  {
    rooms[i] = 0;
  }
  char input;
  for (int i = 0; i < numOfEvents; i++)
  {
    cin >> input;
    switch (input)
    {
    case 'L':
      for (int j = 0; j < 10; j++)
      {
        if (rooms[j] == 0)
        {
          rooms[j] = 1;
          break;
        }
      }
      break;
    case 'R':
      for (int j = 9; j >= 0; j--)
      {
        if (rooms[j] == 0)
        {
          rooms[j] = 1;
          break;
        }
      }
      break;
    default:
      rooms[input - '0'] = 0;
      break;
    }
  }
  for (int i : rooms)
  {
    cout << i;
  }
  return 0;
}