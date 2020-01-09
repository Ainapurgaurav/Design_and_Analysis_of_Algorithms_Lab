#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int a[50000];
int b[50000];
void merging(int low,int mid,int high)
{  
int l1,l2,i;
l1=low,l2=mid+1;
for(i=low;l1<=mid && l2<=high;i++)
{ 
if(a[l1]<=a[l2])
b[i]=a[l1++];
else
b[i]=a[l2++];

}
while(l1<=mid)
b[i++]=a[l1++];
while(l2<=high)
b[i++]=a[l2++];
for(i=low;i<high;i++)
a[i]=b[i];
}
void sort(int low,int high)
{ int mid ;
if(low<high)
{
	mid=(low+high)/2;
	sort(low,mid);
	sort(mid+1,high);
	merging(low,mid,high);
	
}
else
return;
}
int main()
{ 
int i,n,r;
double total_time;
clock_t start,end;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
r=rand()%n;
a[i]=r;
}
printf("list before sorting\n");
for(i=0;i<=n;i++)
printf("%d",a[i]);
start=clock();
sort(0,n);
end=clock();
total_time=(double)(end-start)/CLOCKS_PER_SEC;
printf("\n list after sorting\n");
for(i=0;i<=n;i++)
printf("%d",a[i]);
printf("\n total time taken %e",total_time);
return 0;
}
