#include <iostream>
using namespace std;

class student
{
  protected:
    int roll_number;
  public:
    void get_number(int);
    void put_number(void);
};
void student::get_number(int a)
{
  roll_number=a;
}
void student::put_number()
{
  cout << "*****Marksheet*****" << endl;
  cout << "Roll Number: " << roll_number << endl;
}

class marks:public student
{
  protected:
    float m1, m2, m3;
  public:
    void get_marks(float,float,float);
    void put_marks(void);
};
void marks::get_marks(float x,  float y, float z)
{
  m1=x; m2=y; m3=z;
}
void marks::put_marks()
{
  cout << "Marks:\n";
  cout << "First Subject: " <<  m1 << endl;
  cout << "Second Subject: " << m2 << endl;
  cout << "Third Subject: " <<  m3 << endl;
}
class result:public marks
{
  float total;
  public:
  void display(void);
};
void result::display(void)
{
  total = m1+m2+m3;
  put_number();
  put_marks();
  cout << "Total Marks out of 300=\t" << total << "\n";
  cout << "*******************";
}

int main()
{
  result s1;
  s1.get_number(10);
  s1.get_marks(100.0, 99.5, 98.5);
  s1.display();
}
