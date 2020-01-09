#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{  
   int a[100000],n,i,j,max,r,temp;
   double total_time;
   clock_t start,end;
   printf("enter number of elements\n");
   scanf("%d",&n);
   printf("enter %d integer \n",n);
   for(i=0;i<n;i++)
   {
   	r=rand()%n;
   	a[i]=r;
   }
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
   start=clock();
   for(i=0;i<(n-1);i++)
   {  
   max=i;
   for(j=i+1;j<n;j++)
   {
   if(a[max]>a[j])
   max=j;
}
if(max!=i)
{
	temp=a[i];
	a[i]=a[max];
	a[max]=temp;
}
}
end=clock();
total_time=(double)(end-start)/CLOCKS_PER_SEC;
printf("sorted list in ascending order:\n ");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("\n Total time taken %e",total_time);
return 0;
   }
   
   

