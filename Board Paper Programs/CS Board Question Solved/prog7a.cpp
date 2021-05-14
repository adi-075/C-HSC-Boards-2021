#include <iostream>
using namespace std;

class GCD
{
  int a, b;
  public: 
    void print();
};

void GCD::print(void)
{
  cout << "Enter two positive integers: ";
  cin >> a >> b;
  while(a!=b)
  {
    if(a>b)
      a-=b;
    if(b>a)
      b-=a;
  }
  cout << a;
}
int main()
{
  GCD obj;
  obj.print();
  return 0; 
}
