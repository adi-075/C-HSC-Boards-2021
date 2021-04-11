#include <iostream>
using namespace std;
class temperature
{
    double cel;
    double fah;
    public:
    temperature(); // Constructor
    void convert();
    void print(); 
};
temperature::temperature()
{
    cout << "Enter temperature in degree celsius: \n";
    cin >> cel;
}
void temperature::convert()
{
    fah = cel*1.8000+32.00;
}
void temperature::print()
{
    cout<< "\nThe degree Fahrenheit Temperature is: \n";
    cout << fah;
}
int main()
{
    temperature obj;
    obj.convert();
    obj.print();
}