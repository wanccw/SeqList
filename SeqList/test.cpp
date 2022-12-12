#include "SeqList.h"
#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS;

SL sl;
SL s2;
void TestSeqList1()
{
	
	SeqListInit(&sl);
	SeqListPushBack(&sl,1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPopBack(&sl);
	SeqListPushFront(&sl, 5);
}

void TestSeqList2()
{

	SeqListInit(&sl);
	SeqListPushBack(&sl, 10);
	SeqListPushBack(&sl, 20);
	SeqListPushBack(&sl, 30);
	SeqListPushBack(&sl, 40);
	//SeqListPopBack(&sl);
	SeqListPushFront(&sl, 50);
	//SeqListPopFront(&sl);
	SeqListInsert(&sl, 2, 2);
	SeqListErase(&sl, 3);
}

void TestSeqList3()
{
	SeqListInit(&s2);
	SeqListCheckCapacity(&s2);
	SeqListPushFront(&s2, 50);
	SeqListPushFront(&s2, 20);
	SeqListFind(&s2, 50);
}

//写一个类似通讯录的菜单
void Menu()
{
	printf("***************************");
	printf("请选择你的操作:>\n");
	printf("1.头插   2.头删\n");
	printf("3.尾插   4.尾删\n");
	printf("5.打印   -1.退出\n");
	printf("***************************");

}

void MenuTest()
{

	SL s1;
	SeqListInit(&s1);
	int input = 0;
	int x;
	while (input != -1)
	{
		Menu();
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("请输入你要插入的元素，以-1结束：");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqListPushFront(&s1, x);
				scanf("%d", &x);
			}
			break;
		case 2:
			SeqListPopFront;
			break;
		case 3:
			printf("请输入你要插入的元素，以-1结束：");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqListPushBack(&s1, x);
				scanf("%d", &x);
			}
			break;
		case 4:
			SeqListPopBack;
			break;
		case 5:
			SeqListPrint(&s1);
			break;
		case 6:
			break;
		default:
			printf("无此选项，请重新输入");
			break;

		}
	}
}

int main()
{
	//int a[5] = { 1,2,3,4,5 };
	//TestSeqList2();
	//int a = sl.capacity;
	//printf("%d", a);
	//SeqListPrint(&sl );
	MenuTest();
	return 0;
}


