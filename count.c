#include <stdio.h>
#include<string.h>
int main(void) {
    char a[1000];
    int l,i;
    int b[25]={0};
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>0;i--)
    {
    	if(a[i]!=a[i-1])
    	{
    		int t=a[i]%97;
    		if(b[t]==0)
    		{
    	printf("%c",a[i]);
    	b[t]=1;
    	}
    	}
    }
	return 0;
}
