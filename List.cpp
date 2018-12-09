#include<iostream>
#include<list>
using namespace std;
int main()
{
 list <int> l;
 list <int>::iterator it;
 //inserts elements at end of list
 l.push_back(4);
 l.push_back(5);

//inserts elements at beginning of list
 l.push_front(3);
 l.push_front(5);

//returns reference to first element of list
 it = l.begin();

//inserts 1 before first element of list
 l.insert(it,1);

cout<<"All elements of list l are: "<<endl;
for(it = l.begin(); it != l.end(); it++)
{
  cout<< *it << " ";
}
cout << endl;
//reverse elements of list
l.reverse();

cout<<"All element of List l are after reversing: "<<endl;
for(it = l.begin(); it!=l.end(); it++)
{
 cout << *it << " ";
}
cout << endl;

//removes all occurences of 5 from list
l.remove(5);

cout<<"Elements after removing all occurence of 5 from list l: "<<endl;
for(it = l.begin(); it != l.end(); it++)
{
  cout << *it<< " ";
}
cout <<endl;

//removes last element from list
l.pop_back();
//removes first element from list
l.pop_front();
return 0;
}
