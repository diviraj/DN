#include <stdio.h>
int main()
{
    int a[1000],d,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&d);
    for(i=d;i<n;i++)
    		printf("%d ",a[i]);
    for(i=0;i<d;i++)
    		printf("%d ",a[i]);		
	return 0;
}
