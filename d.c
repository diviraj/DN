#include <stdio.h>
int main()
{
    int arr[1000],arr1[100]={0},n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
    	arr1[arr[i]]++;
    for(i=0;i<n;i++)
    {
    	if(arr1[arr[i]]==1)
    	{
    		printf("%d",arr[i]);
    		arr1[arr[i]]=0;
    	}
    }
	return 0;
}
