#include <iostream> //Find max of two numbers using if and else
using namespace std;
int main(){
    int a, b, max;
    cout << "Enter two numbers: \n";
    cin >> a >> b; 
    if(a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    cout << "Max of the Two numbers is: " << max;
}