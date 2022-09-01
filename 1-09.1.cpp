#include<stdio.h>
int fun(int);
int main()
{
	int n=2;
	fun(n);
	return 0;
}
  int fun(int x)
  {
  	int i;
  	scanf("%d",&i);
  	if(i%x==0)
  	{
  	   printf("even");
	  }
	  else{
	  	printf("odd");
	  }
  }
