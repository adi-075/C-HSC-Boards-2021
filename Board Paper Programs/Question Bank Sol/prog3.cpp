#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year to be checked for leap year: ";
    cin >> year;
    if(year%4==0)
    {
        cout << "Its a leap year!";
    }
    else
    {
        cout << "Not a leap year!";
    }
}