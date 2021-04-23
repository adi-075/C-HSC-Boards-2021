#include <iostream>
using namespace std;

bool isPrime(int); // Function Prototyping

int main(){
    int a, b;
    cout << "Enter a Positive Integer to check whether its a Prime: ";
    cin >> b;
    a=isPrime(b);
    return 0;
}
bool isPrime(int n)
{
  if(n<=1)
    return false;
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
      return false; 
  }
return true;
}
