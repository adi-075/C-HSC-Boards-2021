#include <iostream>
using namespace std;

class circle
{
  private: 
    double radius, ar, cir;
  public:
    void input()
    {
      cout << "Enter Radius of the circle: ";
      cin >> radius;
    }
    void circumference()
    {
      cir = (2.0*3.1415*radius);
    }
    void area()
    {
      ar = (3.1415*radius*radius);
    }
    void display()
    {
      cout << "Circumference is: "<< cir << " and Area is: "<< ar;
    }

};
int main()
{
  circle obj;
  obj.input();
  obj.circumference();
  obj.area();
  obj.display();
  return 0;
}
