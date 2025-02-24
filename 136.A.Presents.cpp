#include <iostream>
using namespace std;
int main()
{
  int numOfFriends;
  cin >> numOfFriends;
  int finalStatus[numOfFriends];
  int reciever;
  for (int i = 0; i < numOfFriends; i++)
  {
    cin >> reciever;
    finalStatus[reciever - 1] = i + 1;
  }
  for (int i : finalStatus)
  {
    cout << i << " ";
  }
  return 0;
}