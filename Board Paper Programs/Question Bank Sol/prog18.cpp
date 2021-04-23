#include <iostream>
using namespace std;

int power (int, int);

int
main ()
{
  int a, b;
  cout << "Enter any two number: ";
  cin >> a >> b;
  cout << "\nPower = " << power (a, b);
}

int
power (int base, int exp)	// Base and Exponent
{
  int i, result = 1;
  // Calculate base^exponent by repetitively multiplying base
  for (i = 0; i < exp; i++)
    {				// Assign a counter less than exponent
      result = result * base;
    }

  cout << base << "^" << exp << " = " << result;
  return 0;
}
