#include    <stdio.h>
#include    <stdlib.h>
#include	<string.h>

#define MAXSIZE   100
typedef  struct  tagListNode
    { 
        char    data[20];   //������ 
        int 	next;  		 //�쵲��� 
    } ListNode; 
void ArrayListCreate(ListNode list[]);
void ArrayListInsert(ListNode list[], int pos, const char *data);
void ArrayListDelete(ListNode list[], int pos);
void ArrayListTraverse(ListNode list[]);

int main(int argc, char *argv[])
{
    ListNode table[MAXSIZE];

	ArrayListCreate(table);
	ArrayListTraverse(table);
	
	printf("\n");
	ArrayListInsert(table, 1, "�q�j�Q");   //�N�q�j�Q���J���ꤧ��
	ArrayListTraverse(table);

	printf("\n");
	ArrayListDelete(table, 3);   //�N����R�� 
	ArrayListTraverse(table);

	printf("\n");
	ArrayListInsert(table, 7, "�w��");   //�N�w�괡�JĬ�X����
	ArrayListTraverse(table);

	printf("\n");
	ArrayListDelete(table, 6);   //�N�^��R��  
	ArrayListTraverse(table);

    return 0;
}

void ArrayListCreate(ListNode list[])
{
	int i;
	for(i=0;i<MAXSIZE;i++)
	{
		list[i].next=-1;
	}

	list[0].next=3;
	strcpy(list[3].data,"����");
	list[3].next=1;
	strcpy(list[1].data,"����");
	list[1].next=6;
	strcpy(list[6].data,"�^��");
	list[6].next=7;
	strcpy(list[7].data,"Ĭ�X");
	list[7].next=0;
}

void ArrayListInsert(ListNode list[], int pos, const char *data)
{
	int i;
	for(i=0;i<MAXSIZE;i++)
	{
		if(list[i].next==-1)
		{
			strcpy(list[i].data,data);
			break;
		}
	}
	list[i].next=list[pos].next;
	list[pos].next=i;
}

void ArrayListDelete(ListNode list[], int pos)
{
	int i;
	for(i=0;i<MAXSIZE;i++)
	{
		if(list[i].next==pos)
		{
			list[i].next=list[pos].next;	
		}
	}
	list[pos].next=-1;
}

void ArrayListTraverse(ListNode list[])
{
	int i;

	for(i=list[0].next;i!=0;i=list[i].next)
	{
		if(list[i].next==0)
		{
			printf("%s",list[i].data);	
		}
		else
		{
			printf("%s,",list[i].data);
		}
	}
}
