#include <iostream>
using namespace std;
int main() {
  unsigned int numOfFriends, h, heightOfPerson;
  cin >> numOfFriends >> h;
  unsigned int neededPlace = 0;
  for (unsigned int i = 0; i < numOfFriends;i++) {
    cin >> heightOfPerson;
    if (heightOfPerson > h) {
      neededPlace += 2;
    }
    else {
      neededPlace++;
    }
  }
  cout << neededPlace;
  return 0;
}