#pragma once
#include <stdio.h>
#include <stdlib.h>
#define N 1000
typedef int SLDataType;
////静态顺序表
////缺点：N给小了不够用，大了浪费
//typedef struct  SeqList
//{
//	SLDataType a[N];
//	int size;
//}SL;
//
////接口函数
//void SeqListInit(SL* ps);
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);

//动态顺序表
//
typedef struct  SeqList
{
	SLDataType* a;
	int size;			//表示数组存了多少个数据
	int capacity;		//表示实际能存数据的空间容量是多大
}SL;

//接口函数
void SeqListCheckCapacity(SL* ps);
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListPrint(SL* ps);
//...

//找到了返回x位置下标，没有找到返回-1
int SeqListFind(SL* ps, SLDataType x);
//指定pos下标位置删除
void SeqListInsert(SL* ps, int pos, SLDataType x);
//删除pos位置的数据
void SeqListErase(SL* ps, int pos);