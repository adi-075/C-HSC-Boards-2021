#include <iostream>
using namespace std;

class fact
{
  private:
  int n, f=1, n1;
  public:
  void input()
  {
    cout << "\nEnter a number: ";
    cin >> n;
  }
  void facto();
  void display()
  {
    cout << "\n Factorial of ["<<n<<"] is: "<<f<<"\n";
  }
};
void fact::facto()
{
  n1=n;
  for(int i=1;i<=n;i++)
  {
    f=f*i;
  }
  cout <<"Factorial is: "<<f;
}
int main()
{
  fact obj;
  obj.input();
  obj.facto();
  obj.display();
  return 0;
}
