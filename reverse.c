#include<string.h>
int main() 
{
   char str[100], t;
   int j,k=0;
   scanf("%s",str);
   j=0;
   k=strlen(str) - 1;
	while (j<k)
	{
      	t = str[j];
      	str[j] = str[k];
      	str[k] = t;
      j++;
      k--;
   }
printf("%s", str);
   return (0);
}
