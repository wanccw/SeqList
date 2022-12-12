#include  "SeqList.h"
#include  "assert.h"

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}


void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;

	}
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	//如果没有空间或者空间不足就扩容
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPrint(SL* ps)
{
	for(int i = 0; i < ps->size; ++i)
	{
		printf("%d  \n ", ps->a[i]);
	}
}
void SeqListPopBack(SL* ps)
{
	if (ps->size > 0)
	{
		ps->size--;
	}
	//assert(ps->size > 0);
	//ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)
{
	assert(ps->size>0);

	//挪动数据
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

//有bug，待修改
int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i+1;
		else
			return 0;
	}
	
}

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//温柔的处理方式
	/*
	if (pos > ps->size || pos < 0)
	{
		printf("pos invalid\n");
		return;
	}
	*/
	//粗暴的方式
	assert(pos >= 0 || pos <= ps->size);
	SeqListCheckCapacity(ps);
	//挪动数据
	/*
	for (int i = ps->size-1; i > pos-1; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->size++;
	*/
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;

}

void SeqListErase(SL* ps, int pos)
{
	/*
	for (int i = pos-1; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
	*/
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while(begin <= ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;

}