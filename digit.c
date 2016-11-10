#include <stdio.h>
int main(void)
{
	int n,rem,i=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		i++;
	}
	printf("%d",i);
	return 0;
}
