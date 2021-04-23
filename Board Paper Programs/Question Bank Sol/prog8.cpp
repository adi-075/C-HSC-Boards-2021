#include<iostream>    
using namespace std;     
void fact(int x, int y)
{
    for(int i=1;i<=x;i++)
    {
        y=y*i;
    }
    cout<<"Factorial is: "<<y;
} 
int main()    
{
    void fact(int, int);
    int n, f=1;
    cout << "Enter a positive integer: ";
    cin >> n;
    fact(n, f);
}
