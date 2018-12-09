#include<iostream>
#include<utility>

using namespace std;
int main()
{
 pair <int, char>p;
 pair <int, char>pa(2,'b');
 p = make_pair(1,'a');
 cout << p.first << ' '<< p.second << endl;
 cout << pa.first << ' '<< pa.second << endl;
 return 0;
 }
