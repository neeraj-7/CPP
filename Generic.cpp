#include<iostream
using namespace std;
//creating a generic function swap
template <class X>
void swap (X &a, X &b)
{
   X tp;
   tp = a;
   a = b;
   b = tp;
   cout << "Swapped elements values of a and b are : "<< a << " and "<< b <<" respectively" <<endl;
}
int main()
{
  int a =10, b =20;
  float c = 10.5, d = 20.5;
  swap(a,b);  //function swapping 'int' elements
  swap(c,d); //function swapping 'float' elements
  return 0;
}
