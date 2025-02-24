// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, an, m, qm, sum, index;
//   cin >> n;
//   int anarr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> anarr[i];
//   }
//   cin >> m;
//   int qmarr[m];
//   for (int i = 0; i < m; i++)
//   {
//     cin >> qmarr[i];
//     sum = 0;
//     index = 0;
//     while (sum < qmarr[i])
//     {
//       sum += anarr[index];
//       index++;
//     }
//     cout << index << endl;
//   }
//   return 0;
// }
#include <iostream>
using namespace std;
int main()
{
  int arr[1000000];
  int n, a, k = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a;
    for (int j = 1; j <= a; j++)
    {
      arr[++k] = i;
    }
  }
  int m, q;
  cin >> m;
  for (int i = 1; i <= m; i++)
  {
    cin >> q;
    cout << arr[q] << endl;
  }
  return 0;
}