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

//дһ������ͨѶ¼�Ĳ˵�
void Menu()
{
	printf("***************************");
	printf("��ѡ����Ĳ���:>\n");
	printf("1.ͷ��   2.ͷɾ\n");
	printf("3.β��   4.βɾ\n");
	printf("5.��ӡ   -1.�˳�\n");
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
			printf("��������Ҫ�����Ԫ�أ���-1������");
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
			printf("��������Ҫ�����Ԫ�أ���-1������");
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
			printf("�޴�ѡ�����������");
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


