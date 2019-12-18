#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4

void SortInfo(struct student * arr, int n);

typedef struct student
{
	int number;
	char name[20];
	float TotalScore;
}STUDENT;

void SortInfo(struct student * arr, int n)
{
	//冒泡排序
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j].TotalScore < arr[j + 1].TotalScore)
			{
				STUDENT temp=arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			if (arr[j].TotalScore == arr[j + 1].TotalScore)
			{
				if (arr[j].number > arr[j + 1].number)
				{
					STUDENT temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}

int main(void)
{
	STUDENT arr[N];//创建结构体数组
	printf("请输入学生的信息：\n");//提示用户输入
	for (int i = 0; i <N; i++)//获取用户输入的学生信息
	{
		printf("姓名：");		
		scanf(" %s", &arr[i].name);
		printf("学号：");
		scanf("%d", &arr[i].number);
		printf("成绩：");
		scanf("%f", &arr[i].TotalScore);
	}

	SortInfo(arr, N);//排序  从高到低

	printf("\t\t排序后：\n");

	for (int i = 0; i < N; i++)//遍历
	{
		printf("姓名：%-8s",arr[i].name,stdout);
		printf("学号：%-8d",arr[i].number);
		printf("成绩：%-8.2f\n",arr[i].TotalScore);
	}
	system("pause");
	return 0;
}
