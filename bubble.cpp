#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
 clock_t start,end;
        double totaltime;

int main()
{
int i,j,n,temp,a[100];
start=clock();
cout<<"enter the value for n \n";
cin>>n;

for(int i=0;i<n;i++)
	{
	int r=rand();
	a[i]=r;	 
		
	}
/*cout<<"enter the array elements \n";
for(i=0;i<n;i++)
cin>>a[i];*/
for(i=0;i<n-2;i++)
{
for(j=0;j<n-2-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}

cout<<"the sorted array is \n";
for(i=0;i<n;i++)
cout<<a[i]<<endl;

end=clock();
totaltime=(double)(end-start)/CLOCKS_PER_SEC;
cout<<"the time taken is \t "<<totaltime;

}

 
