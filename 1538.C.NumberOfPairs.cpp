 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
   long long t;
   cin >> t;
   while (t--)
   {
     long long c = 0, n, l, r;
     cin >> n >> l >> r;
     long long a[n];
     for (int i = 0; i < n; i++)
       cin >> a[i];
     sort(a, a + n);
     for (int i = 0; i < n; i++)
     {
       c += (upper_bound(a + i + 1, a + n, r - a[i]) - lower_bound(a + i + 1, a + n, l - a[i]));
     }
     cout << c << endl;
   }
   return 0;
 }

//#include <iostream>
//using namespace std;
//int main()
//{
//  long long t;
//  cin >> t;
//  while (t--)
//  {
//    long long c = 0, n, l, r;
//    cin >> n >> l >> r;
//    long long a[n];
//    for (int i = 0; i < n; i++)
//      cin >> a[i];
//    // sort(a, a + n);
//    for (int i = 0; i < n; i++)
//    {
//      for (int j = i + 1; j < n; j++)
//      {
//        if (a[j] + a[i] >= l && a[j] + a[i] <= r)
//        {
//          c++;
//        }
//      }
//    }
//    cout << c << endl;
//  }
//  return 0;
//}