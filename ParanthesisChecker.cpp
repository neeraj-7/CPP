#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<unordered_set>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int is_match(char a, char b)
{
  if(a == ']' && b == '[')
   return 1;
  else if(a == '}' && b =='}')
   return 1;
  else if(a == ')' && b =='(')
   return 1;

 else return 0;
}
int main()
 {
   string s;
   cin >> s;
   stack<char> s1;
   int i;
   int len = s.length;
   for(i=0;i<len;i++)
   {
    if(s[i] == '{' || s[i] == '[' || s[i] == '(')
     {
        s1.push(s[i]);
     }
    else if(s[i] == ']' || s[i] =='}' || s[i] ==')')
     {
       if(s1.empty() || !(is_match(s[i], s1.top())))
        {
         cout << "not balanced";
        }

        else
           s1.pop();
      }

if(s1.empty())
 {
   cout << "balanced";
 }
else cout << "not balance";
 
return 0;
} 
