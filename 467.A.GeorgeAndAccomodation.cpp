#include <iostream>
using namespace std;
int main()
{
  int numOfRooms, capacityOfRoom, peopleInRoom, availableRooms = 0;
  cin >> numOfRooms;
  for (int i = 0; i < numOfRooms; i++)
  {
    cin >> peopleInRoom >> capacityOfRoom;
    if (capacityOfRoom - peopleInRoom >= 2)
    {
      availableRooms++;
    }
  }
  cout << availableRooms;
  return 0;
}