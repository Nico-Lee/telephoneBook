#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
#include<string.h>
void printf_face()
{
	printf("    *1.添加联系人信息            \n");
	printf("    *2.删除指定联系人信息        \n");
	printf("    *3.查找指定联系人信息        \n");
	printf("    *4.修改指定联系人信息        \n");
	printf("    *5.显示所有联系人信息        \n");
	printf("    *6.清空所有联系人            \n");
	printf("    *7.以名字排序所有联系人      \n");
}
void add_linkman(info *arr)
{
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		if (*(arr + i)->name == 0)
		{
			printf("请输入姓名：\n");
			gets((arr+i)->name);
			printf("请输入性别：\n");
			gets((arr+i)->sex);
			printf("请输入年龄：\n");
			scanf("%d", &arr->age);
			fflush(stdin);
			printf("请输入电话：\n");
			gets((arr+i)->tel);
			printf("请输入地址：\n");
			gets((arr+i)->address);
			printf("添加成功！！\n");
			break;
		}
	}
}
void del_linkman(info *arr)
{
	printf("请输入删除人姓名：\n");
	int key = 0;
	char ch[10];
	fflush(stdin);
	gets(ch);	
	for (int i = 0; i < MAX; i++)
	{
		if (strcmp(ch, (arr + i)->name) == 0)
		{
			strcpy((arr + i)->name, 0);
			strcpy((arr + i)->sex, 0);
			strcpy((arr + i)->tel, 0);
			strcpy((arr + i)->address, 0);
			(arr + i)->age = 0;
			key = 1;
			printf("删除成功！！！");
		}
	}
	if (key = 0)
	{
		printf("没有此人的信息！！！\n");
	}
}
info *find_linkman(info *arr)
{
	printf("请输入查找人姓名：\n");
	char ch[10];
	fflush(stdin);
	gets(ch);
	while (*(arr->name))
	{
		if (strcmp(ch, arr->name) == 0)
		{
			return arr;
		}
		else
			arr++;
	}
	return NULL;
}
void alter_linkman(info *arr)
{
	printf("请输入修改人姓名：\n");
	int key = 0;
	char ch[10];
	fflush(stdin);
	gets(ch);
	while (*(arr->name))
	{
		if (strcmp(ch, arr->name) == 0)
		{
			printf("请输入姓名：\n");
			gets(arr ->name);
			printf("请输入性别：\n");
			gets(arr ->sex);
			printf("请输入年龄：\n");
			scanf("%d", &arr->age);
			fflush(stdin);
			printf("请输入电话：\n");
			gets(arr ->tel);
			printf("请输入地址：\n");
			gets(arr ->address);
			printf("修改成功！！！\n");
			key = 1;
			break;
		}
		else
			arr++;
	}
	if (key = 0)
	{
		printf("查无此人！！\n");
	}
}
void display(info *arr)
{
	printf("*****************\n");
	printf("姓名：%s\n", arr->name);
	printf("性别：%s\n", arr->sex);
	printf("年龄：%d\n", arr->age);
	printf("电话：%s\n", arr->tel);
	printf("地址：%s\n", arr->address);
	printf("*****************\n");
}
void display_all(info *arr)
{
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		if (*(arr+i)->name)
		{
			display(arr+i);
		}
	}
}
info *empt_linkman(info *arr)
{
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		strcpy((arr+i)->name, 0);
		strcpy((arr+i)->sex, 0);
		strcpy((arr+i)->tel, 0);
		strcpy((arr+i)->address, 0);
		(arr+i)->age = 0;
	}
	printf("清空成功！！！\n");
	return arr;
}
void sort(info *arr)
{
	int i, j;
	for (i = 0; i < MAX - 1; i++)
		for (j = 0; j < MAX - i - 1; j++)
		{
			if (strcmp((arr + j)->name, (arr + j + 1)->name)>0)
			{
				info tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	printf("排序成功！！！\n");
}
