#include<stdio.h> 
int main()
{
	char str1[20];
	int i;
	printf("enter a string\n");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(i%2==0)
		str1[i]=str1[i];
		else
		str1[i]=str1[i]-32;
	}
	puts(str1);
	return 0;
}
