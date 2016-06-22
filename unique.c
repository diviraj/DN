#include <stdio.h>
int main()
{
    int a[1000],b[100]={0},n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
    	b[a[i]]++;
    for(i=0;i<n;i++)
    {
    	if(b[a[i]]==1)
    	{
    		printf("%d",a[i]);
    		b[a[i]]=0;
    	}
    }
	return 0;
}
