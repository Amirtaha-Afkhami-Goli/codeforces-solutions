#include <iostream>
using namespace std;
int main()
{
  int numOfEvents, event, polices = 0, crimes = 0;
  ;
  cin >> numOfEvents;
  for (int i = 0; i < numOfEvents; i++)
  {
    cin >> event;
    if (event == -1)
    {
      if (polices > 0)
      {
        polices--;
      }
      else
      {
        crimes++;
      }
    }
    else
    {
      polices += event;
    }
  }
  cout << crimes;
  return 0;
}