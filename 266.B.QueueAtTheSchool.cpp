#include <iostream>
using namespace std;
int main()
{
  int numOfStudents, time;
  cin >> numOfStudents >> time;
  string queue;
  cin >> queue;
  for (int i = 0; i < time; i++) {
    for (int j = 0; j < numOfStudents; j++)
    {
      if (queue[j] == 'B' && queue[j + 1] == 'G')
      {
        queue[j] = 'G';
        queue[j + 1] = 'B';
        j++;
      }
    }
  }
  cout << queue;
  return 0;
}