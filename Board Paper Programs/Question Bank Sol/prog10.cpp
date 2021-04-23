/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class GCD
{
  int a, b, gcd=0, c, d;
  public:
  void input()
  { 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
  }
  int findGCD()
  {
      c=a;
      d=b;
    while(b!=0)
    {
      if(a>b)
      {
        a=a-b;
      }
      else
      {
        b=b-a;
      }
    }
    return a;
  }
  void display()
  {
    cout << "GCD of " << c << " and " << d << " is: "<< a;
  }
};

int main()
{
  GCD obj; 
  obj.input();
  obj.findGCD();
  obj.display();
}