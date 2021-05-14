#include <iostream> 
using namespace std; 

int min(int,int,int,int);

int main()
{
  int j, k , l, m;
  cout << "Enter four integers: ";
  cin >> j >> k >> l >> m;
  cout << "The Minimum Number: " << min(j,k,l,m) << endl;
  return 0;
}
int min(int w, int a, int s, int d)
{
  int min=w;
  if(a<min)min=a;
  if(s<min)min=s;
  if(d<min)min=d;
  return min;
}
