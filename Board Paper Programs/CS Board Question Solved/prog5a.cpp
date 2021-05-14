#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a[10], i, j, temp;
  cout << "Enter 10 numbers: ";
  for(i=0; i<9; i++)
  {
    cin >> a[i];
  }
  j = i-1;
  i=0; 
 cout << "\nArray before Reverse: ";
  for(i=0;i<9;i++)
  {
    cout << "\t" << a[i];
  }
  while(i<j)
  {
    temp = a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  cout << "\nArray after Reverse: ";
  for(i=0;i<9;i++)
  {
    cout << "\t" << a[i];
  }
  return 0;
}
