#include <iostream>
using namespace std;
int main(){
    int a=0,b=1, n=15, s=0;
    cout << "First "<<n<<" Fibonacci: ";
    cout<<a<<" "<<b;
    for(int i=0;i<=15;i++)
    {
        s=a+b;
        cout <<" "<<s;
        a=b;
        b=s;
    }
    return 0;
}
