#include<stdio.h>
int fact(int);
int main()
{
	int n,c;
	scanf("%d",&n);
   c=fact(n);
	printf("factorial of is %d",c);
	return 0;
}
 int fact(int x)
 {
 	int i=1,f=1;
 	while(i<=x)
 	{
 		f=f*i;
 		i++;
	 }
	 return f;
 }
