#include <stdio.h>
int main(void) {
	int a[100],n,i=1,j;
	printf("Enter the decimal number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	printf("The binary number is:\n");
	for(j=i-1;j>0;j--)
		printf("%d",a[j]);
	return 0;
}
