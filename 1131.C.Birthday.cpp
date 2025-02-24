#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
int main()
{
  ll n;
  vi a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    a.push_back(input);
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i += 2)
    cout << a[i] << " ";
  if (n % 2)
    n--;
  for (int i = n - 1; i >= 1; i -= 2)
    cout << a[i] << " ";
  cout << endl;
  return 0;
}