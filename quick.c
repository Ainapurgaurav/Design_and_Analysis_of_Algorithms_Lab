#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void quicksort(int a[],int,int);
int main()
{
	int a[200000],n,i,r;
	double total_time;
	clock_t start,end;
	printf("enter size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
	r=rand()%n;
	a[i]=r;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	start=clock();
	quicksort(a,0,n-1);
	end=clock();
	total_time=(double)(end-start)/CLOCKS_PER_SEC;
	printf("sorted elements:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n total time taken %e",total_time);
	return 0;
}
void quicksort(int a[],int first,int last)
{ 
int pivot,j,temp,i;
if(first<last)
{  
pivot=first;
i=first;
j=last;
while(i<j)
{
	while(a[i]<=a[pivot]&& i<last)
	i++;
	while(a[j]>a[pivot])
	j--;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
	}
}
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quicksort(a,first,j-1);
quicksort(a,j+1,last);

}
}
