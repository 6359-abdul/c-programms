#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int upper=0,lower=0,number=0,special=0,i;
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		 upper++;
		 else if (str[i]>='a'&&str[i]<='z')
		 lower++;
		 else if(str[i]>='0'&&str[i]<='9')
		 number++;
		 else
		 special++;	
	}
	printf("upper characthers are:%d\n",upper);
	printf("lower characthers are:%d\n",lower);
	printf("numbers  characthers are:%d\n",number);
	printf("special characthers are:%d\n",special);
	puts(str);
	return 0;
}
