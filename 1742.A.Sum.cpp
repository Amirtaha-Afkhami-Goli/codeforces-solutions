#include <iostream>
using namespace std;
int main()
{
  long long numOfRows, numOfEnteredRows = 0, nums[3];
  cin >> numOfRows;
  while (numOfEnteredRows < numOfRows)
  {
    for (int i = 0; i < 3; i++)
    {
      cin >> nums[i];
    }
    if ((nums[0] == nums[1] + nums[2]) || (nums[1] == nums[0] + nums[2]) || (nums[2] == nums[0] + nums[1])) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
    numOfEnteredRows++;
  }
  return 0;
}