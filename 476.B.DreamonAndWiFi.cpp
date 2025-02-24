#include <iostream>
#include <math.h>
using namespace std;
int fact(long int n)
{
  long long acc = 1;
  for (int i = 1; i <= n; i++)
  {
    acc *= i;
  }
  return acc;
}
int main()
{
  string sent, recieved;
  int qmcnt = 0, finalPosition = 0;
  bool found = true;
  cin >> sent >> recieved;
  for (int i = 0; i < sent.size(); i++)
  {
    if (recieved[i] == '?')
    {
      found = true;
      break;
    }
  }
  if (!found)
  {
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < sent.size(); i++)
    {
      if (sent[i] == '+')
      {
        cnt1++;
      }
      if (recieved[i] == '+')
      {
        cnt2++;
      }
    }
    if (cnt1 == cnt2)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << 0 << endl;
    }
    return 0;
  }
  else
  {
    for (int i = 0; i < recieved.size(); i++)
    {
      if (recieved[i] == '?')
      {
        qmcnt++;
      }
      if (sent[i] == '+')
      {
        finalPosition++;
      }
      else
      {
        finalPosition--;
      }
      if (recieved[i] == '+')
      {
        finalPosition--;
      }
      else if (recieved[i] == '-')
      {
        finalPosition++;
      }
    }
  }
  // cout << qmcnt << " " << finalPosition << endl;
  if (finalPosition > qmcnt)
  {
    cout << 0 << endl;
    return 0;
  }
  else if (finalPosition == 0)
  {
    cout << 0.5 << endl;
    return 0;
  }
  else
  {
    int pcnt = (finalPosition + qmcnt) / 2;
    cout << (((fact(finalPosition) / fact(pcnt)) / fact(finalPosition - pcnt)) / pow(qmcnt, 2)) << endl;
  }
  return 0;
}

// TODO: FIXME!