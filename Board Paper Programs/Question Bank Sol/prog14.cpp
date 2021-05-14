#include <iostream>
using namespace std;
  
// Function to reverse a string
void reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
   {
       cout << str[i] << endl;
   }
    
}

int main(void)
{
    string s;
    cout << "Enter a sentence: " << endl;
    cin >> s;
    reverse(s);
    return 0;
}
