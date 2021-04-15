#include <iostream> 
using namespace std; 
int main() 
{ 
    int i,arr[10],sum=0; 
    cout<<"Enter 10 elements:"; 
    for(i=0;i<10;++i)  //Read Operation
        cin>>arr[i]; 
 
    for(i=0;i<10;++i) //Calculate the sum of 10 elements
        sum=sum+arr[i]; 
    cout<<"Sum of numbers is:"<<sum; 
 
    return 0; 
} 