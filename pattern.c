#include<stdio.h>
int main()
{
int n,i,j,k=0;
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    for(j=1;j<=n-i;j++)
    {
        printf(" b ");
    }
    while(k!=2*i-1)
    {
        printf("* ");
        ++k;
    }
    k=0;
   
    for(j=n-i;j<=2*(n-i)-1;j++)
    {
        printf(" b");
    }
    printf("\n");
}
	return 0;
}
