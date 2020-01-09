
#include<iostream>
using namespace std;
#include<string.h>
void table_alpha(char p[],int table[],int m ,int n)
{
	for(int i=0;i<126;i++)
		table[i]=m;
	for(int j=0;j<m-2;j++)
		table[p[j]]=m-1-j;
}	

void check_string(int table[],int m,int n,char t[100],char p[25])
{
	int flag=0;
	int i=m-1;
	while(i<=n-1)
	{
		int k=0;
		while(k<=m-1 && p[m-1-k]==t[i-k])
		k++;
		if(k==m)
		{
			cout<<"The position of the pattern is"<<i-m+2<<endl;
			flag=1;
			break;
		}
		else
		i=i+table[t[i]];
	}
		if(!flag)
		cout<<"Pattern is not found in the given text "<<endl;
}

int main()
{
	int table[126];
	char t[100],p[25];
	int n,i,k,j,m;
	cout<<"Enter the text : ";
	cin>>t;
	n=strlen(t);
	cout<<"Enter the pattern : ";
	cin>>p;
	m=strlen(p);
	table_alpha(p,table,m,n);
	check_string(table,m,n,t,p);
	return 0;
}
