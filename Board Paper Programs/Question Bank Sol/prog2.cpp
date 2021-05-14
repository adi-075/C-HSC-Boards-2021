#include <iostream> //Find max of two numbers using if and else
using namespace std;
int main(){
    int a, b, max, min;
    cout << "Enter two numbers: \n";
    cin >> a >> b; 
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;
    cout << "Max of the Two numbers: "<< a << " & " << b << " is: "<< max << endl;
    cout << " and Minimum is: " << min << endl;
}