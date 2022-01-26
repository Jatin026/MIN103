#include <iostream>
using namespace std;
int main()
{float x, y;
cout<<"\n enter a value of x:";
cin>> x ;
cout<<"\n enter a value of y:";
cin>> y;
if (x>5)
if (y>5)
cout << "x and y are > 5";
else
cout<<"x >5 and y<5";
else
cout << "x is <= 5";
}