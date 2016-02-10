#include<stdio.h>
int add(int a,int b,int c)
{
	int p=a+b+c;
	return p;
}
int main()
{
	int a,b,c,sum=0,sum1=0,sum2=0;
	int array[3];
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	printf("%d\n",sum);
	sum1=add(a,b,c);
	printf("%d\n",sum1);
	scanf("%d%d%d",&array[0],&array[1],&array[2]);
	sum2=array[0]+array[1]+array[2];
	printf("%d\n",sum2);
	return 0;
}
