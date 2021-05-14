#include<iostream>

int main()
{
	int a[10],n,i,j,temp;
  std::cout<<"Enter the size of array: ";
  std::cin>>n;
  std::cout<<"Enter the array elements: "; 
	
	for(i=0;i<n;++i){
		std::cin>>a[i];
  }
		
	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
  std::cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
		std::cout<<" "<<a[i];
}
