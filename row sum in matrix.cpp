#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,r,c,sum;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[j][i];
		}
		printf("%d Row sum=%d\n",1+i,sum);
	}
	return 0;
}
