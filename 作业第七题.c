#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* insert(char p1[],char p2[],char c)
{
	int i=0,
		j=0;//两个循环控制变量	
	char temp[20];//临时字符串
	while(p1[i++]!='c');//找到c
	while(p1[i]!='\0')//处理c后面的字符
	{
		temp[j++]=p1[i];//把找到的位置后的字符复制到临时字符串
		p1[i++]='\0';//并赋值成0
	}
	temp[j]='\0';//%s输出字符串遇'\0'终止
	strcat(p1,p2);
	strcat(p1,temp);//连接
	return p1;//返回指针
}

int main(void)
{
	char str1[40],//字符串1
		 str2[20],//字符串2
	     str3[60]="0";//拼接后的字符串3
	char c;//要插入的位置的字符
	scanf("%s%s",str1,str2);//获取用户输入
	scanf(" %c",&c);//输入要插入的位置

    	strcpy(str3,insert(str1,str2,c));//接住函数的返回值，并复制给str3
	printf("%s\n",str3);//打印出来

	system("pause");
	return 0;
}
