#include <iostream>
using namespace std;
int main(){
    int a=1,b=1, s; // First two terms of Fibonacci
    cout << "First "<<n<<" Fibonacci: ";
    cout<<a<<" "<<b;
    for(int i=0;i<=13;i++)
    {
        s=a+b;
        cout <<" "<<s;
        a=b;
        b=s;
    }
    return 0;
}
