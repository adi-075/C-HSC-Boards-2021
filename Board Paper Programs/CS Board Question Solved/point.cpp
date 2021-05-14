#include <iostream>
using namespace std;

class point
{
  int x, y, z;
  public: 
  point(){
    x=0; y=0;
  }
  point (int a, int b)
  {
    a=x;b=y;c=z;
  }
  void display()
  {
    cout << "\nThe Cartesian Cordinates are: " << a << " " << b; 
  }
  void add(point p1, point p2)
  {
    a = p1.a + p2.a;
    b = p1.b+p2.b;
  }
};
  int main()
  {
    point p1, p2(1, 2);
    point p3(p1);
    p1.add(p2,p3);
    p1.display();
  }
