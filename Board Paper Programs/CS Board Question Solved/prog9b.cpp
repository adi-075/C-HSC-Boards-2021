#include <iostream>
using namespace std;

class sumofint
{
  private: 
    int num;
  public: 
    void getData();
    void sum();
};

void sumofint::getData(){
  cout << "Enter the number: ";
  cin >> num;
}

void sumofint::sum(){
  int rem, add = 0;
  while(num>0)
  {
    rem = num %10;
    add=add+rem;
    num=num/10;
  }
  cout << "The sum of all digits of number: " << add;
}
int main()
{
  sumofint S;
  S.getData();
  S.sum();
}
