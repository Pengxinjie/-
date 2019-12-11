#include<stdio.h>
#include<stdlib.h>

int _strcmp(char *p1,char *p2)
{
	int temp;
	int i=0;
	while(*(p1+i)!='\0'||*(p2+i)!='\0')
	{
		if(*(p1+i)>*(p2+i))
		{
			temp=1;
			break;
		}
		else if(*(p1+i)<*(p2+i))
		{
			temp=-1;
			break;
		}
		else if(*(p1+i)=='\0')
		{
			temp=-1;
		}
		else if(*(p2+i)=='\0')
		{
			temp=1;
		}
		else temp=0;
		i++;
	}
	return temp;
}

int main(void)
{
	while(1){
		char str1[20],
			 str2[20];
		gets(str1);
		gets(str2);
		printf("%d\n",_strcmp(str1,str2));
	}
	system("pause");
	return 0;
}
