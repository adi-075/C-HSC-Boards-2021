#include <iostream>
using namespace std;
 
int largest(int arr[], int n)
{
    int i; // Initialize maximum element
    int max = arr[0]; // Traverse array elements from second and compare every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
 
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest in given array is "
         << largest(arr, n);
    return 0;
}
