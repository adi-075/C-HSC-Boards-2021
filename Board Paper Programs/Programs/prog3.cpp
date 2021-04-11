#include <iostream>
using namespace std;
class avg
{
    float a, b, c, average; // Variable for 3 subjects
    public:
    avg(); //Constructor
    void calculate();
    void print();
};
avg::avg()
{
    cout << "Enter marks of 3 subjects:\t";
    cin >> a >> b >> c;
    cout << "Calculating...."<<endl;
}
void avg::calculate()
{
    average = (a+b+c)/3;
}
void avg::print()
{
    cout << "The average of 3 numbers is: "<<average;
}
int main()
{
    avg obj;
    obj.calculate();
    obj.print();
}
