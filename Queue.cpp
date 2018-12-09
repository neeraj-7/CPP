#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
  {
       char qu[4] = {'a', 'b', 'c', 'd'};
       queue <char> q;
       int N = 3;
       char ch;
       for(int i=0;i<4;i++)
          q.push(qu[i]);
       for(int i=0;i<4;i++)
       { 
          ch = q.front();
          q.push(ch);
          q.pop();
        }
    while(!q.empty())
      {
       printf("%C", q.front());
       q.pop();
       }
      printf("\n");
      return 0;
   }
