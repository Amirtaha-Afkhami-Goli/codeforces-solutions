// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// string removeDuplicatedChars(string input)
// {
//   string output = "";
//   for (int i = 0; i < input.length(); i++)
//   {
//     for (int j = i + 1; j < input.length(); j++)
//     {
//       if (input[i] == input[j])
//       {
//         output = input.substr(0, j) + input.substr(j + 1, input.length());
//         input = output;
//       }
//     }
//   }
//   return output;
// }
// int main()
// {
//   string username;
//   cin >> username;
//   username = removeDuplicatedChars(username);
//   if (username.size() % 2 == 0)
//   {
//     cout << "CHAT WITH HER!";
//   }
//   else
//   {
//     cout << "IGNORE HIM!";
//   }
//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  string username, output = "";
  cin >> username;
  output += username[0];
  for (char c : username)
  {
    bool isDefined = false;
    for (char s : output)
    {
      if (c == s)
      {
        isDefined = true;
      }
    }
    if (!isDefined)
    {
      output += c;
    }
  }
  if (output.size() % 2 == 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }

  return 0;
}