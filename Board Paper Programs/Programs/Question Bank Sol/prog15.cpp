#include <iostream>
using namespace std;

class temperature
{
  private:
    double C, F;
  public:
    void input()
    {
      cout << "Enter Temperature in Fahrenheit: "<<endl;
      cin >> F;
    }
    void calculate()
    {
      C = ((F-32)/9)*5;
    }
    void display()
    {
      cout << "Temperature in Celsius: "<<endl;
      cout << C;
    }
};

int main()
{
  temperature obj;
  obj.input();
  obj.calculate();
  obj.display();
  return 0;
}
