#include<stdio.h>
main()
{
	int a[]={1,2,3,4},b[5],c[5],n1,*n2,*n3,i;
	n1=sizeof(a);
	printf("%d",n1);
	int l =evod(a,b,c,n1,*n2,*n3);
	for( i=0;i<*n2;i++)
	{
		printf("%d",b[i]);
	}
	for(i=0;i<*n3;i++)
	{
		printf("%d",c[i]);
	}
}
int evod(int a[],int b[],int c[],int n1,int *n2,int *n3)
{
	int i,j=0,k=0;
	for(i=0;i<n1;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
}
