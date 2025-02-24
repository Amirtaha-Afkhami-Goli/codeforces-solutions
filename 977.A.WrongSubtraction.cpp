#include <iostream>
using namespace std;
int main()
{
  long int number, numOfOperations, operateTime = 0;
  cin >> number >> numOfOperations;
  while (numOfOperations != operateTime) {
    if (number % 10 != 0) {
      number--;
    }
    else {
      number /= 10;
    }
    operateTime++;
  }
  cout << number;
  return 0;
}