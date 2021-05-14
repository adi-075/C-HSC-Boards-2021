#include<iostream>
#include <cstdio>
using namespace std;

int swap(int ,int);
int main()
{
    int a,b, c;
    cout<<"Enter the Two Numbers to Swap: " << endl;
    cin>>a>>b;
    cout<<"After Swapping of Two Numbers:" << endl;
    c=swap(a,b);
    return 0;
}
int swap(int x,int y)
{
 int z;
 z=x;
 x=y;
 y=z;
 cout<< x<<" "<<y << endl;
 return 0;
}
