#pragma once
#include <stdio.h>
#include <stdlib.h>
#define N 1000
typedef int SLDataType;
////��̬˳���
////ȱ�㣺N��С�˲����ã������˷�
//typedef struct  SeqList
//{
//	SLDataType a[N];
//	int size;
//}SL;
//
////�ӿں���
//void SeqListInit(SL* ps);
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);

//��̬˳���
//
typedef struct  SeqList
{
	SLDataType* a;
	int size;			//��ʾ������˶��ٸ�����
	int capacity;		//��ʾʵ���ܴ����ݵĿռ������Ƕ��
}SL;

//�ӿں���
void SeqListCheckCapacity(SL* ps);
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListPrint(SL* ps);
//...

//�ҵ��˷���xλ���±꣬û���ҵ�����-1
int SeqListFind(SL* ps, SLDataType x);
//ָ��pos�±�λ��ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
//ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos);