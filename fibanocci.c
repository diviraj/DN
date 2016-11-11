#include <stdio.h>
int main(void)
{
	int c,i,m;
	int a=0,b=1;
	printf("Enter the last value\n");
	scanf("%d",&m);
	printf("%d %d ",a,b);
	for(i=0;i<m;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	
	return 0;
}
