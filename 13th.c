#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},n,i;
		for(i=0;i<5;i++)
	{
		n=sum(a);
	}
		printf("\n%d\n",n);	
}
int sum(int a[])
{
	int x=0;
	x+=a;
	return x;
}
