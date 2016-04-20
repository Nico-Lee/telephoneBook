/*this is head files*/

#include<stdio.h>
#define MAX 1000
typedef struct information
{
	char name[10];
	char sex[3];
	char tel[12];
	char address[30];
	int age;
}info;
int main()
{
	void add_linkman(info *arr);
	void printf_face();
	void del_linkman(info *arr);
	info *empt_linkman(info *arr);
	void display(info *arr);
	void display_all(info *arr);
	void alter_linkman(info *arr);
	info *find_linkman(info *arr);
	void sort(info *arr);
	info arr[MAX] = { { 0, 0, 0, 0, 0 } };
	info *tmp = arr;
	info *star = arr;
	printf("欢迎使用通讯录！\n");
	while (1)
	{
		tmp = arr;
		printf_face();
		int input = 0;
		scanf("%d", &input);
		fflush(stdin);
		switch (input)
		{
		case 1:
		{
			add_linkman(tmp);
		}; break;
		case 2:
		{
			del_linkman(tmp);
		}; break;
		case 3:
		{
			display(find_linkman(tmp));
		}break;
		case 4:
		{
			alter_linkman(tmp);
		}break;
		case 5:
		{
			display_all(tmp);
		}break;
		case 6:
		{
			empt_linkman(tmp);
		}break;
		case 7:
		{
			sort(tmp);
			display_all(arr);
		}break;
		default:
			break;
		}
	}
	return 0;
}
