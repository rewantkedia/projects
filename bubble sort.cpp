#include<stdio.h>
using namespace std;

int main()
{
	int a[10];
	for( int i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted array : ");
	for( int i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	for(int i=0; i<10 ; i++)
	{
		for(int j = 0 ;j<(10-i-1) ; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array using bubble sort : ");
	for( int i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
