#include <iostream>
using namespace std;
int main(){
<<<<<<< HEAD
    int a=0,b=1, n=15, s=0;
    cout << "First "<<n<<" Fibonacci: " << endl;
    for(int i=0;i<=15;i++)
=======
    int a=1,b=1, s; // First two terms of Fibonacci
    cout << "First "<<n<<" Fibonacci: ";
    cout<<a<<" "<<b;
    for(int i=0;i<=13;i++)
>>>>>>> 399ca94094ae42285cd65a82f54a223a4aee7eb1
    {
        s=a+b;
        cout << "\n";
        cout <<" "<<s;
        a=b;
        b=s;
        // cout<<a<<" "<<b << endl;
    }
    return 0;
}
