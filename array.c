#include <stdio.h>

int main()
{
    int n,a[n],i,no,in,b[n];
    printf("array length");
    scanf("%d",&n);
    printf("no");
    scanf("%d",&no);
    printf("index");
    scanf("%d",&in);
    printf("array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<in;i++)
    {
        printf("%d\t",a[i]);
    }
    b[in]=no;
    printf("%d\t",b[in]);
    for(i=in;i<n;i++)
    {
     
     b[i]=a[in];
     
     printf("%d\t",b[i]);
     in++;
    }
    return 0;
}
