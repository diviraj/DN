#include <stdio.h>
int main(void) 
{
	int n,a[1000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i==a[i])
			printf("%d ",i);
	}
	return 0;
}
