# assignment#include<stdio.h>
int main()
{ 
	int f1=-1,y,f2=1,f,n,i,x,a[10],k=0,z;
	scanf("%d",&n);
	printf("enter the num");
	scanf("%d",&x);
	y=x;	
	for(i=0;i<n;i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		a[i]=f;
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{		
		if(y==a[i])
		{
			printf("the no is a fibonacci itself");
		}
		else
		{
			z = y--;
			if(z==a[i])
			{
				printf("%d%d",z,i);
			}
			
		}
	}
	
	
/*	for(i=0;i<n;i++)
	{
		
	}*/		
	return 0;
}
