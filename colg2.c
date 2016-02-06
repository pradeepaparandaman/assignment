#include<stdio.h>
main()
{
	int a[3]={1,3,5};
	int b[4]={1,10,5,20};
	int	c=add(a,b);
	int d=sub(a,b);
	/*int	e=subb(b,a);
	int	f=uni(a,b);
	int g=inter(a,b);
	printf("%d\n%d\n%d\n%d\n%d\n",c,d,e,f,g);*/
}
int add (int a[],int b[])
{
	int i,j,h[7],k,o;
	for(i=0;i<3;i++)
	{
		h[i]=a[i];
	}
	k=3;
	for(j=0;j<4;j++)
	{
		h[k]=b[j];
		k++;
	}
	
	for(o=0;o<7;o++)
	{
		printf("%d\t",h[o]);
	}		/*
	for(j=0;j<4;j++)
	{
		printf("%d\t",l[j]);
	}*/
	
}

int sub(int a[],int b[])
{
	int i,j;
	printf("\n");
	for(j=0;j<4;j++)
		{
			if(a[j]!=b[j])
			{
			printf("%d\t",a[j]);
			
			}
		}

}
				
